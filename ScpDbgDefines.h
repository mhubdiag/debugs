/****************************************************************************/
/*!   \file        ScpDbgDefines.h
\brief       Defines used in the Debug functionality
\author      
\version     
*****************************************************************************
\b Copyright : Scope Logistical Solutions, 2004 \n
\b Created   : \n
\b Revised   : \n
\b Target    : \n
*****************************************************************************
\b Description \n
*****************************************************************************/
#ifndef SCP_DBGDEFINES_H
#define SCP_DBGDEFINES_H
#include "Debug/ScpDbgCommon.h"

// Legacy User
#include "Debug/ScpDbgErrorDefinesDU0.h"
#include "Debug/ScpDbgWarningDefinesDU0.h"
#include "Debug/ScpDbgInfoDefinesDU0.h"

// User 1
#include "Debug/ScpDbgErrorDefinesDU1.h"
#include "Debug/ScpDbgWarningDefinesDU1.h"
#include "Debug/ScpDbgInfoDefinesDU1.h"

// User 2
#include "Debug/ScpDbgErrorDefinesDU2.h"
#include "Debug/ScpDbgWarningDefinesDU2.h"
#include "Debug/ScpDbgInfoDefinesDU2.h"

// User 3
#include "Debug/ScpDbgErrorDefinesDU3.h"
#include "Debug/ScpDbgWarningDefinesDU3.h"
#include "Debug/ScpDbgInfoDefinesDU3.h"

// User 4
#include "Debug/ScpDbgErrorDefinesDU4.h"
#include "Debug/ScpDbgWarningDefinesDU4.h"
#include "Debug/ScpDbgInfoDefinesDU4.h"

/***************************************************************************
File Number Defines
****************************************************************************/
//<FILENUMBERS>
#define SCP_FILEUNDEFINED     0     /*! Undefined */
#define SCP_1WIRE             1     /*! 1 Wire */
#define SCP_MODEM             2     /*! Modem */
#define SCP_TIMERS            3     /*! Timers */
#define SCP_INIT              4     /*! Init */
#define SCP_CONFIG            5     /*! Config */
#define SCP_BUFFER            6     /*! Buffer */
#define SCP_UART              7     /*! UART */
#define SCP_UTILITIES         8     /*! Utilities */
#define SCP_VARIABLES         9     /*! Variables */
#define SCP_SPI               10    /*! SPI */
#define SCP_GSM               11    /*! GSM */
#define SCP_INPUTS            12    /*! Inputs */
#define SCP_PDU               13    /*! PDU */
#define SCP_PROT              14    /*! Protocol */
#define SCP_MAIN              15    /*! Main */
#define SCP_SOCKET            16    /*! Socket */
#define SCP_EVENT             17    /*! Events */
#define SCP_CM                18    /*! Comms Mediums */
#define SCP_VOICE             19    /*! Voice */
#define SCP_GPS               20    /*! GPS */
#define SCP_CANMCP            21    /*! CAN MCP */
#define SCP_AR                22    /*! Accident Recon */
#define SCP_TXTMSG            23    /*! Text Messaging */
#define SCP_DRIVER            24    /*! Driver */
#define SCP_GEO               25    /*! Geofence */
#define SCP_PWR               26    /*! Power */
#define SCP_SUART             27    /*! Soft Uart */
#define SCP_DRIVER905	      28    /*! Driver 905 */
#define SCP_IRIDIUM           29    /*! Iridium */
#define SCP_PERIPHERALS       30    /*! Peripherals */
#define SCP_TRIP              31    /*! Trip */
#define SCP_OUTPUTS           32    /*! Outputs */
#define SCP_SYSLOG            33    /*! System Log */
#define SCP_ATCOMMANDPARSER   34    /*! AT Command Parser */
#define SCP_CMCCONTROL        35    /*! CMC Control */
#define SCP_CMXPROTOCOL       36    /*! CMX Protocol */
#define SCP_BT                37    /*! Bluetooth */
#define SCP_SENTINEL          38    /*! Sentinel */
#define SCP_USB               39    /*! USB */
#define SCP_ACCELEROMETER     40    /*! Accelerometer */
#define SCP_OBD2              41    /*! OBD2 */
#define SCP_MPROFILER         42    /*! MProfiler Server*/
#define SCP_AUXILLIARY        43    /*! Auxilliary Server*/
#define SCP_CMCCONTROLDATA    44    /*! CMUX Prot Output */
#define SCP_TESTING           45    /*! Testing */
#define SCP_OBD2_STACK        46    /*! OBD2 Stack */
#define SCP_USB_HOST	      47    /*! USB Host */
#define SCP_J1850             48    /*! J1850 */
#define SCP_RTC               49    /*! RTC */
#define SCP_GPSAT             50    /*! GPS AT */
#define SCP_LOCATION          51    /*! Location Manager */
#define SCP_CDMA              52    /*! CDMA */
#define SCP_BLE               53    /*! BLE */
#define SCP_PDAAPI            54    /*! PDA API */
#define SCP_MSG               55    /*! Message */
#define SCP_THERMO            56    /*! Thermo */
#define SCP_DATASTREAMING     57    /*! Data Streaming */
#define SCP_FUELMODULE        58    /*! Fuel Module */
#define SCP_DDS               59    /*! DDS */
#define SCP_ENC               60    /*! Crypto */
#define SCP_VNI               61    /*! VNI Interface*/
#define SCP_ACCIDENTDETECTION 62    /*! Accident Detection */
#define SCP_IPC               63    /*! IPC */
#define SCP_BITBUFFER         64    /*! Bit Buffer */
#define SCP_FREERTOS          65    /*! FreeRTOS Main */
#define SCP_CUSTOM            66    /*! Custom */
#define SCP_LIN               67    /*! LIN */
#define SCP_WLPERSIST         68    /*! WL Persist */
#define SCP_GEOLOC            69    /*! Geoloc */
#define SCP_I2C               70    /*! I2C */
#define SCP_SPIFLASH          71    /*! SPI Flash */
#define SCP_FLASHSTORAGE      72    /*! Flash Storage */
#define SCP_SBS               73    /*! SBS Sending */
#define SCP_ACC_AUTOCAL       74    /*! ACC Auto Cal */
#define SCP_I0                75    /*! I0 */

