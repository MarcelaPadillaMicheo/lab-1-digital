/*
 * File:  PUSHBUTTONS.h
 * Author: marce
 *
 * Created on July 18, 2023, 12:34 AM
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef PUSHBUTTONS_H
#define	PUSHBUTTONS_H

#include <xc.h> // include processor files - each processor file is guarded.  
#include <stdint.h>
#include <proc/pic16f887.h>

void IOC_INT(uint8_t a);

#endif	/* PUSHBUTTONS_H */
