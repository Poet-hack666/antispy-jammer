/*
 * Antispy ultrasonic device for preventing voice recording 
 * with ultrasonic waves generation based on ARDUINO DIGISPARK,
 * connections : 
 * DIGISPARK HAS TO BE POWERED FROM 12V THROUGH Vin PIN
 * TPA3116 HAS TO BE CONNECTED TO 12V AND GND 
 * TPA3116 module INPUT"+" connected to Port 2 of DIGISPARK
 * TPA3116 module INPUT"-" connected to Port 0 of DIGISPARK
 * at least 10 piezzo-electric ultrasonic transducers connected in parallel to TPA3116 OUTPUT PINS
 * (C) Adam Loboda 2023, adam.loboda@wp.pl
 */

#include <stdint.h>
#include <util/delay.h>
#include <stdbool.h>
#include <avr/io.h>
#include <avr/pgmspace.h>

// PIN - PORT ASSIGNMENT DEFINITION FOR OUTPUT
#define  OUTPUTPORT        PORTB
#define  OUTPUTPORTCTRL    DDRB

// created in Excell / Libreoffice - will randomly 
// swing pulse width to achieve noise effect around the center 25kHz frequrency
const uint8_t  randomized[] PROGMEM = 
  {
20,50,60,69,44,24,49,27,36,58,45,47,68,53,63,62,46,66,70,19,41,32,67,19,38,35,55,60,22,68,29,24,64,
29,55,19,12,30,32,36,21,46,63,32,42,11,58,38,21,46,40,39,65,28,16,42,54,63,24,19,40,18,40,19,36,16,
40,43,37,41,58,25,52,40,61,70,65,16,28,50,30,11,19,31,10,23,30,10,68,30,36,59,66,38,47,68,23,46,51,
39,46,25,31,45,64,49,22,21,13,51,19,64,69,21,59,22,40,32,67,28,31,37,10,61,39,41,48,17,70,53,11,39,
19,66,29,60,49,24,46,27,64,56,33,66,70,51,49,38,14,60,58,39,65,67,34,48,34,14,26,21,47,58,57,38,36,
37,21,17,47,63,63,63,44,54,12,48,29,57,70,35,10,59,22,20,23,26,48,22,64,70,23,40,17,51,16,46,13,51,
53,22,17,59,52,59,36,53,47,25,30,63,19,20,10,19,51,65,22,41,47,55,23,51,68,32,34,70,10,69,41,20,42,
30,49,70,60,70,64,18,37,65,61,38,58,43,23,54,67,51,30,28,14,25,24,46,35,26,50,67,18,57,45,18,11,64,
61,68,54,47,61,54,13,17,14,12,56,58,16,33,54,55,54,35,65,15,26,18,69,37,67,64,33,53,53,38,49,32,16,
68,61,69,56,26,59,48,10,44,63,17,19,18,22,18,51,54,39,11,65,40,50,10,30,15,64,69,68,34,18,48,41,56,
35,19,50,66,10,64,58,13,56,42,17,27,40,14,60,67,33,50,26,61,44,65,24,43,41,55,56,59,41,40,58,19,56,
68,65,18,19,37,58,34,48,14,14,12,15,66,69,33,64,47,62,65,30,26,21,53,12,45,50,38,10,30,23,40,40,51,
37,43,13,27,60,54,24,64,21,66,60,57,19,58,13,43,63,52,23,24,46,54,39,49,25,35,15,25,34,22,32,66,21,
19,52,51,33,49,18,50,23,43,48,67,41,21,46,14,40,24,12,51,46,17,46,25,24,13,36,15,18,28,62,28,28,63,
59,58,64,66,54,19,42,63,64,23,41,67,10,11,65,39,15,33,16,55,10,50,50,43,70,55,34,29,50,32,56,16,35,
45,20,52,29,45,53,23,26,35,33,56,40,28,59,59,46,17,45,48,68,62,44,29,52,11,31,41,39,56,64,26,23,20,
15,63,63,22,17,36,22,37,19,24,42,51,56,69,64,31,56,29,26,53,29,53,39,11,27,41,32,63,40,20,52,69,15,
36,54,61,27,23,56,49,59,14,64,11,53,27,21,31,14,62,14,57,32,46,68,63,38,65,46,60,14,57,50,12,20,30,
39,25,50,23,34,56,23,54,24,47,58,54,36,27,30,55,50,51,12,34,11,35,46,30,15,34,15,65,15,11,60,41,54,
12,41,27,13,53,54,54,51,62,47,23,31,25,24,45,69,38,53,32,51,67,67,35,25,48,55,55,68,21,51,51,35,32,
37,47,51,47,69,37,54,32,32,37,27,44,54,29,61,45,52,54,36,44,69,65,68,18,31,36,31,57,69,64,18,37,34,
36,54,66,36,16,13,19,65,29,56,45,38,40,57,61,65,24,56,32,55,44,46,28,37,29,61,63,60,49,23,10,21,13,
23,38,24,36,41,11,12,37,70,67,67,38,31,56,48,39,31,65,38,66,30,63,29,10,65,28,23,54,46,61,34,29,11,
52,15,15,34,28,40,16,29,36,39,52,37,53,23,27,66,57,57,25,37,57,37,28,44,64,34,30,17,41,51,15,47,36,
67,59,68,48,67,41,56,21,62,69,48,31,48,46,62,55,36,24,51,32,47,34,30,48,29,16,42,62,26,14,32,46,70,
29,47,56,25,44,62,42,23,62,61,40,47,45,45,47,65,66,15,28,47,59,17,37,56,10,60,52,31,65,18,55,58,62,
69,28,34,58,56,46,68,47,67,37,50,29,65,16,42,42,53,21,64,37,68,40,13,12,33,14,44,59,22,49,43,22,42,
17,14,33,35,41,36,41,40,35,14,34,25,26,19,10,44,70,47,33,35,18,50,65,47,43,26,68,47,30,25,49,22,57,
38,29,70,16,38,14,68,70,18,19,22,34,31,20,60,23,41,32,22,20,40,31,52,17,58,62,26,14,50,57,13,58,59,
44,12,38,48,18,42,14,49,53,44,62,48,38,59,32,41,45,35,50,67,63,47,28,32,11,48,32,27,21,34,31,27,58,
49,28,66,47,40,38,51,58,59,19,48,41,24,17,66,70,12,62,54,23,19,43,42,20,67,30,47,39,26,14,49,60,25,
12,44,29,26,17,45,34,61,12,54,47,14,30,57,70,23,25,15,67,38,27,11,12,15,18,65,46,22,20,23,64,45,24,
35,69,26,32,68,68,34,68,20,51,12,21,23,33,17,26,68,46,25,58,65,69,37,57,18,64,23,14,41,60,46,35,58,
32,56,23,51,60,55,35,11,23,70,50,15,47,10,61,14,33,10,67,57,11,46,30,36,61,47,24,12,67,57,68,70,59,
20,17,53,68,66,59,29,24,28,41,69,12,12,64,44,19,50,46,61,70,21,29,13,17,39,50,23,56,23,20,18,34,25,
15,38,61,40,54,36,33,45,26,34,14,60,43,33,16,15,62,70,52,61,63,67,19,22,53,42,31,66,18,44,12,58,64,
27,45,21,52,10,10,60,48,27,27,44,26,66,49,27,31,69,35,22,44,41,28,64,16,67,22,23,45,65,21,24,65,11,
27,21,55,36,17,25,59,30,24,28,61,56,18,49,55,58,18,26,58,38,38,39,44,53,62,66,15,50,54,52,10,50,33,
69,70,53,66,35,41,32,17,10,22,29,18,48,44,27,47,12,20,48,57,27,49,50,45,11,27,19,15,49,10,24,43,59,
12,28,52,69,15,11,40,42,40,36,35,60,54,44,56,26,68,48,15,25,68,59,17,19,11,21,34,38,65,36,27,12,62,
50,35,41,18,66,58,57,64,69,49,48,10,45,25,25,68,60,34,38,53,67,15,39,39,67,25,26,64,41,32,61,45,52,
15,32,29,26,67,18,69,36,57,58,40,44,48,10,44,51,69,25,14,30,26,27,41,50,58,44,43,42,46,14,32,19,27,
56,47,11,47,11,67,47,49,30,42,61,12,59,48,10,49,64,50,35,52,36,36,33,62,43,18,49,40,11,11,14,41,24,
30,47,62,48,57,62,67,54,64,40,39,35,31,43,46,59,47,58,48,12,40,12,12,35,16,59,18,35,12,59,41,41,49,
45,61,36,47,42,49,37,63,17,23,55,52,31,45,24,51,12,22,41,34,65,19,61,15,21,36,61,51,25,41,58,14,45,
35,15,51,31,18,35,61,51,56,70,63,52,24,68,11,19,47,50,59,57,14,24,28,39,12,22,20,19,61,36,63,22,34,
39,25,68,22,28,14,49,57,70,41,51,56,45,45,37,57,24,23,33,28,44,24,15,39,28,23,49,58,46,60,64,16,35,
44,13,43,69,40,70,56,40,55,36,59,42,39,51,35,13,38,58,10,21,16,57,20,64,20,50,25,25,25,10,16,46,45,
47,27,19,59,56,55,51,69,34,63,34,50,70,10,27,11,67,44,52,40,43,69,24,24,68,37,15,53,49,47,53,36,57,
54,25,40,22,42,35,65,42,65,39,66,30,49,69,50,47,31,23,61,68,41,34,16,61,28,53,29,36,18,49,63,63,68,
70,65,60,61,44,17,57,34,19,55,21,25,12,68,20,68,17,61,49,25,62,45,65,58,57,26,49,57,51,55,31,60,11,
14,58,67,26,55,51,60,54,46,11,21,17,60,14,51,24,21,16,13,48,18,46,29,42,54,56,46,48,69,14,66,29,60,
21,22,22,31,41,52,25,34,56,37,61,15,10,14,63,45,30,29,23,57,17,40,47,44,61,15,63,12,65,57,33,10,23,
41,43,16,56,29,33,19,24,45,50,60,17,67,21,17,51,30,45,16,40,69,37,47,40,21,15,21,57,31,62,43,53,16,
53,21,14,44,68,35,22,64,24,68,59,23,41,70,31,23,20,26,65,53,52,41,27,65,58,13,28,31,41,39,62,50,57,
26,55,47,14,41,16,18,53,62,20,52,12,49,58,27,31,22,25,44,17,32,37,16,20,59,22,70,49,58,25,53,58,69,
17,26,51,31,48,38,13,45,33,14,36,37,59,44,26,44,30,58,29,20,38,41,53,31,66,61,13,58,10,63,37,44,17,
51,17,14,46,57,29,63,45,31,24,42,19,67,62,47,69,13,29,17,37,52,39,34,22,29,46,29,50,21,65,34,50,26,
26,57,67,41,62,67,28,23,32,32,22,50,62,55,68,38,64,11,41,27,50,37,36,49,12,29,20,37,33,43,34,17,69,
28,56,48,61,10,24,25,70,68,60,15,57,53,50,35,41,70,36,30,69,38,34,54,31,18,39,28,13,11,24,21,47,29,
41,41,45,67,22,53,32,56,33,33,17,58,29,48,65,24,11,70,26,25,39,32,38,60,57,60,50,69,68,49,28,44,23,
27,12,60,68,54,45,54,11,29,56,50,35,60,26,70,38,23,20,39,58,38,52,26,39,52,27,41,65,27,13,31,65,53,
53,70,61,11,51,52,11,34,20,59,42,24,50,45,45,45,46,63,12,20,65,11,13,27,69,53,31,16,16,55,46,64,42,
35,59,35,50,24,64,18,60,36,29,49,52,24,25,47,24,13,48,69,25,25,26,16,34,67,34,27,42,65,33,13,68,26,
67,46,14,70,19,38,41,12,62,60,38,22,55,46,60,35,19,70,24,38,23,55,26,62,51,21,32,35,14,22,67,14,12,
54,69,31,36,56,50,61,18,32,44,18,51,51,58,46,56,45,63,10,22,46,68,29,50,62,17,66,42,56,19,41,44,41,
42,63,63,60,22,54,25,62,56,26,24,11,60,11,26,14,11,20,23,42,14,41,68,16,29,35,23,64,20,55,11,55,50,
33,24,59,55,43,49,66,19,30,42,69,14,10,22,36,41,56,42,56,37,60,35,37,22,43,18,46,28,58,57,70,38,59,
43,47,41,25,61,37,18,62,66,61,26,23,41,70,14,46,46,46,51,37,40,38,50,20,32,57,52,35,38,54,41,70,39,
33,38,67,29,52,48,19,57,29,18,25,20,24,52,13,46,36,35,60,13,35,25,62,68,33,66,18,37,31,65,51,36,38,
58,57,58,29,56,69,22,30,26,69,70,40,56,15,34,23,33,13,63,27,55,14,56,50,70,44,63,49,48,36,57,52,50,
42,14,44,70,35,30,35,61,35,58,28,64,69,66,65,40,39,68,46,22,45,64,68,43,68,19,10,49,29,39,55,18,19,
54,29,16,62,43,32,14,54,10,69,58,39,38,22,59,70,26,19,61,63,26,65,58,52,61,43,48,47,64,24,17,49,35,
58,15,69,35,23,53,69,56,41,45,10,44,60,17,13,27,24,24,52,21,50,17,34,38,18,60,50,62,26,41,35,28,54,
40,35,12,41,67,50,57,32,34,33,42,59,17,35,40,27,56,54,66,38,38,25,22,67,10,40,29,56,39,61,61,32,51,
45,46,26,38,19,43,18,65,60,12,53,32,15,57,55,52,49,34,48,67,38,61,68,37,46,65,50,29,28,54,30,58,38,
46,15,19,46,23,54,13,32,39,32,17,33,18,55,14,50,13,23,21,27,12,57,28,37,46,66,31,24,52,17,63,39,13,
41,37,68,28,38,33,45,58,63,66,56,33,34,25,12,70,26,33,46,67,58,61,15,30,68,30,36,21,66,10,55,20,16,
69,66,56,68,69,39,12,30,50,63,53,19,42,22,69,13,39,43,16,43,15,10,40,35,10,63,64,34,22,39,60,44,58,
26,66,41,67,51,56,52,29,28,39,49,49,40,60,23,42,17,22,20,14,55,40,12,35,44,34,32,69,28,45,29,52,50,
25,31,16,64,32,11,48,16,49,38,58,70,57,43,36,14,32,18,55,39,50,66,37,24,27,40,38,47,19,31,35,26,19,
69,26,11,19,53,39,15,65,58,24,15,58,44,36,51,55,39,27,32,67,53,19,39,20,35,34,11,12,23,15,41,38,40,
24,35,32,29,46,42,24,58,69,29,22,70,17,45,62,51,35,52,20,26,33,16,28,52,13,52,21,20,29,24,11,42,55,
35,51,44,38,67,21,11,50,35,50,26,36,68,53,25,18,11,61,67,62,45,70,30,10,67,66,15,66,58,57,46,47,29,
22,52,14,15,24,17,35,41,34,40,58,40,38,33,10,13,49,68,33,39,31,28,28,45,24,53,30,64,24,11,44,17,62,
19,38,44,39,20,53,38,14,43,27,27,28,18,38,47,56,68,28,64,59,38,17,62,37,28,61,13,37,55,60,36,45,65,
17,61,54,19,49,15,50,10,46,10,60,65,45,50,23,28,19,58,11,30,63,25,48,61,34,23,30,27,11,11,26,44,53,
22,20,14,40,44,63,38,50,56,28,12,45,70,29,49,34,59,39,60,39,43,50,65,54,23,44,43,59,68,31,32,58,51,
66,11,61,60,43,26,28,22,38,12,48,66,46,64,57,31,22,33,25,32,58,62,47,44,25,62,47,65,49,29,40,30,28,
16,55,45,69,15,31,67,13,61,16,13,43,69,41,23,70,62,59,57,63,39,46,36,40,27,50,38,63,60,65,35,23,32,
31,55,23,67,70,70,40,55,69,70,10,57,64,29,60,11,48,30,65,51,45,62,57,54,20,36,20,17,61,48,50,12,21,
39,22,56,42,26,61,39,45,58,10,49,29,12,62,37,38,47,45,48,17,33,40,37,25,56,62,44,63,55,54,31,45,65,
31,61,10,65,25,34,17,25,57,39,41,48,64,37,11,23,56,60,10,35,41,47,17,20,55,31,19,60,24,49,30,45,32,
62,43,60,25,41,26,27,38,52,32,35,56,47,23,14,66,17,64,56,26,56,16,69,36,11,67,64,31,35,70,39,50,38,
66,65,54,33,42,54,62,40,65,67,57,13,33,37,51,63,70,18,28,18,33,65,67,38,64,11,16,39,65,31,42,51,51,
68,11,13,57,13,31,12,12,66,59,39,12,32,43,49,60,18,24,63,40,39,50,45,10,10,50,67,36,45,62,13,64,56,
52,18,36,23,27,29,53,62,30,50,22,61,57,18,63,19,60,52,55,31,14,11,26,34,43,31,38,42,69,40,59,34,45,
41,51,60,67,17,43,64,40,70,45,31,60,39,52,30,43,20,59,47,20,56,59,56,21,15,65,46,26,58,29,48,25,20,
44,67,50,24,36,40,40,31,27,45,50,31,64,33,48,69,49,53,39,52,41,62,19,49,21,10,31,49,66,51,68,28,61,
55,40,19,22,51,23,61,32,49,41,57,24,29,35,29,10,58,46,68,12,65,20,65,58,40,11,60,46,19,49,39,25,30,
42,13,30,32,42,27,62,39,49,21,34,63,35,36,10,64,13,19,61,63,27,27,19,25,32,44,45,63,16,10,28,20,18,
24,12,47,51,31,62,43,66,16,22,62,62,44,32,23,27,56,24,47,53,68,63,52,16,70,51,36,50,38,54,53,50,57,
34,36,52,34,67,51,31,13,29,20,48,41,13,16,69,66,48,41,29,63,66,64,29,66,51,32,62,10,18,56,19,64,13,
55,50,55,24,68,19,61,27,34,37,14,29,62,43,46,24,66,70,52,66,19,69,16,36,47,63,70,53,58,30,19,65,33,
33,37,40,15,42,60,60,55,67,24,42,10,11,32,59,10,26,62,45,47,33,54,69,54,44,61,21,21,30,11,66,60,49,
60,31,62,68,60,49,44,33,55,39,46,26,36,22,39,15,50,60,15,55,14,54,38,25,42,31,30,45,46,41,21,45,56,
55,35,21,21,10,66,16,26,17,28,20,51,32,32,16,69,36,49,66,41,63,69,18,50,33,59,27,26,70,16,28,20,67,
54,69,26,47,53,55,58,23,12,45,57,39,34,32,40,29,10,46,48,14,64,54,47,20,39,40,62,23,66,27,35,55,11,
55,50,24,61,40,17,15,26,19,54,63,48,29,19,68,21,67,41,23,58,36,43,24,55,69,28,41,10,20,24,52,35,39,
29,69,40,24,10,65,33,18,62,18,70,23,33,27,42,13,48,38,34,49,68,69,31,28,53,54,56,58,52,20,58,67,55,
48,48,47,44,66,31,58,52,16,59,16,26,64,64,19,60,59,23,15,22,22,62,54,18,61,41,13,33,56,58,62,61,67,
54,41,22,46,29,36,18,64,54,36,69,36,46,24,41,18,64,62,64,32,22,26,27,70,68,30,37,47,38,46,15,66,51,
36,18,13,32,54,66,47,25,65,40,28,52,15,10,45,19,26,31,52,16,18,70,61,17,33,55,30,44,52,17,52,17,55,
57,58,22,14,64,39,52,57,50,14,38,11,31,62,55,11,60,62,29,38,35,58,40,25,20,57,41,44,28,39,32,21,53,
39,47,31,27,28,45,35,38,53,45,36,33,57,13,18,14,35,67,21,50,24,59,54,20,44,68,70,12,41,21,10,62,69,
37,56,68,34,39,43,15,44,53,11,70,50,67,45,16,60,63,53,46,52,54,24,66,31,48,41,22,30,70,16,33,51,19,
14,26,53,41,55,21,14,56,40,54,30,17,36,50,49,41,46,51,68,46,25,47,15,53,47,53,54,15,61,24,26,28,49,
44,56,22,56,11,58,64,46,69,35,61,27,61,13,34,23,37,45,59,11,30,22,65,47,15,16,64,28,60,66,41,27,29,
53,62,29,69,20,45,37,42,46,67,12,46,46,51,68,63,28,13,40,65,34,46,56,16,22,52,20,25,54,52,43,17,63,
59,21,66,53,33,50,10,31,65,15,48,55,32,35,25,42,21,35,60,15,44,39,25,18,50,23,60,62,20,15,36,24,66,
16,64,64,63,63,42,45,49,67,31,53,63,41,22,14,34,57,10,44,34,43,43,38,56,36,62,46,10,31,28,69,16,64,
56,46,33,32,49,25,18,43,36,62,28,38,43,43,38,39,39,17,25,45,24,29,19,60,24,39,18,55,41,52,53,67,39,
27,25,22,65,18,66,62,58,19,10,65,60,10,67,34,61,69,53,58,54,34,52,46,12,26,10,68,19,60,63,64,67,31,
30,37,47,21,38,55,43,26,24,70,20,21,23,25,48,11,60,49,45,22,63,45,57,33,56,66,31,59,68,47,69,52,19,
51,15,37,19 
};