//</FILENUMBERS>

/***************************************************************************
Info Description ID Defines
****************************************************************************/
//<OLD_INFO_IDS>
#define IDI_UNDEFINED            0     /*! Undefined */

/* Modem Related Defines */
#define IDI_MDM_TOMODEM          0x0100    /*! MODEM: To Modem: */
#define IDI_MDM_FROMMODEM        0x0101    /*! MODEM: From Modem: */
#define IDI_MDM_TOUART0          0x0102    /*! MODEM: To Uart:*/
#define IDI_MDM_FROMUART         0x0103    /*! MODEM: From Uart: */
#define IDI_MDM_EXPECTED         0x0104    /*! MODEM: Expected Response Received */
#define IDI_MDM_UNSOLICITED      0x0105    /*! MODEM: Unsolicited Response */
#define IDI_MDM_ERROR            0x0106    /*! MODEM: Error Response */
#define IDI_MDM_GENERAL          0x0107    /*! MODEM: General Info*/
#define IDI_PDU_MSISDN           0x0108    /*! PDU: MSISDN INFO */
#define IDI_PDU_TON              0x0109    /*! PDU: Type of Number */
#define IDI_PDU_FO               0x010A    /*! PDU: First Octet */
#define IDI_PDU_SCTS             0x010B    /*! PDU: Service Center Time Stamp */
#define IDI_PDU_DCS              0x010C    /*! PDU: Data Coding Scheme */
#define IDI_PDU_MSG              0x010D    /*! PDU: Extracted Message */
#define IDI_PDU_MAXOCTETS        0x010E    /*! PDU: Message Size */
#define IDI_MDM_SMS              0x010F    /*! MODEM: Message Found: */
#define IDI_MDM_DSMSQUEUED       0x0110    /*! MODEM: Data Message Queued*/
#define IDI_MDM_LOADEDMSISDN     0x0111    /*! MODEM: MSISDN LOADED: */
#define IDI_MDM_SMSRXPOSTED      0x0112    /*! MODEM: SMS Received and posted to router */
#define IDI_MDM_SMSRX            0x0113    /*! MODEM: SMS Received: */
#define IDI_MDM_EXTERNALCOM      0x0114    /*! MODEM: External Command: */
#define IDI_MDM_EXTERNALRESP     0x0115    /*! MODEM: External Response: */
#define IDI_MDM_MSGDESTROYED     0x0116    /*! MODEM: MESSAGE DESTROYED: Could not be Queued. */
#define IDI_MDM_PAS              0x0117    /*! MODEM: Phone Activity Status */
#define IDI_MDM_CURRENTOP        0x0118    /*! MODEM: Current GSM Operator ID */
#define IDI_MDM_GPRSSTACKVERSION 0x0119    /*! MODEM: GPRS Stack Version */

