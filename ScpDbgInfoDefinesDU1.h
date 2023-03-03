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
#define IID1_5   DU1|5,FLDS1(TS32) /*! FS: Persist Cache, Sector %d */
#define IID1_6   DU1|6,FLDS1(TS32) /*! FS: Wiping Sector %d */
#define IID1_7   DU1|7,FLDS2(TS32,TS32) /*! FS: Wiping File: %d, size: %d */
#define IID1_8   DU1|8,FLDS2(TS32,TS32) /*! FS: Wiping 64K Block from %d to %d */
#define IID1_9   DU1|9,FLDS2(TS32,TS32) /*! FS: Wiping 4K Sector from %d to %d */
#define IID1_10  DU1|10,FLDS1(TS32) /*! FS: Cache Timeout, Persist now, Sector %d */
//</INFO_IDS>
 
#endif // SCP_DBGINFODEFINESDU1_H
