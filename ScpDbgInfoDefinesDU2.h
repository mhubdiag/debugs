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
#ifndef SCP_DBGINFODEFINESDU2_H
#define SCP_DBGINFODEFINESDU2_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Info Description ID Defines
****************************************************************************/
//<INFO_IDS>
// Info Debugs for User 2
#define IID2_0  DU2|0,FLDSSTR /*! Undefined */  
#define IID2_1   DU2|1,FLDS2(TU32,TU32) /*! Received Data Channel %u: %u */
#define IID2_2   DU2|2,FLDS1(TS32) /*! PMTK COMMAND SUCCEEDED: %d */
#define IID2_3   DU2|3,FLDS3(TU32,TU32,TU32) /*! EPO: Current Time: %u; EPO Set Time: %u to %u*/
#define IID2_4   DU2|4,FLDSTR /*! <_<string>_> */
#define IID2_5   DU2|5,FLDSTR /*! EPO Download Complete */
#define IID2_6   DU2|6,FLDSTR /*! Web Download Complete */
//</INFO_IDS>
 
#endif // SCP_DBGINFODEFINESDU2_H
