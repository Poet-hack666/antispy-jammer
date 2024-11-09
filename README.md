/*
 Copyright (C) 2011 J. Coliz <maniacbug@ymail.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */

#ifndef RF24_H_
#define RF24_H_

#include "RF24_config.h"

#if defined(RF24_LINUX) || defined(LITTLEWIRE)
    #include "utility/includes.h"
#elif defined SOFTSPI
    #include <DigitalIO.h>
#endif

typedef enum
{
    RF24_PA_MIN = 0,
    RF24_PA_LOW,
    RF24_PA_HIGH,
    RF24_PA_MAX,
    RF24_PA_ERROR
} rf24_pa_dbm_e;

typedef enum
{
    RF24_1MBPS = 0,
    RF24_2MBPS,
    RF24_250KBPS
} rf24_datarate_e;

typedef enum
{
    RF24_CRC_DISABLED = 0,
    RF24_CRC_8,
    RF24_CRC_16
} rf24_crclength_e;

class RF24
{
private:
#ifdef SOFTSPI
    SoftSPI<SOFT_SPI_MISO_PIN, SOFT_SPI_MOSI_PIN, SOFT_SPI_SCK_PIN, SPI_MODE> spi;
#elif defined(SPI_UART)
    SPIUARTClass uspi;
#endif

#if defined(RF24_LINUX) || defined(XMEGA_D3) /* XMEGA can use SPI class */
    SPI spi;
#endif // defined (RF24_LINUX) || defined (XMEGA_D3)
#if defined(RF24_SPI_PTR)
    _SPI* _spi;
#endif // defined (RF24_SPI_PTR)

    rf24_gpio_pin_t ce_pin;  /* "Chip Enable" pin, activates the RX or TX role */
    rf24_gpio_pin_t csn_pin; /* SPI Chip select */
    uint32_t spi_speed;      /* SPI Bus Speed */
#if defined(RF24_LINUX) || defined(XMEGA_D3) || defined(RF24_RP2)
    uint8_t spi_rxbuff[32 + 1]; //SPI receive buffer (payload max 32 bytes)
    uint8_t spi_txbuff[32 + 1]; //SPI transmit buffer (payload max 32 bytes + 1 byte for the command)
#endif
    uint8_t status;                   /* The status byte returned from every SPI transaction */
    uint8_t payload_size;             /* Fixed size of payloads */
    uint8_t pipe0_reading_address[5]; /* Last address set on pipe 0 for reading. */
    uint8_t config_reg;               /* For storing the value of the NRF_CONFIG register */
    bool _is_p_variant;               /* For storing the result of testing the toggleFeatures() affect */
    bool _is_p0_rx;                   /* For keeping track of pipe 0's usage in user-triggered RX mode. */

protected:
    inline void beginTransaction();

    inline void endTransaction();

    bool ack_payloads_enabled;
    uint8_t addr_width;
    bool dynamic_payloads_enabled;

    void read_register(uint8_t reg, uint8_t* buf, uint8_t len);

    uint8_t read_register(uint8_t reg);

public:
    RF24(rf24_gpio_pin_t _cepin, rf24_gpio_pin_t _cspin, uint32_t _spi_speed = RF24_SPI_SPEED);

    RF24(uint32_t _spi_speed = RF24_SPI_SPEED);

#if defined(RF24_LINUX)
    virtual ~RF24() {};
#endif

    bool begin(void);

#if defined(RF24_SPI_PTR) || defined(DOXYGEN_FORCED)
    bool begin(_SPI* spiBus);

    bool begin(_SPI* spiBus, rf24_gpio_pin_t _cepin, rf24_gpio_pin_t _cspin);
#endif // defined (RF24_SPI_PTR) || defined (DOXYGEN_FORCED)

    bool begin(rf24_gpio_pin_t _cepin, rf24_gpio_pin_t _cspin);

    bool isChipConnected();

    void startListening(void);

    void stopListening(void);

    bool available(void);

    void read(void* buf, uint8_t len);

    bool write(const void* buf, uint8_t len);

    void openWritingPipe(const uint8_t* address);

    void openReadingPipe(uint8_t number, const uint8_t* address);

    void printDetails(void);

    void printPrettyDetails(void);