const uint8_t  randomdelay[] PROGMEM = 
  {
 66,234,126,29,225,1,62,230,27,54,57,145,182,221,186,9,108,15,
58,136,254,194,31,56,187,38,179,88,203,62,25,235,243,26,29,70,
155,243,45,173,219,157,239,235,199,2,66,228,5,9,114,167,15,29,
29,194,83,189,34,223,164,91,150,162,187,60,245,249,231,158,
169,4,178,234,82,238,110,231,122,85,192,239,31,4,229,66,52,
112,213,172,98,193,71,209,17,100,99,233,147,20,234,49,45,228,
181,146,182,73,20,231,230,20,57,7,174,138,117,158,65,67,28,88,
189,118,97,238,123,84,226,244,16,252,247,190,95,203,41,41,98,
156,137,60,126,44,71,78,69,253,21,240,140,176,63,102,17,75,30,
153,167,34,184,182,23,103,57,36,55,70,72,198,183,110,136,7,81,
195,201,84,175,107,133,126,186,255,58,22,138,124,190,119,238,
223,175,195,111,86,46,95,47,175,99,171,224,114,60,134,129,252,
137,27,58,172,141,176,49,45,145,43,77,86,89,36,34,207,119,173,
108,111,186,96,112,216,39,135,186,200,235,107,52,21,131,158,
255,46,105,151,242,43,248,64,197,141,236,255,106,19,5,117,87,
109,198,126,155,9,21,142,43,229,227,222,220,127,217,100,96,40,
255,243,119,194,37,205,19,62,245,47,217,8,247,155,113,3,35,211,
174,136,189,168,73,49,133,32,180,67,236,44,189,142,1,206,51,
110,192,37,139,255,15,149,26,188,107,165,140,88,188,75,173,33,
136,47,254,133,89,34,147,89,20,7,26,127,209,82,131,230,162,36,
154,147,75,150,79,121,241,128,80,253,50,12,17,224,36,175,120,
158,133,136,1,139,30,157,123,185,95,62,190,39,175,66,137,29,67,
175,207,130,163,153,199,176,124,73,146,22,68,138,109,252,211,
131,195,194,146,168,32,69,162,211,0,24,4,204,217,91,141,29,85,
156,22,40,107,137,6,88,64,48,67,61,237,206,103,41,225,251,228,
220,86,94,1,129,77,82,178,243,17,179,36,3,174,246,142,13,157,
158,34,212,167,131,31,26,251,186,126,73,196,153,207,79,233,226,
187,4,229,65,72,67,25,252,10,10,75,123,58,58,198,184,5,202,140,
118,93,31,218,122,62,208,196,191,127,235,111,179,155,57,38,6,
174,192,208,174,182,98,18,177,9,240,97,197,211,7,216,66,30,175,
41,246,97,190,17,228,40,180,156,146,232,104,33,28,195,114,56,17,
78,165,62,61,201,86,129,129,88,88,184,1,86,206,218,164,124,201,
83,115,62,193,241,119,48,47,29,173,221,11,230,26,83,97,81,97,6,
183,24,189,178,186,57,107,140,250,164,97,60,214,54,42,49,253,37,
46,174,208,18,43,4,92,25,232,135,91,97,231,153,128,145,184,161,
216,36,15,51,170,15,109,115,77,23,4,82,152,118,29,179,28,185,146,
121,80,160,45,176,95,150,41,160,117,12,62,71,11,42,210,112,197,
213,6,21,196,127,54,153,62,116,104,248,206,61,30,224,137,173,48,
237,157,39,164,51,177,49,194,38,130,139,24,220,68,102,167,166,
215,183,182,200,80,218,108,46,64,103,192,230,243,86,52,103,12,58,
101,43,148,154,112,222,162,71,81,231,222,138,29,65,86,149,24,116,
237,96,36,33,245,221,51,220,24,46,235,88,11,140,164,252,58,73,
177,119,5,142,18,23,231,100,155,1,254,247,154,212,232,250,84,11,
131,250,121,196,232,171,225,108,49,234,109,190,183,16,244,181,231,
36,194,58,219,252,33,116,58,164,180,130,213,135,83,199,189,206,57,
136,165,201,255,183,70,143,185,9,143,5,254,68,164,174,67,69,20,66,
68,36,91,187,159,218,152,4,181,135,202,105,32,96,145,181,200,23,
250,221,37,179,22,118,77,92,44,3,48,172,168,104,229,89,114,254,199,
108,77,9,40,76,88,11,243,35,185,36,241,22,159,230,42,122,93,78,61,
199,51,91,156,202,197,220,2,153,75,105,49,147,227,197,161,55,100,
196,119,21,96,9,184,201,160,248,62,152,154,198,158,244,171,143,186,
37,172,168,105,10,66,60,57,149,13,189,205,179,35,35,237,64,238,53,
93,231,67,1,134,116,33,88,70,131,177,170,111,90,22,147,151,129,
116,254,54,186,109,124,220,58,4,123,79,116,214,72,113,13,198,51,
222,163,143,218,124,157,183,148,0,7,151,59,197,233,41,237,87,176,
75,247,72,85,215,73,107,155,37,113,222,57,253,69,27,253,127,223,
72,255,13,151,180,242,204,95,88,209,223,88,178,233,222,36,224,29,
189,19,106,134,167,9,118,213,162,57,196   
  };


