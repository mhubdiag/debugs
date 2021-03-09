/****************************************************************************/
/*!   \file        ScpDbgCommon.h
\brief       Common Defines used in the Debug functionality
\author      
\version     
*****************************************************************************
\b Copyright : Scope Logistical Solutions, 2004 \n
\b Created   : \n
\b Revised   : \n
\b Target    : \n
*****************************************************************************
\b Description \n
*****************************************************************************/
#ifndef SCP_DBGCOMMON_H
#define SCP_DBGCOMMON_H
#include "Common/ScpTypes.h"

typedef enum {
   TEnd,                // Signify the end of or no format info
   TU8,
   TU16,
   TU32,
   TU64,
   TS8,
   TS16,
   TS32,
   TS64,
   TFLT,                // Field Type Float
   TDBL,                // Field Type Double
   TSTR,                // Field Type String
   TExtra = 0xF         // If this is in the last Field then it means there follows another field definition array
} enumFieldTypes;


#define FLD(SLOT,Fmt)                                                            ((U32)Fmt << (SLOT*4))
#define FLDSSTR                                                                  0
#define FLDS1( F1)                                                               FLD(0,F1)
#define FLDS2( F1, F2)                                                           FLDS1(F1)|FLD(1,F2)
#define FLDS3( F1, F2, F3)                                                       FLDS2(F1,F2)|FLD(2,F3)
#define FLDS4( F1, F2, F3, F4)                                                   FLDS3(F1,F2,F3)|FLD(3,F4)
#define FLDS5( F1, F2, F3, F4, F5)                                               FLDS4(F1,F2,F3,F4)|FLD(4,F5)
#define FLDS6( F1, F2, F3, F4, F5, F6)                                           FLDS5(F1,F2,F3,F4,F5)|FLD(5,F6)
#define FLDS7( F1, F2, F3, F4, F5, F6, F7)                                       FLDS6(F1,F2,F3,F4,F5,F6)|FLD(6,F7)
#define FLDS8( F1, F2, F3, F4, F5, F6, F7, F8)                                   FLDS7(F1,F2,F3,F4,F5,F6,F7)|FLD(7,F8)
// Use the following Field Definition if you need more than 8 fields, it only takes 7 Fields with a automatically added continuation field
// As an example, say you want define a debug that contains 11 Fields, you would define it as follows: 
// #define YOUR_UNIQUE_DBG_ID FLDS7E(your first 7 values),FLDS4(your next 4 values) /*! 11 Delphi Format Fields */
// Debugs can contain up to 6 field definitions with a total of (6*7)+1=43 Fields
#define FLDS7E(F1, F2, F3, F4, F5, F6, F7)                                       FLDS6(F1,F2,F3,F4,F5,F6)|FLD(6,F7)|FLD(7,TExtra)


/***************************************************************************
Person who created the debug statement - it is used to ensure uniqueness of 
debug statements when multiple people add debugs at the same time 
****************************************************************************/
//<DEBUG_CREATORS>
#define DU0      0x00000000  /*! Legacy    */
#define DU1      0x10000000  /*! Louis van der Walt   */
#define DU2      0x20000000  /*! Jeremy Coppin        */
#define DU3      0x30000000  /*! Johann van den Bergh */
#define DU4      0x40000000  /*! Robert Davidson      */
#define DU5      0x50000000  /*! Debug Author: Undefined */
#define DU6      0x60000000  /*! Debug Author: Undefined */
#define DU7      0x70000000  /*! Debug Author: Undefined */
#define DU8      0x80000000  /*! Debug Author: Undefined */
#define DU9      0x90000000  /*! Debug Author: Undefined */
#define DU10     0xA0000000  /*! Debug Author: Undefined */
#define DU11     0xB0000000  /*! Debug Author: Undefined */
#define DU12     0xC0000000  /*! Debug Author: Undefined */
#define DU13     0xD0000000  /*! Debug Author: Undefined */
#define DU14     0xE0000000  /*! Debug Author: Undefined */
#define DU15     0xF0000000  /*! Debug Author: Undefined */
//</DEBUG_CREATORS>

#endif // SCP_DBGCOMMON_H
