/****************************************************************************/
/*!   \file        ScpDbgWarningDefines.h
\brief       Warning Defines used in the Debug functionality
\author      
\version     
*****************************************************************************
\b Copyright : Scope Logistical Solutions, 2020 \n
\b Created   : \n
\b Revised   : \n
\b Target    : \n
*****************************************************************************
\b Description \n
*****************************************************************************/
#ifndef SCP_DBGWARNINGDEFINESDU2_H
#define SCP_DBGWARNINGDEFINESDU2_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Warning Description ID Defines
****************************************************************************/
//<WARNING_IDS>
// Warning Debugs for User 2
#define WID2_0  DU2|0,FLDSSTR /*! Undefined */  
#define WID2_1   DU2|1,FLDS1(TU32) /*! Socket Open Error: %u */
#define WID2_2   DU2|2,FLDSTR /*! Socket Open Successful */
#define WID2_3   DU2|3,FLDSTR /*! SOCKET CLOSING. Requesting CLOSE Socket */
#define WID2_4   DU2|4,FLDSTR /*! Socket Opening */
#define WID2_5   DU2|5,FLDSTR /*! Socket Connected */
#define WID2_6   DU2|6,FLDSTR /*! Socket already open */
#define WID2_7   DU2|7,FLDSTR /*! Context Deactivated */
#define WID2_8   DU2|8,FLDSTR /*! COLD MODEM POWER UP SEQUENCE */
#define WID2_9   DU2|9,FLDSTR /*! NO Power up, MODEM on. */
#define WID2_10   DU2|10,FLDSTR /*! MODEM REGULATOR ON */
#define WID2_11   DU2|11,FLDSTR /*! MODEM ON POWERPIN TOGGLE START */
#define WID2_12   DU2|12,FLDSTR /*! MODEM POWERPIN TOGGLE COMPLETE */
#define WID2_13   DU2|13,FLDSTR /*! Modem not on, vectoring to Power On Prep */
#define WID2_14   DU2|14,FLDSTR /*! Modem Power Detected */
#define WID2_15   DU2|15,FLDS1(TS32) /*! GNSS Power Status: %d */
#define WID2_16   DU2|16,FLDS2(TU8,TU32) /*! Checksum: %02X Length:  %u */
#define WID2_17   DU2|17,FLDS1(TU32) /*! EPO: GPS Aid Expired for %us Triggering Download */
#define WID2_18   DU2|18,FLDSTR /*! No valid EPO data on GPS */
#define WID2_19   DU2|19,FLDS2(TU32,TU32) /*! File Size: %u; File Count: %u */
#define WID2_20   DU2|20,FLDSTR /*! FILE NOT FOUND */
#define WID2_21   DU2|21,FLDS3(TU32,TU32,TU32) /*! File Readout Complete: %u of %u, Aborted: %u */
#define WID2_22   DU2|22,FLDSTR /*! Using SET READ POSITION */
#define WID2_23   DU2|23,FLDS1(TSTR) /*! GPS Jamming : %s */
#define WID2_24   DU2|24,FLDSTR /*! GPS JAMMING: NONE */
#define WID2_25   DU2|25,FLDSTR /*! GPS JAMMING: WARNING */
#define WID2_26   DU2|26,FLDSTR /*! GPS JAMMING: CRITICAL */
#define WID2_27   DU2|1,FLDSTR /*! CRITICAL ERROR: SIM PUK'd. No more pin attempts remaining */
#define WID2_28   DU2|28,FLDS4(TU32,TU32,TU32,TU32) /*! Current:%u, Voltage:%u, Power:%u, Total Energy:%u */
#define WID2_29   DU2|29,FLDS1(TU32) /*! Data Capture Started for %u hours */
#define WID2_30   DU2|30,FLDS3(TU32,TU32,TU32) /*! File Readout Complete: %u of %u :  ABORT: %u */
#define WID2_31   DU2|31,FLDS1(TU32) /*! File PROCESSING FAILURE: %u */
#define WID2_32   DU2|32,FLDS1(TU32) /*! File Readout FAILURE: %u */
#define WID2_33   DU2|33,FLDS3(TU32,TU16,TU16) /*! Page Index: %u, Flash CRC: %04X : Data CRC: %04X */
#define WID2_34   DU2|34,FLDS1(TSTR) /*! File Name: %s */
//</WARNING_IDS>
 
#endif // SCP_DBGWARNINGDEFINESDU2_H
