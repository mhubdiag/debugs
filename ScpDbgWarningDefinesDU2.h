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
//</WARNING_IDS>
 
#endif // SCP_DBGWARNINGDEFINESDU2_H