    uint16_t sprintfPrettyDetails(char* debugging_information);

    void encodeRadioDetails(uint8_t* encoded_status);

    bool available(uint8_t* pipe_num);

    bool rxFifoFull();

    uint8_t isFifo(bool about_tx);

    bool isFifo(bool about_tx, bool check_empty);

    void powerDown(void);

    void powerUp(void);

    bool write(const void* buf, uint8_t len, const bool multicast);

    bool writeFast(const void* buf, uint8_t len);

    bool writeFast(const void* buf, uint8_t len, const bool multicast);

    bool writeBlocking(const void* buf, uint8_t len, uint32_t timeout);

    bool txStandBy();

    bool txStandBy(uint32_t timeout, bool startTx = 0);

    bool writeAckPayload(uint8_t pipe, const void* buf, uint8_t len);

    void whatHappened(bool& tx_ok, bool& tx_fail, bool& rx_ready);

    void startFastWrite(const void* buf, uint8_t len, const bool multicast, bool startTx = 1);

    bool startWrite(const void* buf, uint8_t len, const bool multicast);

    void reUseTX();

    uint8_t flush_tx(void);

    uint8_t flush_rx(void);

    bool testCarrier(void);

    bool testRPD(void);

    bool isValid();

    void closeReadingPipe(uint8_t pipe);

#if defined(FAILURE_HANDLING)
    bool failureDetected;
#endif // defined (FAILURE_HANDLING)

    void setAddressWidth(uint8_t a_width);

    void setRetries(uint8_t delay, uint8_t count);

    void setChannel(uint8_t channel);

    uint8_t getChannel(void);

    void setPayloadSize(uint8_t size);

    uint8_t getPayloadSize(void);

    uint8_t getDynamicPayloadSize(void);

    void enableAckPayload(void);

    void disableAckPayload(void);

    void enableDynamicPayloads(void);

    void disableDynamicPayloads(void);

    void enableDynamicAck();

    bool isPVariant(void);

    void setAutoAck(bool enable);

    void setAutoAck(uint8_t pipe, bool enable);

    void setPALevel(uint8_t level, bool lnaEnable = 1);

    uint8_t getPALevel(void);

    uint8_t getARC(void);

    bool setDataRate(rf24_datarate_e speed);

    rf24_datarate_e getDataRate(void);

    void setCRCLength(rf24_crclength_e length);

    rf24_crclength_e getCRCLength(void);

    void disableCRC(void);

    void maskIRQ(bool tx_ok, bool tx_fail, bool rx_ready);

    uint32_t txDelay;

    uint32_t csDelay;

    void startConstCarrier(rf24_pa_dbm_e level, uint8_t channel);

    void stopConstCarrier(void);

    void toggleAllPipes(bool isEnabled);

    void setRadiation(uint8_t level, rf24_datarate_e speed, bool lnaEnable = true);

    void openReadingPipe(uint8_t number, uint64_t address);

    void openWritingPipe(uint64_t address);

    bool isAckPayloadAvailable(void);

private:
    void _init_obj();

    bool _init_radio();

    bool _init_pins();

    void csn(bool mode);

    void ce(bool level);

    void write_register(uint8_t reg, const uint8_t* buf, uint8_t len);

    void write_register(uint8_t reg, uint8_t value);

    void write_payload(const void* buf, uint8_t len, const uint8_t writeType);

    void read_payload(void* buf, uint8_t len);

    uint8_t get_status(void);

#if !defined(MINIMAL)

    void print_status(uint8_t status);

    void print_observe_tx(uint8_t value);

    void print_byte_register(const char* name, uint8_t reg, uint8_t qty = 1);

    void print_address_register(const char* name, uint8_t reg, uint8_t qty = 1);

    uint8_t sprintf_address_register(char* out_buffer, uint8_t reg, uint8_t qty = 1);
#endif

    void toggle_features(void);

#if defined(FAILURE_HANDLING) || defined(RF24_LINUX)

    void errNotify(void);

#endif

    inline uint8_t _data_rate_reg_value(rf24_datarate_e speed);

    inline uint8_t _pa_level_reg_value(uint8_t level, bool lnaEnable);

};

#endif // RF24_H_