#define IDI_SKT_RXLENGTH         0x0200    /*! SKT: Received Length */
#define IDI_SKT_INDRXLENGTH      0x0201    /*! SKT: Indicated Length */
#define IDI_SKT_RXLENGTHREM      0x0202    /*! SKT: Remaining Length */
#define IDI_SKT_PINGRX           0x0203    /*! SKT: PING Received */
#define IDI_SKT_DATARX           0x0204    /*! SKT: Data Received */
#define IDI_SKT_RESPRX           0x0205    /*! SKT: Response Recevied */
#define IDI_SKT_TIMER            0x0206    /*! SKT: Socket Timers */
#define IDI_SKT_CRC              0x0207    /*! SKT: Received CRC */
#define IDI_SKT_HEADER           0x0208    /*! SKT: Header Info */
#define IDI_SKT_MSGQUEUEATTEMPT  0x0209    /*! SKT: Message queue attempt */
#define IDI_SKT_MSGQUEUESUCCESS  0x020A    /*! SKT: Message queue successful */
#define IDI_SKT_MSGQUEUED        0x020B    /*! SKT: Message Queued: */
#define IDI_SKT_RPTQUEUEATTEMPT  0x020C    /*! SKT: Report queue attempt */
#define IDI_SKT_RPTQUEUESUCCESS  0x020D    /*! SKT: Report queue successful */
#define IDI_SKT_RPTQUEUED        0x020E    /*! SKT: Report Queued */
#define IDI_MDM_MSISDN           0x020F    /*! MODEM: Destination MSISDN Retrieved */
#define IDI_MDM_SCA              0x0210    /*! MODEM: Service Center MSISDN Retrieved */
#define IDI_SKT_DATATX           0x0211    /*! SOCKET: Data Out: */
#define IDI_SKT_DATARX2          0x0212    /*! SOCKET: Data In: */
#define IDI_SKT_MSGDESTROYED     0x0213    /*! SOCKET: Response could not be queued */

#define IDI_VOICE_BUTTONPRESS    0x0300    /*! VOICE: BUTTON PRESSED */
#define IDI_TXT_INMESSAGE        0x0301    /*! TEXT: Incoming Message. */
#define IDI_PER_DASH             0x0302    /*! PERIPHERALS: Dashboard: */
#define IDI_PER_GENERAL          0x0303    /*! PERIPHERALS:*/

#define IDI_GPS_FULLMESSAGE      0x0400    /*! GPS: Message Recieved */
#define IDI_GPS_FROMUART         0x0401    /*! GPS: Parsed AT Response: */

#define IDI_DRV_GENERAL          0x0480    /*! DRIVER KEY:  */

#define IDI_CMX_GENERAL          0x0500    /*! CMUX: */
#define IDI_CMX_TX               0x0501    /*! CMUX: Transmission: */
#define IDI_CMX_RX               0x0502    /*! CMUX: Transmission: */

#define IDI_DC_GENERAL           0x0600    /*! DATACALL: */
#define IDI_DC_TIMER             0x0601    /*! DATACALL TIMER */

#define IDI_AUX_GENERAL          0x0001    /*! AUX: */

#define IDI_MAIN_FW_UPGRADE      0x1000    /*! MAIN: Firmware Upgrade */

#define IDI_IRD_TOIRIDIUM        0x2000    /*! IRIDIUM: Data to Module */
#define IDI_IRD_EXPECTED         0x2001    /*! IRIDIUM: Expected Response */
#define IDI_IRD_UNSOLICITED      0x2002    /*! IRIDIUM: Unsolicited Response */
#define IDI_IRD_GENERAL          0x2003    /*! IRIDIUM: GENERAL Info */

//</OLD_INFO_IDS>