void setup() {

        // SET OUTPUT PIN ON ALL OUTPUT PORTS      
        OUTPUTPORTCTRL = 0b00011111;  //set all 5 LOWER bit pins as output
        OUTPUTPORT     = 0b00000000;  //set all 5 LOWER bit pins to ZERO

}

void loop() {
          // initializing variables for loops
          uint16_t sequence;
          uint8_t pulsewidth, i, bulk;

          // generating WAVE on BIT0-BIT5 DAC outputs
          // random values are taken from PROGMEM lookup table
          // are used to achieve random PWM effect
          
          for(sequence=0; sequence<4096; sequence++)
           {

            // introduce random delay
            // pulsewidth is up to 10 cycles of wave 
            pulsewidth =  pgm_read_byte(randomdelay + (sequence >> 0x02));
            for(i=0; i<pulsewidth; i++)
                  {
                        asm volatile (
                                        "    nop  \n" 
                                     );

                  };  // end of random delays

            
            // take pulse width from lookup table and send normal bulk 
            pulsewidth = pgm_read_byte(randomized + sequence);

             // sending a bulk of pulses with defined pulsewidth 
             // you may play with number (25) of pulses for better effect of jamming
             for(bulk=0; bulk<25; bulk++)
             {
              // send HIGH VOLTAGE - this time square wave
              // PB0 may serve as GND for PAM8403 module audio input
              OUTPUTPORT = 0b00000110; 
                                 
              // now delay to achieve desired frequency
              for(i=0; i<pulsewidth; i++)
                  {
                        asm volatile (
                                        "    nop  \n" 
                                     );
                  };
              //
              // send LOW VOLTAGE - this time square wave
              OUTPUTPORT = 0;               
              // now delay to achieve desired frequency
              // this value 85 determines center frequency of transducers
              for(i=0; i<(85-pulsewidth); i++)
                  {
                        asm volatile (
                                        "  nop  \n" 
                                     );
                  };
            // End of 'bulk' loop
            };
            
           // end of 'sequence' loop;
          };
          
// end of LOOP
}
