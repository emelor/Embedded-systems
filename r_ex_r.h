#ifndef _R_EX_R_H_
#define _R_EX_R_H_
/*
** File: C:\Documents and Settings\emeliehe\My Documents\skola\EmbeddedII\lab7vh\r_ex_r.h
** Generated by XMLLauncher v3.9.1.77 x86 2011a
**
** Copyright 1995-2011 Arcticus Systems AB, All rights reserved.
** The format and content in the File is protected by copyright.
** The File is furnished under a licence and may only be used in
** accordance with the terms of this licence.
** Rubus� is a registered trademark to which Arcticus has all exclusive rights.
*/

/*==========================================================
** Include files
==========================================================*/
#include <basic/bs_basic.h>
#include <red/r_thread.h>

#ifdef __cplusplus
extern "C" {
#endif

/*==========================================================
** Red Thread blinky0
==========================================================*/
extern redThreadAttr_t const blinky0;
extern void blinky0Main(void);

/*==========================================================
** Red Schedule redScheduleStart
==========================================================*/
extern redSchedAttr_t const redScheduleStart;


#ifdef __cplusplus
}
#endif


#endif
