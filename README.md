 #
 	RF24 (rf24_gpio_pin_t _cepin, rf24_gpio_pin_t _cspin, uint32_t _spi_speed=RF24_SPI_SPEED)
 
 	RF24 (uint32_t _spi_speed=RF24_SPI_SPEED)
 
bool 	begin (void)
 
bool 	begin (_SPI *spiBus)
 
bool 	begin (_SPI *spiBus, rf24_gpio_pin_t _cepin, rf24_gpio_pin_t _cspin)
 
bool 	begin (rf24_gpio_pin_t _cepin, rf24_gpio_pin_t _cspin)
 
bool 	isChipConnected ()
 
void 	startListening (void)
 
void 	stopListening (void)
 
bool 	available (void)
 
void 	read (void *buf, uint8_t len)
 
bool 	write (const void *buf, uint8_t len)
 
void 	openWritingPipe (const uint8_t *address)
 
void 	openReadingPipe (uint8_t number, const uint8_t *address#