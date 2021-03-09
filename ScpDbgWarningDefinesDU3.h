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
#ifndef SCP_DBGWARNINGDEFINESDU3_H
#define SCP_DBGWARNINGDEFINESDU3_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Warning Description ID Defines
****************************************************************************/
//<WARNING_IDS>
// Warning Debugs for User 3
#define WID3_0  DU3|0,FLDSSTR /*! Undefined */  
#define WID3_1   DU3|1,FLDSTR /*! MHUB ID does not match */
#define WID3_2   DU3|2,FLDS7E(TU8,TU8,TU8,TU8,TU8,TU8,TU8),FLDS3(TU8,TU8,TU8) /*! %02X%02X%02X%02X%02X - %02X%02X%02X%02X%02X */
//</WARNING_IDS>
 
#endif // SCP_DBGWARNINGDEFINESDU3_H
