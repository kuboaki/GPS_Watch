#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>

#include <bcm2835.h>
#include <tm1638.h>

extern tm1638_p gT;    /* TM1638 controll structsure */
extern uint8_t gButtons;
extern uint8_t gLeds;
extern char    gSeg_buf[];
extern char    gIP[];
