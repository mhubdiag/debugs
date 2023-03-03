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
#define EID2_2   DU2|2,FLDS2(TU32,TU32) /*! No Data remaining. Channel: %u Len: %u */
#define EID2_3   DU2|3,FLDS2(TU32,TS32) /*! Modem Application Error at state: %u. Error %d */
#define EID2_4   DU2|4,FLDS1(TU32) /*! Queclocator Failure. Standing off */
#define EID2_5   DU2|5,FLDSTR /*! CRITICAL: Modem NOT RECOGNISED */
#define EID2_6   DU2|6,FLDSTR /*! INVALID FUNCTION CALL */
#define EID2_7   DU2|7,FLDS1(TU32) /*! Invalid PMTK Command: %u */
#define EID2_8   DU2|8,FLDS1(TS32) /*! INVALID PMTK COMMAND: %d */
#define EID2_9   DU2|9,FLDS1(TS32) /*! PMTK COMMAND FAILURE: %d */
#define EID2_10   DU2|10,FLDS1(TU32) /*! Incomplete Segment read */
#define EID2_11   DU2|11,FLDSTR /*! GPS JAMMING PMTK PARSER ERROR */
#define EID2_12   DU2|12,FLDS1(TU32) /*! MI: INVALID STATE: %u */
#define EID2_13   DU2|13,FLDSTR /*! EPO Download FAILURE */
#define EID2_14   DU2|14,FLDSTR /*! Web Download Failure */
#define EID2_15   DU2|2,FLDSTR /*! INPUT A not Configured */
#define EID2_16   DU2|3,FLDSTR /*! INPUT B not Configured */
#define EID2_17   DU2|4,FLDSTR /*! INPUT C not Configured */
#define EID2_18   DU2|5,FLDSTR /*! INPUT D not Configured */
#define EID2_19   DU2|19,FLDSTR /*! INPUT E not configured */
#define EID2_20   DU2|20,FLDS1(TU32) /*! Remaining length is not factor of 2:. len: %u */
#define EID2_21   DU2|21,FLDSSTR /*! FTP: Max download attempts exceeded */
#define EID2_22   DU2|22,FLDS2(TU16,TU16) /*! CRC Check Failure: Flash:%04X, Data: %04X */
#define EID2_23   DU2|23,FLDSSTR /*! FTP Data Overflow */
//</ERROR_IDS>
 
#endif // SCP_DBGERRORDEFINESDUDU2_H
