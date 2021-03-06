/* 
 * File:   adc.h
 * Author: Andres
 *
 * Created on March 9, 2016, 10:19 PM
 */

#ifndef ADC_H
#define	ADC_H
#include <xc.h>


#define INPUT 1
#define OUTPUT 0
#define ENABLED 1

#define TRIS_RB15_POT TRISBbits.TRISB15
#define ANSEL_REG_B15 ANSELBbits.ANSB15

#define TRIS_RA7_VRN TRISAbits.TRISA7
#define TRIS_RA6_VRP TRISAbits.TRISA6

void initADC();

#endif	/* ADC_H */

