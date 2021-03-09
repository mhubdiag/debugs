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
#ifndef SCP_DBGERRORDEFINESDU2_H
#define SCP_DBGERRORDEFINESDU2_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Error Description ID Defines
****************************************************************************/
//<ERROR_IDS>
// Error Debugs for User 2
#define EID2_0  DU2|0,FLDSSTR /*! Undefined */  
#define EID2_1   DU2|1,FLDS1(TU32) /*! UNKWN READ STATE: %u */
#define EID2_2   DU2|2,FLDS2(TU32,TU32) /*! No Data Channel: %u Len: %u */
//</ERROR_IDS>
 
#endif // SCP_DBGERRORDEFINESDUDU2_H