/***************************************************************************
Warning Description ID Defines
****************************************************************************/
//<OLD_WARNING_IDS>
#define WDI_UNDEFINED             0          /*! Undefined */
#define WDI_MDM_ERROR             0x0100     /*! MODEM: Error Response */
#define WDI_MDM_WAITSTATE         0x0101     /*! MODEM: WAIT State */
#define WDI_MDM_GENERAL           0x0102     /*! MODEM: General*/
#define WDI_MDM_REBOOT            0x0103     /*! MODEM: Reboot Modem */
#define WDI_MDM_POWERCYCLE        0x0104     /*! MODEM: Power Cycle Modem */
#define WDI_MDM_WINDFAILURE       0x0105     /*! MODEM: Un-resolved WIND Indication */
#define WDI_MDM_MESSAGERETRYEX    0x0106     /*! MODEM: SMS Retry limit exceeded */
#define WDI_MDM_SMSRXJUNK         0x0107     /*! MODEM: SMS does not contain valid 18 command */
#define WDI_MDM_UPDATE_LU_PIN     0x0108     /*! MODEM: Updating last used PIN in config */
#define WDI_MDM_COPSFORMAT        0x0109     /*! MODEM: C-OPS format incorrect. Could not parse. */

#define WDI_SKT_RXCRCERROR        0x0200    /*! SKT: CRC ERROR */
#define WDI_SKT_NACK              0x0201    /*! SKT: NACK RECEIVED */
#define WDI_SKT_SEQERROR          0x0202    /*! SKT: Sequence Number in Ack not recognised. */


#define WDI_GPS_CHECKSUMERROR     0x0300    /*! GPS: Checksum ERROR ! */

#define WDI_DRV_GENERAL           0x0400    /*! DRIVER KEY: */

#define WDI_CMC_GENERAL           0x0500    /*! CMC: */

#define WDI_DC_GENERAL            0x0600    /*! DATACALL: */
#define WDI_IRD_ERROR             0x2002    /*! IRIDIUM: ERROR Received */
#define WDI_IRD_REBOOT            0x2003    /*! IRIDIUM: REBOOTING!! */
#define WDI_IRD_POWERCYCLE        0x2004    /*! IRIDIUM: POWERCYCLE */
//</OLD_WARNING_IDS>

/***************************************************************************
Error Description ID Defines
****************************************************************************/
//<OLD_ERROR_IDS>
#define EDI_UNDEFINED                        0         /*! Undefined */

#define EDI_MODEMSTATEMACHINE                0x0100    /*! MODEM: State Machine Error */
#define EDI_MODEMCRITICAL                    0x0101    /*! MODEM: Critical Error */
#define EDI_MODEMGENERAL                     0x0102    /*! MODEM: General Error */
#define EDI_MDM_INVPARM_ECHOALG              0x0103    /*! MODEM: Invalid Parameter ALGOLD*/
#define EDI_MDM_DATACALLOPENINIDLE           0x0104    /*! MODEM: Datacall open while in IDLE State */
#define EDI_MDM_COMMANDNOTALLOWED            0x0105    /*! MODEM: The following GSM state command used an illegal parameter or is not allowed at this time*/
#define EDI_MDM_LOGICAL                      0x0106    /*! MODEM: Programatical or logical error has occurred */
#define EDI_MDM_INVALID81CMD                 0x0107    /*! MODEM: Invalid 81 Command */
#define EDI_MDM_INVALIDDESTADD               0x0108    /*! MODEM: Invalid Destination Address Index */
#define EDI_MDM_INVALIDSCADD                 0x0109    /*! MODEM: Invalid SCA index */

#define EDI_SKT_RXSTATEERROR                 0x0200    /*! SOCKET: Invalid receive state */
#define EDI_SKT_ACKNOTENOTVALID              0x0201    /*! SOCKET: Notification that has been acknowledged does not match a known notification */
#define EDI_SKT_INVALID81CMD                 0x0202    /*! SOCKET: Invalid 81 Command */
#define EDI_SKT_LOGICAL                      0x0203    /*! SOCKET: Logical: */
#define EDI_UART_TOOBIG                      0x0200    /*! UART: Requested Frame too large */

#define EDI_MAIN_FW_UPGRADE                  0x1000    /*! MAIN: Firmware Upgrade */

#define EDI_VOICE_MSGALLOCFAIL               0x0300    /*! FAILED TO ALLOCATE ENVELOPE */

#define EDI_CMX_GENERAL                      0x0500    /*! CMC: */
#define EDI_CMX_REBOOT                       0x0501    /*! CMC REBOOT: */
#define EDI_CMX_RESET                        0x0502    /*! CMC RESET: */
#define EDI_CMX_MODULEERROR                  0x0503    /*! CMC MODULE ERROR: */
//</OLD_ERROR_IDS>


#endif // SCP_DBGDEFINES_H
