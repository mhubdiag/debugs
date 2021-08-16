/****************************************************************************/
/*!   \file        ScpDbgInfoDefines.h
\brief       Info Defines used in the Debug functionality
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
#ifndef SCP_DBGINFODEFINESDU1_H
#define SCP_DBGINFODEFINESDU1_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Info Description ID Defines
****************************************************************************/
//<INFO_IDS>
// Info Debugs for User 1
#define IID1_0  DU1|0,FLDSSTR /*! Undefined */  
#define IID1_1  DU1|1,FLDS7E(TU8,TU8,TU8,TU8,TU8,TU8,TU8),FLDS7E(TU8,TU8,TU8,TU8,TU8,TU8,TU8),FLDS3(TU8, TU16, TU32) /*! */
#define IID1_2   DU1|2,FLDS1(TS32) /*! Forced entry into %d */
#define IID1_3   DU1|3,FLDS1(TS32) /*! Forcing entry into %d */
#define IID1_4   DU1|4,FLDS2(TS32,TU8) /*! Store GeoID %d, State: %02X */
//</INFO_IDS>
 
#endif // SCP_DBGINFODEFINESDU1_H
