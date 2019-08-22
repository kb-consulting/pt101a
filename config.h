/*
 * config.h
 *
 * Created: 03/03/2014 02:29:05 PM
 *  Author: Sebastian Castillo
 */

// Global configuration variables
#define F_CPU 16000000UL

// Configuration for Tlc5941 module
#define Tlc5941_GSCLK_DDR DDRB
#define Tlc5941_GSCLK_PORT PORTB
#define Tlc5941_GSCLK_PIN PB0

#define Tlc5941_XLAT_DDR DDRB
#define Tlc5941_XLAT_PORT PORTB
#define Tlc5941_XLAT_PIN PB1

#define Tlc5941_SIN_DDR DDRD
#define Tlc5941_SIN_PORT PORTD
#define Tlc5941_SIN_PIN PD1

#define Tlc5941_MODE_DDR DDRD
#define Tlc5941_MODE_PORT PORTD
#define Tlc5941_MODE_PIN PD2

#define Tlc5941_BLANK_DDR DDRD
#define Tlc5941_BLANK_PORT PORTD
#define Tlc5941_BLANK_PIN PD3

#define Tlc5941_SCLK_DDR DDRD
#define Tlc5941_SCLK_PORT PORTD
#define Tlc5941_SCLK_PIN PD4

#define Tlc5941_TIMER 2

#define Tlc5941_USART_SPI 1

#define Tlc5941_N 6

#define Tlc5941_MANUAL_DC_FUNCS 1

#include <avr/io.h>
#include <avr/pgmspace.h>
#include "Tlc5941/Tlc5941.h"

/* definition for unknown earlier 96well design */
static const Tlc5941_gsData_t well2channel[Tlc5941_numChannels] = {
	0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11,
	12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23,
	24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35,
	36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47,
	48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59,
	60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71,
	72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83,
	84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95,
	96, 97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107,
	108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
	120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131,
	132, 133, 134, 135, 136, 137, 138, 139, 140, 141, 142, 143,
	144, 145, 146, 147, 148, 149, 150, 151, 152, 153, 154, 155,
	156, 157, 158, 159, 160, 161, 162, 163, 164, 165, 166, 167,
	168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
	180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191};*/

/* definition for LPA96 v1.1 (96-well double-LED)
static const Tlc5941_gsData_t well2channel[Tlc5941_numChannels] PROGMEM = {
	95, 94, 81, 80, 79, 78, 65, 64, 63, 62, 49, 48, 47, 46, 33, 32, 31, 30, 17, 16, 15, 14, 1, 0,
	93, 92, 83, 82, 77, 76, 67, 66, 61, 60, 51, 50, 45, 44, 35, 34, 29, 28, 19, 18, 13, 12, 3, 2,
	91, 90, 85, 84, 75, 74, 69, 68, 59, 58, 53, 52, 43, 42, 37, 36, 27, 26, 21, 20, 11, 10, 5, 4,
	89, 88, 87, 86, 73, 72, 71, 70, 57, 56, 55, 54, 41, 40, 39, 38, 25, 24, 23, 22, 9, 8, 7, 6,
	103, 102, 105, 104, 119, 118, 121, 120, 135, 134, 137, 136, 151, 150, 153, 152, 167, 166, 169, 168, 183, 182, 185, 184,
	101, 100, 107, 106, 117, 116, 123, 122, 133, 132, 139, 138, 149, 148, 155, 154, 165, 164, 171, 170, 181, 180, 187, 186,
	99, 98, 109, 108, 115, 114, 125, 124, 131, 130, 141, 140, 147, 146, 157, 156, 163, 162, 173, 172, 179, 178, 189, 188,
	97, 96, 111, 110, 113, 112, 127, 126, 129, 128, 143, 142, 145, 144, 159, 158, 161, 160, 175, 174, 177, 176, 191, 190,};
    */
    
/* definition for LPA96 v2.0 (96-well single-LED) */
static const Tlc5941_gsData_t well2channel[Tlc5941_numChannels] PROGMEM = {
	7,8,23,24,39,40,55,56,71,72,87,88,
    6,9,22,25,38,41,54,57,70,73,86,89,
    5,10,21,26,37,42,53,58,69,74,85,90,
    4,11,20,27,36,43,52,59,68,75,84,91,
    3,12,19,28,35,44,51,60,67,76,83,92,
    2,13,18,29,34,45,50,61,66,77,82,93,
    1,14,17,30,33,46,49,62,65,78,81,94,
    0,15,16,31,32,47,48,63,64,79,80,95
    };

// Time step scaling
#define stepSizeScaling 1.0
