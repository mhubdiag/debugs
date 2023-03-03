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
#ifndef SCP_DBGWARNINGDEFINESDU1_H
#define SCP_DBGWARNINGDEFINESDU1_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Warning Description ID Defines
****************************************************************************/
//<WARNING_IDS>
// Warning Debugs for User 1
#define WID1_0  DU1|0,FLDSSTR /*! Undefined */  
#define WID1_1   DU1|1,FLDSTR /*! Cannot force entry as the unit has a valid 3D GPS Lock */
#define WID1_2   DU1|2,FLDS1(TS32) /*! Trying to Force entry into a Driver Geofence ID: %d that does not exist */
#define WID1_3   DU1|3,FLDS3(TS32,TS32,TS32) /*! Force Entry Failed. Reason(s): Already forcing entry into %d, Driver Geofence Defined = %d or Already inside Driver Geofence = %d */
#define WID1_4   DU1|4,FLDS4(TU16,TU16,TU16,TU16) /*! EVT: Id: %d, Trigger[Type: %d, Index: %d], delay: %d */

//</WARNING_IDS>
 
#endif // SCP_DBGWARNINGDEFINESDU1_H
