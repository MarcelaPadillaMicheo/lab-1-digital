
/*
 * File:  PUSHBUTTONS.c
 * Author: marce
 *
 * Created on July 18, 2023, 12:34 AM
 */
#include <stdint.h>
#include <xc.h>
#include "PUSHBUTTONS.h"

void IOC_INT(uint8_t a){        //configuracion de PULL UPS
                                //de los botones
    //Config. PULL UP
    OPTION_REGbits.nRBPU = 0;
    WPUBbits.WPUB = a;
    IOCBbits.IOCB = a;         
    
}
