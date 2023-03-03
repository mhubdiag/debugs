/****************************************************************************/
/*!   \file        ScpDbgErrorDefines.h
\brief       Error Defines used in the Debug functionality
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
#ifndef SCP_DBGERRORDEFINESDU1_H
#define SCP_DBGERRORDEFINESDU1_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Error Description ID Defines
****************************************************************************/
//<ERROR_IDS>
// Error Debugs for User 1
#define EID1_0  DU1|0,FLDSSTR /*! Undefined */  
#define EID1_1   DU1|1,FLDSTR /*! RAM Geofence Erased or Corrupt */
#define EID1_2   DU1|2,FLDS3(TS32,TU32,TS32) /*! FS: Writing outside file boundaries: File %d, Address: %X, DataLen: %d */
//</ERROR_IDS>
 
#endif // SCP_DBGERRORDEFINESDUDU1_H
