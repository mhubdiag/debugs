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
#ifndef SCP_DBGERRORDEFINESDU0_H
#define SCP_DBGERRORDEFINESDU0_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Error Description ID Defines
****************************************************************************/
//<ERROR_IDS>
// Error Debugs for Legacy User
#define EID0_0    DU0|0,FLDSSTR /*! Undefined */   
#define EID0_1    DU0|1,FLDSSTR /*! Invalid BitBuffer Control Structure */
#define EID0_2    DU0|2,FLDS1(TU16) /*! BitBuf %d RAM value corrupt */
#define EID0_3    DU0|3,FLDS4(TU16,TU16,TU16,TU16) /*! Sys WDT F:%d L:%d, F:%d L:%d */
#define EID0_4    DU0|4,FLDS4(TU16,TU16,TU16,TU16) /*! Sys BrwnOut F:%d L:%d, F:%d L:%d */
#define EID0_5    DU0|5,FLDSSTR /*! CRITICAL: DF ERROR */
#define EID0_6    DU0|6,FLDSSTR /*! CRITICAL: SPI RW ERROR */
#define EID0_7    DU0|7,FLDS7(TSTR,TSTR,TSTR,TSTR,TSTR,TSTR,TSTR) /*! CRITICAL %s%s%s%s%s%s%s ERROR */
#define EID0_8    DU0|8,FLDSSTR /*! Accelerometer Forced Re-init */
#define EID0_9    DU0|9,FLDSSTR /*! Flash Init. Failed */
#define EID0_10   DU0|10,FLDSSTR /*! DEBUG MUTEX LOCKOUT */
#define EID0_11   DU0|11,FLDSSTR /*! Temp. Sens. No Power */
#define EID0_12   DU0|12,FLDSSTR /*! Geoloc Vehicle Lifted */
#define EID0_13   DU0|13,FLDS3(TS32,TS32,TS32) /*! GSM BREACH PENDING: DB:%u NCnt:%u TCnt%u */
#define EID0_14   DU0|14,FLDS1(TS32) /*! NinaHW: ErrCount > 10, state = %d */
#define EID0_15   DU0|15,FLDS1(TS32) /*! Event Cfg: 0x%0.2X */
#define EID0_16   DU0|16,FLDS1(TS32) /*! evtRec.tags[i]: 0x%0.2X */
#define EID0_17   DU0|17,FLDS1(TS32) /*! evtTags.idx[j]: 0x%0.4X */
#define EID0_18   DU0|18,FLDS1(TS32) /*! AR BAD DATE: %d */
#define EID0_19   DU0|19,FLDS3(TS32,TS32,TS32) /*! Buffer@0x%0.8X: Tail[%d] > Head[%d] */
#define EID0_20   DU0|20,FLDS2(TS32,TS32) /*! Buffer size not a power of two, req size = %d, ret size = %d */
#define EID0_21   DU0|21,FLDS2(TS32,TS32) /*! TARGET BUFFER TOO SMALL! Purged Leading bytes. Purged: %u; Remaining: %u */
#define EID0_22   DU0|22,FLDS3(TS32,TS32,TS32) /*!  Odo: %d Bit Calc: %d B:%d */
#define EID0_23   DU0|23,FLDS2(TS32,TS32) /*!  Odo: %d Bad Calc: %d */
#define EID0_24   DU0|24,FLDSSTR /*! SPEEDING */
#define EID0_25   DU0|25,FLDSSTR /*! HIGH RPM */
#define EID0_26   DU0|26,FLDSSTR /*! EXCESSIVE IDLE */
#define EID0_27   DU0|27,FLDSSTR /*! FREE WHEELING */
#define EID0_28   DU0|28,FLDS2(TS32,TS32) /*! Odo: %d Bad Calc: %d */
#define EID0_29   DU0|29,FLDS2(TS32,TS32) /*! Odo: %d Bad CRC: %d */
#define EID0_30   DU0|30,FLDSSTR /*! Invalid Command. Command not recognized */
#define EID0_31   DU0|31,FLDS1(TS32) /*! Duplicate Event Index: %d */
#define EID0_32   DU0|32,FLDS1(TS32) /*! Duplicate Event Index: %d */
#define EID0_33   DU0|33,FLDS1(TS32) /*! Duplicate Event: %d */
#define EID0_34   DU0|34,FLDSSTR /*! CM: GET MSG FAIL */
#define EID0_35   DU0|35,FLDS1(TS32) /*! Duplicate Event Index: %d */
#define EID0_36   DU0|36,FLDS1(TS32) /*! Duplicate Event: %d */
#define EID0_37   DU0|37,FLDSSTR /*! CM: GET MSG FAIL */
#define EID0_38   DU0|38,FLDS1(TS32) /*! Duplicate Event Index: %d */
#define EID0_39   DU0|39,FLDS1(TS32) /*! Duplicate Event Index: %d */
#define EID0_40   DU0|40,FLDS1(TS32) /*! Duplicate Event: %d */
#define EID0_41   DU0|41,FLDSSTR /*! CM: GET MSG FAIL */
#define EID0_42   DU0|42,FLDSSTR /*! CM: GET MSG FAIL */
#define EID0_43   DU0|43,FLDS2(TS32,TS32) /*! CFG CRC: 0x%0.4X CALC: 0x%0.4X */
#define EID0_44   DU0|44,FLDS1(TS32) /*! Recovering Cfg Page Nr %d */
#define EID0_45   DU0|45,FLDS1(TS32) /*! Backup of Cfg Page Nr %d empty */
#define EID0_46   DU0|46,FLDS1(TS32) /*! Recovering DF Page Nr %d */
#define EID0_47   DU0|47,FLDSSTR /*! DEFAULT CONFIG LOADED */
#define EID0_48   DU0|48,FLDSSTR /*! DEFAULT CONFIG LOADED */
#define EID0_49   DU0|49,FLDS2(TS32,TS32) /*! Status Persist CRC:0x%0.4X OLD:0x%0.4X */
#define EID0_50   DU0|50,FLDS3(TS32,TS32,TS32) /*! Config NOT Persist CRC:0x%0.4X OLD:0x%0.4X SRC: %d */
#define EID0_51   DU0|51,FLDS2(TS32,TS32) /*! STS CRC: 0x%0.4X CALC: 0x%0.4X */
#define EID0_52   DU0|52,FLDSSTR /*! ERM CHECKSUM ERROR */
#define EID0_53   DU0|53,FLDS2(TS32,TS32) /*! Index: %d Char: 0x%0.2X */
#define EID0_54   DU0|54,FLDS2(TS32,TS32) /*!  Invalid CS: 0x%0.2X Data: 0x%0.2X */
#define EID0_55   DU0|55,FLDSSTR /*! CHECKSUM ERROR */
#define EID0_56   DU0|56,FLDSSTR /*! CARD READER: READ Error - Track 2 */
#define EID0_57   DU0|57,FLDSSTR /*! CARD READER: READ Error - Track 2 not complete */
#define EID0_58   DU0|58,FLDSSTR /*! CARD READER: READ Error - Track 3 */
#define EID0_59   DU0|59,FLDSSTR /*! CARD READER: READ Error - Track 3 not complete */
#define EID0_60   DU0|60,FLDSSTR /*! CARD READER: READ Error - Track 3 not complete */
#define EID0_61   DU0|61,FLDSSTR /*! CARD READER: READ Error - Track 3 not present */
#define EID0_62   DU0|62,FLDSSTR /*! CARD READER: READ Error - Track 2 not complete */
#define EID0_63   DU0|63,FLDSSTR /*! CARD READER: READ Error - Track 2 not present */
#define EID0_64   DU0|64,FLDSSTR /*! Failed to set IP/Port - Invalid format */
#define EID0_65   DU0|65,FLDSSTR /*! Failed to set IP/Port - Invalid format */
#define EID0_66   DU0|66,FLDSSTR /*! Failed to set IP/Port - Invalid format */
#define EID0_67   DU0|67,FLDSSTR /*! Peername not found */
#define EID0_68   DU0|68,FLDSSTR /*! Address not found */
#define EID0_69   DU0|69,FLDSSTR /*! Key not found */
#define EID0_70   DU0|70,FLDS1(TS32) /*! Failed to set timeout: %u */
#define EID0_71   DU0|71,FLDS1(TS32) /*! Failed to set peername: %u */
#define EID0_72   DU0|72,FLDS1(TS32) /*! Failed to address: %u */
#define EID0_73   DU0|73,FLDS1(TS32) /*! Failed to set key: %u */
#define EID0_74   DU0|74,FLDSSTR /*! DF SECT CRC */
#define EID0_75   DU0|75,FLDSSTR /*! FLASH SECTOR SIZE 4096 */
#define EID0_76   DU0|76,FLDSSTR /*! FLASH PAGE SIZE 512 */
#define EID0_77   DU0|77,FLDS1(TS32) /*! Invalid WLP Buffer at address %d */
#define EID0_78   DU0|78,FLDS2(TS32,TS32) /*! DS: Msg Sent OK, Incorrect Record Idx: %d, Expected %d */
#define EID0_79   DU0|79,FLDS1(TS32) /*! DS: %d Pages per Record not supported */
#define EID0_80   DU0|80,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! 1 WIRE ID: 0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X */
#define EID0_81   DU0|81,FLDS2(TS32,TS32) /*! PAGE 0 CRC16: Calc: %X, Read %X */
#define EID0_82   DU0|82,FLDS2(TS32,TS32) /*! PAGE 1 CRC16: Calc: %X, Read %X */
#define EID0_83   DU0|83,FLDS2(TS32,TS32) /*! PAGE 2 CRC16: Calc: %X, Read %X  */
#define EID0_84   DU0|84,FLDS2(TS32,TS32) /*! PAGE 3 CRC16: Calc: %X, Read %X  */
#define EID0_85   DU0|85,FLDS1(TS32) /*! EOBD Key Gen ERROR: %d */
#define EID0_86   DU0|86,FLDS1(TS32) /*! Event Cfg: 0x%0.2X */
#define EID0_87   DU0|87,FLDS1(TS32) /*! evtTags.idx[j]: 0x%0.4X */
#define EID0_88   DU0|88,FLDS3(TS32,TS32,TS32) /*! EVTID: %d trType: 0x%0.4X delay: %d */
#define EID0_89   DU0|89,FLDSSTR /*! EVT: OUT OF MEMORY */
#define EID0_90   DU0|90,FLDS1(TS32) /*! Event Cfg: 0x%0.2X */
#define EID0_91   DU0|91,FLDS1(TS32) /*! evtTags.idx[j]: 0x%0.4X */
#define EID0_92   DU0|92,FLDS2(TS32,TS32) /*! FW Unit: %d New: %d */
#define EID0_93   DU0|93,FLDSSTR /*! GPS BUFFER OVERFLOW - CHECKSUM */
#define EID0_94   DU0|94,FLDSSTR /*! GPS: BUFFER */
#define EID0_95   DU0|95,FLDSSTR /*! GPS: TIMEOUT */
#define EID0_96   DU0|96,FLDSSTR /*! GPS: SPI BAD RESET */
#define EID0_97   DU0|97,FLDS1(TS32) /*! GPS LENGTH: %d */
#define EID0_98   DU0|98,FLDSSTR /*! GPS AID REQ */
#define EID0_99   DU0|99,FLDSSTR /*! GPS AID REQ */
#define EID0_100   DU0|100,FLDSSTR /*! GPS AlmP REQ */
#define EID0_101   DU0|101,FLDS4(TS32,TS32,TS32,TS32) /*! GPS Checksum Error Class: 0x%0.2X ID: 0x%0.2X 0x%0.2X-0x%0.2X */
#define EID0_102   DU0|102,FLDSSTR /*! GPS: ReInit */
#define EID0_103   DU0|103,FLDSSTR /*! GPS: ReInit */
#define EID0_104   DU0|104,FLDSSTR /*! GPS: RTC PWR */
#define EID0_105   DU0|105,FLDSSTR /*! GPS REGULATOR OFF - SYSTEM POWER LOW */
#define EID0_106   DU0|106,FLDSSTR /*! GPS: AID OVERRUN */
#define EID0_107   DU0|107,FLDSSTR /*! GPS: COMMS FAILURE */
#define EID0_108   DU0|108,FLDSSTR /*! GPS: HW RESET TIMEOUT */
#define EID0_109   DU0|109,FLDSSTR /*! GPS: AID INVALID */
#define EID0_110   DU0|110,FLDS1(TS32) /*! GPS Aid to Module. Length:%u */
#define EID0_111   DU0|111,FLDSSTR /*! GPS AT Default */
#define EID0_112   DU0|112,FLDS1(TS32) /*! IO OUT: %04d */
#define EID0_113   DU0|113,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_114   DU0|114,FLDSSTR /*! CRITICAL ERROR */
#define EID0_115   DU0|115,FLDS1(TS32) /*! DEFAULT/INVALID STATE: %X */
#define EID0_116   DU0|116,FLDSSTR /*! GPS BAD IO */
#define EID0_117   DU0|117,FLDS4(TS32,TS32,TS32,TS32) /*! IPC Data RX Channel Overrun - Flush - CE73 0x%0.2X 0x%0.2X 0x%0.2X [%d] */
#define EID0_118   DU0|118,FLDSSTR /*! IPC Data RX: CRC Error - Flush */
#define EID0_119   DU0|119,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! IPC: Msg Repeating: Src: %d, Dest: %d, id: %d, 0x%0.2X0x%0.2X0x%0.2X0x%0.2X */
#define EID0_120   DU0|120,FLDSSTR /*! IPC: RX Buf Flushed */
#define EID0_121   DU0|121,FLDSSTR /*! Filter List FULL */
#define EID0_122   DU0|122,FLDSSTR /*! Filter List FULL */
#define EID0_123   DU0|123,FLDSSTR /*! BAD CRC */
#define EID0_124   DU0|124,FLDS3(TS32,TS32,TS32) /*! LvLoc 0x%0.2X | Loc 0x%0.2X | Gps Status 0x%0.2X */
#define EID0_125   DU0|125,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! MSG%d %d:S%d D%d CFG%X P%X */
#define EID0_126   DU0|126,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! MSG%d %d:S%d D%d CFG%X P%X */
#define EID0_127   DU0|127,FLDSSTR /*! Command not implemented */
#define EID0_128   DU0|128,FLDSSTR /*! Send Message Failure */
#define EID0_129   DU0|129,FLDSSTR /*! Send Message Failure: No envelope assigned */
#define EID0_130   DU0|130,FLDSSTR /*! BA CONTENT TYPE NOT SUPPORTED */
#define EID0_131   DU0|131,FLDS2(TS32,TS32) /*! BA CRC ERROR, rxCRC = 0x%0.4X, calcCRC = 0x%0.4X */
#define EID0_132   DU0|132,FLDSSTR /*! BA PARSER: Buffer Fetch Fail */
#define EID0_133   DU0|133,FLDSSTR /*! MULTI FRAME RECEIVED: NOT IMPLEMENTED */
#define EID0_134   DU0|134,FLDSSTR /*! BA Unrecognised Message Type */
#define EID0_135   DU0|135,FLDSSTR /*! BA Message NOT RECOGNISED */
#define EID0_136   DU0|136,FLDSSTR /*! TEST NOT DEFINED */
#define EID0_137   DU0|137,FLDS1(TS32) /*! PWR: FAST SLEEP: %d */
#define EID0_138   DU0|138,FLDS1(TS32) /*! Over voltage: Vref %dV */
#define EID0_139   DU0|139,FLDS1(TS32) /*! PWR: BATT.CHRG. OFF: MAINS: %dV */
#define EID0_140   DU0|140,FLDS2(TS32,TS32) /*! PWR: BATT.CHRG. RESET: BAD CRC: 0x%0.4X 0x%0.4X */
#define EID0_141   DU0|141,FLDSSTR /*! PWR: BATT.CHRG. OFF: OVER TEMP. */
#define EID0_142   DU0|142,FLDSSTR /*! PWR: BATT.CHRG. OFF: ERROR */
#define EID0_143   DU0|143,FLDSSTR /*! TRIP START: DISABLE MODEM */
#define EID0_144   DU0|144,FLDSSTR /*! TRIP END: ENABLE MODEM */
#define EID0_145   DU0|145,FLDS1(TS32) /*! PWR BAD: SHUTDOWN IN %d sec */
#define EID0_146   DU0|146,FLDSSTR /*! PWR: FLASH LOCKOUT */
#define EID0_147   DU0|147,FLDS2(TS32,TS32) /*! TRIP FUEL: %d %d */
#define EID0_148   DU0|148,FLDSSTR /*! INVALID REQUEST  */
#define EID0_149   DU0|149,FLDSSTR /*! INVALID PASSWORD  */
#define EID0_150   DU0|150,FLDSSTR /*! Write fail. SLI not Init'd */
#define EID0_151   DU0|151,FLDS1(TS32) /*! VNI App. Invalid State: %u */
#define EID0_152   DU0|152,FLDSSTR /*! No Data Rx Timeout */
#define EID0_153   DU0|153,FLDSSTR /*! ProtDetect Timeout. */
#define EID0_154   DU0|154,FLDSSTR /*! SpecProt Detect OFF */
#define EID0_155   DU0|155,FLDS1(TS32) /*! INVALID TST: %u */
#define EID0_156   DU0|156,FLDS1(TS32) /*! Kwp: Unknown %X */
#define EID0_157   DU0|157,FLDS1(TS32) /*! UDS: Unknown %X */
#define EID0_158   DU0|158,FLDSSTR /*! PD Start-Session Write Error; Retrying */
#define EID0_159   DU0|159,FLDSSTR /*! PD Start-Session Error. Exiting */
#define EID0_160   DU0|160,FLDSSTR /*! PD Start-Session No Response. Exiting */
#define EID0_161   DU0|161,FLDSSTR /*! PD Start-Session No Response. Retrying */
#define EID0_162   DU0|162,FLDSSTR /*! PD Start-Session Failure, No response */
#define EID0_163   DU0|163,FLDS1(TS32) /*! invalid Protocol: 0x%0.4X */
#define EID0_164   DU0|164,FLDSSTR /*! Invalid Callback. Default callback set */
#define EID0_165   DU0|165,FLDS2(TS32,TS32) /*! Invalid IoConfig: %u [%X] */
#define EID0_166   DU0|166,FLDSSTR /*! ISO14230 INVALID FORMAT */
#define EID0_167   DU0|167,FLDSSTR /*! ISO14230 INVALID INIT RESP */
#define EID0_168   DU0|168,FLDS2(TS32,TS32) /*! ISO TX: 0x%0.2X RX: 0x%0.2X */
#define EID0_169   DU0|169,FLDSSTR /*! ISO15765 PHY ERROR */
#define EID0_170   DU0|170,FLDSSTR /*! Invalid Callback. Default callback set */
#define EID0_171   DU0|171,FLDS2(TS32,TS32) /*! Invalid IoConfig: %u [%X] */
#define EID0_172   DU0|172,FLDS2(TS32,TS32) /*! Invalid PCI: 0x%0.2X ; Sec: %d */
#define EID0_173   DU0|173,FLDS2(TS32,TS32) /*! Invalid PCI: 0x%0.2X ; Sec: %d */
#define EID0_174   DU0|174,FLDSSTR /*! ISO15765 TIMEOUT */
#define EID0_175   DU0|175,FLDSSTR /*! ISO15765 WRITE FAILURE */
#define EID0_176   DU0|176,FLDS2(TS32,TS32) /*! Protocol Timeout: %d(%d) */
#define EID0_177   DU0|177,FLDSSTR /*! Invalid Callback. Default callback set */
#define EID0_178   DU0|178,FLDS2(TS32,TS32) /*! Invalid IoConfig: %u [%X] */
#define EID0_179   DU0|179,FLDS1(TS32) /*! TP20 Message Length: %d */
#define EID0_180   DU0|180,FLDSSTR /*! Filter List FULL */
#define EID0_181   DU0|181,FLDSSTR /*! Filter List FULL */
#define EID0_182   DU0|182,FLDSSTR /*! Filter List FULL */
#define EID0_183   DU0|183,FLDS1(TS32) /*! ISO15765 ERROR 0x%0.4X */
#define EID0_184   DU0|184,FLDSSTR /*! Filter List FULL */
#define EID0_185   DU0|185,FLDSSTR /*! Filter List FULL */
#define EID0_186   DU0|186,FLDSSTR /*! Filter List FULL */
#define EID0_187   DU0|187,FLDSSTR /*! Filter List FULL */
#define EID0_188   DU0|188,FLDS1(TS32) /*! SLCANIPC ERROR 0x%0.4X */
#define EID0_189   DU0|189,FLDS1(TS32) /*! Unknwn Page: %u */
#define EID0_190   DU0|190,FLDSSTR /*! MASK Set FAIL */
#define EID0_191   DU0|191,FLDS1(TS32) /*! Invld Cmd: %u */
#define EID0_192   DU0|192,FLDS2(TS32,TS32) /*! Fuel Remaining: %u mL > Tanksize: %u ml */
#define EID0_193   DU0|193,FLDS1(TS32) /*! EOBD: No Parser for Scope ID: %u */
#define EID0_194   DU0|194,FLDSSTR /*! VNI WRITE CMD: Invalid MAC on received command. Write aborted */
#define EID0_195   DU0|195,FLDSSTR /*! MAC verification FAIL */
#define EID0_196   DU0|196,FLDSSTR /*! Current MAC key VOID */
#define EID0_197   DU0|197,FLDSSTR /*! ID Hash Mismatch */
#define EID0_198   DU0|198,FLDS1(TS32) /*! TgtArray Sze: %u */
#define EID0_199   DU0|199,FLDS1(TS32) /*! Read FLASH failure: Idx:%u */
#define EID0_200   DU0|200,FLDS1(TS32) /*! TgtArray Sze: %u */
#define EID0_201   DU0|201,FLDS1(TS32) /*! Invalid Cmd Command: %u */
#define EID0_202   DU0|202,FLDSSTR /*! Requesting EOBD Failed. VIN not Current */
#define EID0_203   DU0|203,FLDSSTR /*! DTC CRC Check FAIL */
#define EID0_204   DU0|204,FLDSSTR /*! Max Dtc's. No space. DTC Count Error */
#define EID0_205   DU0|205,FLDS1(TS32) /*! INVALID DTC ADDRESS TYPE: 0x%0.2X */
#define EID0_206   DU0|206,FLDSSTR /*! DTC ECU not stored. */
#define EID0_207   DU0|207,FLDSSTR /*! Invalid ECU Address */
#define EID0_208   DU0|208,FLDSSTR /*! Invalid Add Type */
#define EID0_209   DU0|209,FLDSSTR /*! Invalid ECU Data */
#define EID0_210   DU0|210,FLDS1(TS32) /*! DTC Tst: Unknown %X */
#define EID0_211   DU0|211,FLDS1(TS32) /*! NO SUCH THRESHOLD: %d */
#define EID0_212   DU0|212,FLDS1(TS32) /*! NO SUCH INTERVAL: %d */
#define EID0_213   DU0|213,FLDSSTR /*!  NO SUCH TEST */
#define EID0_214   DU0|214,FLDSSTR /*! OBD2 Init Stopped */
#define EID0_215   DU0|215,FLDSSTR /*! OBD2 Comms TimeOut - Reinit */
#define EID0_216   DU0|216,FLDSSTR /*! OBD2 Init Stopped */
#define EID0_217   DU0|217,FLDSSTR /*! OBD2 Comms TimeOut - Reinit */
#define EID0_218   DU0|218,FLDSSTR /*!  BAD KWP2000 LENGTH */
#define EID0_219   DU0|219,FLDSSTR /*!  BAD ISO9141 LENGTH */
#define EID0_220   DU0|220,FLDSSTR /*!  BAD VAG LENGTH */
#define EID0_221   DU0|221,FLDSSTR /*!  BAD J1850VPW LENGTH */
#define EID0_222   DU0|222,FLDSSTR /*! VAG RX ERR */
#define EID0_223   DU0|223,FLDSSTR /*! VAG TX ERR */
#define EID0_224   DU0|224,FLDSSTR /*! VAG REQ */
#define EID0_225   DU0|225,FLDSSTR /*! VAG INV CNT */
#define EID0_226   DU0|226,FLDS1(TS32) /*! VAG INV SID:0x%0.2X */
#define EID0_227   DU0|227,FLDSSTR /*! VAG INV ETX */
#define EID0_228   DU0|228,FLDSSTR /*! VAG FORCE RX */
#define EID0_229   DU0|229,FLDS2(TS32,TS32) /*! VAG INV CMP 0x%0.2X 0x%0.2X */
#define EID0_230   DU0|230,FLDS1(TS32) /*! VAG ERR: 0x%0.2X */
#define EID0_231   DU0|231,FLDS1(TS32) /*! KWP2000 TARGET: 0x%0.2X */
#define EID0_232   DU0|232,FLDS1(TSTR) /*! VIN: %s */
#define EID0_233   DU0|233,FLDS1(TSTR) /*! BAD VIN Updated: %s */
#define EID0_234   DU0|234,FLDSSTR /*! VAG NACK */
#define EID0_235   DU0|235,FLDSSTR /*!  BAD KWP2000 LENGTH */
#define EID0_236   DU0|236,FLDSSTR /*! CHANNEL RESP BAD */
#define EID0_237   DU0|237,FLDSSTR /*! CONN ACK BAD */
#define EID0_238   DU0|238,FLDSSTR /*! TP20 DATA BAD */
#define EID0_239   DU0|239,FLDS1(TS32) /*! KWP2000 TARGET: 0x%0.2X */
#define EID0_240   DU0|240,FLDS2(TS32,TS32) /*! SERVICE: 0x%0.2X CODE 0x%0.2X */
#define EID0_241   DU0|241,FLDSSTR /*! EnviroStat not instantiated */
#define EID0_242   DU0|242,FLDS1(TS32) /*! Invalid Mode: %u */
#define EID0_243   DU0|243,FLDS2(TS32,TS32) /*! Not enough data for #DTC's. cnt:%u; datalen:%u */
#define EID0_244   DU0|244,FLDS2(TS32,TS32) /*! Unrecognised MODE: 0x%0.2X CODE 0x%0.2X */
#define EID0_245   DU0|245,FLDS1(TS32) /*! Unknown SID 0x%0.2X */
#define EID0_246   DU0|246,FLDS1(TS32) /*! INVALID LOCAL IDENTIFIER: %d */
#define EID0_247   DU0|247,FLDS1(TS32) /*! INVALID COMMON IDENTIFIER: %d */
#define EID0_248   DU0|248,FLDS1(TS32) /*! Unknown Command: 0x%0.2X */
#define EID0_249   DU0|249,FLDS1(TS32) /*! UDS DTC Unknown subfunc: 0x%0.2X */
#define EID0_250   DU0|250,FLDSSTR /*! Message empty */
#define EID0_251   DU0|251,FLDS1(TS32) /*! Unknown SID: 0x%0.2X */
#define EID0_252   DU0|252,FLDSSTR /*! IoConfig ptr invalid */
#define EID0_253   DU0|253,FLDSSTR /*! SLI ptr invalid */
#define EID0_254   DU0|254,FLDSSTR /*! Layer not initialised */
#define EID0_255   DU0|255,FLDSSTR /*! Layer not initialised */
#define EID0_256   DU0|256,FLDSSTR /*! ISO14230 Invalid Start Session Mode */
#define EID0_257   DU0|257,FLDSSTR /*! Layer not initialised */
#define EID0_258   DU0|258,FLDS2(TS32,TS32) /*! Unknown Subtype: %u [0x%0.4X] */
#define EID0_259   DU0|259,FLDSSTR /*! Layer not initiailised */
#define EID0_260   DU0|260,FLDSSTR /*! Layer not initialised */
#define EID0_261   DU0|261,FLDSSTR /*! ISO14230 Invalid function call */
#define EID0_262   DU0|262,FLDSSTR /*! Layer not initialised */
#define EID0_263   DU0|263,FLDS2(TS32,TS32) /*! Write Error: P3:%u  P2:%u  */
#define EID0_264   DU0|264,FLDS2(TS32,TS32) /*! Write Error: P3:%u  P2:%u  */
#define EID0_265   DU0|265,FLDSSTR /*! Layer not initialised */
#define EID0_266   DU0|266,FLDSSTR /*! Layer not initialised */
#define EID0_267   DU0|267,FLDS1(TS32) /*! INVALID API TEST: %u */
#define EID0_268   DU0|268,FLDSSTR /*! IoCfg UNINITIALISED */
#define EID0_269   DU0|269,FLDSSTR /*! SLI  UNINITIALISED */
#define EID0_270   DU0|270,FLDSSTR /*! Layer not initialised */
#define EID0_271   DU0|271,FLDS2(TS32,TS32) /*! Unknown Subtype: %u [0x%0.4X] */
#define EID0_272   DU0|272,FLDSSTR /*! Layer not initiailised */
#define EID0_273   DU0|273,FLDSSTR /*! Layer not initialised */
#define EID0_274   DU0|274,FLDSSTR /*! Layer not initialised */
#define EID0_275   DU0|275,FLDS2(TS32,TS32) /*! Invalid Start Session Mode: %u [%X] */
#define EID0_276   DU0|276,FLDSSTR /*! Layer not initialised */
#define EID0_277   DU0|277,FLDSSTR /*! Layer not initialised */
#define EID0_278   DU0|278,FLDSSTR /*! Layer not initialised */
#define EID0_279   DU0|279,FLDSSTR /*! Layer not initialised */
#define EID0_280   DU0|280,FLDS1(TS32) /*! NEW BUS ERROR: 0x%0.8X */
#define EID0_281   DU0|281,FLDS2(TS32,TS32) /*! Write Error: P3:%u  P2:%u  */
#define EID0_282   DU0|282,FLDSSTR /*! Layer not initialised */
#define EID0_283   DU0|283,FLDSSTR /*! Layer not initialised */
#define EID0_284   DU0|284,FLDS2(TS32,TS32) /*! Invalid State: %u [%X] */
#define EID0_285   DU0|285,FLDSSTR /*! IoCfg NoInit */
#define EID0_286   DU0|286,FLDSSTR /*! SLI NoInit */
#define EID0_287   DU0|287,FLDS2(TS32,TS32) /*! ST: %u [0x%0.4X] */
#define EID0_288   DU0|288,FLDSSTR /*! Init FAIL */
#define EID0_289   DU0|289,FLDSSTR /*! Layer not initialised */
#define EID0_290   DU0|290,FLDSSTR /*! Layer not initialised */
#define EID0_291   DU0|291,FLDSSTR /*! Layer not initialised */
#define EID0_292   DU0|292,FLDS1(TS32) /*! NEW BUS ERROR: 0x%0.8X */
#define EID0_293   DU0|293,FLDSSTR /*! Layer not initialised */
#define EID0_294   DU0|294,FLDSSTR /*! Layr No init */
#define EID0_295   DU0|295,FLDSSTR /*! Layr No init */
#define EID0_296   DU0|296,FLDSSTR /*! IoConfig NOT CORRECTLY INITIALISED */
#define EID0_297   DU0|297,FLDSSTR /*! Session Layer Interface NOT CORRECTLY INITIALISED */
#define EID0_298   DU0|298,FLDS2(TS32,TS32) /*! Unknown Subtype: %u [0x%0.4X] */
#define EID0_299   DU0|299,FLDSSTR /*! Layer not initiailised */
#define EID0_300   DU0|300,FLDSSTR /*! Layer not initialised */
#define EID0_301   DU0|301,FLDSSTR /*! Layer not initialised */
#define EID0_302   DU0|302,FLDSSTR /*! Layer not initialised */
#define EID0_303   DU0|303,FLDS2(TS32,TS32) /*! Invalid Start Session Mode: %u [%X] */
#define EID0_304   DU0|304,FLDSSTR /*! Layer not initialised */
#define EID0_305   DU0|305,FLDSSTR /*! Layer not initialised */
#define EID0_306   DU0|306,FLDSSTR /*! Layer not initialised */
#define EID0_307   DU0|307,FLDS2(TS32,TS32) /*! Write Error: P3:%u  P2:%u  */
#define EID0_308   DU0|308,FLDSSTR /*! Layer not initialised */
#define EID0_309   DU0|309,FLDSSTR /*! Layer not initialised */
#define EID0_310   DU0|310,FLDSSTR /*! MESSAGE ALLOCATION FAILED */
#define EID0_311   DU0|311,FLDS1(TS32) /*! RAW Acc Error Count:%d */
#define EID0_312   DU0|312,FLDS4(TSTR,TSTR,TSTR,TS32) /*! Acc RAW Offset: x=%s,y=%s,z=%s Error Count:%d */
#define EID0_313   DU0|313,FLDSSTR /*! Zero Offset Values */
#define EID0_314   DU0|314,FLDS1(TS32) /*! Raw Data Error!! %d */
#define EID0_315   DU0|315,FLDSSTR /*! Raw Data Error - Reinitialize */
#define EID0_316   DU0|316,FLDS1(TS32) /*! Axis Rotation Error!! %d */
#define EID0_317   DU0|317,FLDSSTR /*! Axis Rotation Error - Recalibrate */
#define EID0_318   DU0|318,FLDS1(TS32) /*! HPF Error!! %d */
#define EID0_319   DU0|319,FLDSSTR /*! HPF Error - Reinitialize filter */
#define EID0_320   DU0|320,FLDS1(TS32) /*! Factory Calibration Error %d!! */
#define EID0_321   DU0|321,FLDSSTR /*! SPI TIMEOUT */
#define EID0_322   DU0|322,FLDSSTR /*!  */
#define EID0_323   DU0|323,FLDS3(TS32,TS32,TS32) /*! INVALID SAMPLE!! X: %d, Y: %d, Z: %d milliG's */
#define EID0_324   DU0|324,FLDSSTR /*! ACC: BUFFER FAILED */
#define EID0_325   DU0|325,FLDS4(TS32,TS32,TS32,TS32) /*! ACC: NO EVENTS RAISED M:0x%0.8X S:%d C:%d P:%d */
#define EID0_326   DU0|326,FLDS2(TS32,TS32) /*! Accident Angle: %d Val: %d */
#define EID0_327   DU0|327,FLDS2(TS32,TS32) /*! Accident Angle: %d Val: %d */
#define EID0_328   DU0|328,FLDSSTR /*! IDX EQUAL */
#define EID0_329   DU0|329,FLDSSTR /*! SA > 20 */
#define EID0_330   DU0|330,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! 0x%0.2X PersistIdx:%d||PostIdx:%d-%d||PreIdx:%d-%d||TS:%d||SA:%d */
#define EID0_331   DU0|331,FLDS1(TS32) /*! FIFO BUFFER OVERRUN IMMENTENT - %d SAMPLES REMAINING! */
#define EID0_332   DU0|332,FLDS1(TS32) /*! FIFO Flag Set: %d Samples */
#define EID0_333   DU0|333,FLDSSTR /*! No Samples Available!! */
#define EID0_334   DU0|334,FLDSSTR /*! No Samples Available!! */
#define EID0_335   DU0|335,FLDSSTR /*! Burst Data Trg Denied */
#define EID0_336   DU0|336,FLDSSTR /*! Incorrect Sample Rate Config!! */
#define EID0_337   DU0|337,FLDS1(TS32) /*! Sample Rate %d is Invalid! */
#define EID0_338   DU0|338,FLDSSTR /*! ACC: BAD BURST DATA */
#define EID0_339   DU0|339,FLDSSTR /*!  */
#define EID0_340   DU0|340,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_341   DU0|341,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_342   DU0|342,FLDS1(TS32) /*! BAD READ: 0x%0.2X */
#define EID0_343   DU0|343,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_344   DU0|344,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_345   DU0|345,FLDSSTR /*! ACC Count: 0 */
#define EID0_346   DU0|346,FLDS1(TS32) /*! ACC SCALAR TOO LARGE %d */
#define EID0_347   DU0|347,FLDS1(TS32) /*! ACC SCALAR TOO LARGE %d */
#define EID0_348   DU0|348,FLDSSTR /*! Cal 0 Samples */
#define EID0_349   DU0|349,FLDSSTR /*! Roll Event */
#define EID0_350   DU0|350,FLDSSTR /*! Pitch Event */
#define EID0_351   DU0|351,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_352   DU0|352,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_353   DU0|353,FLDSSTR /*!  */
#define EID0_354   DU0|354,FLDS3(TS32,TS32,TS32) /*! INVALID SAMPLE!! X: %d, Y: %d, Z: %d milliG's */
#define EID0_355   DU0|355,FLDSSTR /*! FRONT */
#define EID0_356   DU0|356,FLDSSTR /*! FRONT RIGHT */
#define EID0_357   DU0|357,FLDSSTR /*! FRONT LEFT */
#define EID0_358   DU0|358,FLDSSTR /*! RIGHT */
#define EID0_359   DU0|359,FLDSSTR /*! LEFT */
#define EID0_360   DU0|360,FLDSSTR /*! BACK RIGHT */
#define EID0_361   DU0|361,FLDSSTR /*! BACK LEFT */
#define EID0_362   DU0|362,FLDSSTR /*! BACK */
#define EID0_363   DU0|363,FLDSSTR /*! ACC: BUFFER FAILED */
#define EID0_364   DU0|364,FLDS4(TS32,TS32,TS32,TS32) /*! ACC: NO EVENTS RAISED M:0x%0.8X S:%d C:%d P:%d */
#define EID0_365   DU0|365,FLDS2(TS32,TS32) /*! Accident Angle: %d Val: %d */
#define EID0_366   DU0|366,FLDS2(TS32,TS32) /*! Accident Angle: %d Val: %d */
#define EID0_367   DU0|367,FLDSSTR /*! RIGHT */
#define EID0_368   DU0|368,FLDSSTR /*! LEFT */
#define EID0_369   DU0|369,FLDSSTR /*! FRONT */
#define EID0_370   DU0|370,FLDSSTR /*! BACK */
#define EID0_371   DU0|371,FLDSSTR /*! FRONT RIGHT */
#define EID0_372   DU0|372,FLDSSTR /*! BACK RIGHT */
#define EID0_373   DU0|373,FLDSSTR /*! FRONT LEFT */
#define EID0_374   DU0|374,FLDSSTR /*! BACK LEFT */
#define EID0_375   DU0|375,FLDSSTR /*!  */
#define EID0_376   DU0|376,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_377   DU0|377,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_378   DU0|378,FLDS1(TS32) /*! BAD READ: 0x%0.2X */
#define EID0_379   DU0|379,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_380   DU0|380,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_381   DU0|381,FLDSSTR /*! ACC Count: 0 */
#define EID0_382   DU0|382,FLDS1(TS32) /*! ACC SCALAR TOO LARGE %d */
#define EID0_383   DU0|383,FLDS1(TS32) /*! ACC SCALAR TOO LARGE %d */
#define EID0_384   DU0|384,FLDSSTR /*! Cal 0 Samples */
#define EID0_385   DU0|385,FLDSSTR /*! Roll Event */
#define EID0_386   DU0|386,FLDSSTR /*! Pitch Event */
#define EID0_387   DU0|387,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_388   DU0|388,FLDS3(TS32,TS32,TS32) /*! ACC BAD: 0x%0.2X 0x%0.2X 0x%0.2X */
#define EID0_389   DU0|389,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! BQ FAULT: NTC: %d BAT: %d CHRG: %d OTG: %d WDT: %d */
#define EID0_390   DU0|390,FLDSSTR /*! CAN BUSY */
#define EID0_391   DU0|391,FLDSSTR /*! CAN BUSY */
#define EID0_392   DU0|392,FLDSSTR /*! CAN BUSY */
#define EID0_393   DU0|393,FLDSSTR /*! CAN BUSY */
#define EID0_394   DU0|394,FLDS1(TS32) /*! BUS ERROR 0x%0.4X */
#define EID0_395   DU0|395,FLDS1(TS32) /*! CANbus BUSOFF RESET: 0x%0.2X */
#define EID0_396   DU0|396,FLDS1(TS32) /*! DLC %d */
#define EID0_397   DU0|397,FLDSSTR /*! SSP2 TIMEOUT */
#define EID0_398   DU0|398,FLDSSTR /*! RTC ERROR */
#define EID0_399   DU0|399,FLDSSTR /*! RTC: TIME BAD */
#define EID0_400   DU0|400,FLDSSTR /*! RTC: CRC FAIL */
#define EID0_401   DU0|401,FLDSSTR /*! SPI TIMEOUT */
#define EID0_402   DU0|402,FLDSSTR /*! USB HOST: ERROR */
#define EID0_403   DU0|403,FLDSSTR /*! USB HOST: RESET */
#define EID0_404   DU0|404,FLDSSTR /*! Invalid ScpMp Test */
#define EID0_405   DU0|405,FLDSSTR /*! GPRS Routing Error */
#define EID0_406   DU0|406,FLDSSTR /*! No Envelopes */
#define EID0_407   DU0|407,FLDSSTR /*! GPRS Receive: 81 Message Not decoded. Released.  */
#define EID0_408   DU0|408,FLDSSTR /*! UNHANDLED CASE */
#define EID0_409   DU0|409,FLDSSTR /*! Unexpected State: Voice Call terminated without proper notice */
#define EID0_410   DU0|410,FLDSSTR /*! UNHANDLED CASE */
#define EID0_411   DU0|411,FLDSSTR /*! UNHANDLED CASE */
#define EID0_412   DU0|412,FLDSSTR /*! UNHANDLED CASE */
#define EID0_413   DU0|413,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_414   DU0|414,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_415   DU0|415,FLDSSTR /*! No Env */
#define EID0_416   DU0|416,FLDSSTR /*! FC */
#define EID0_417   DU0|417,FLDSSTR /*! No Env */
#define EID0_418   DU0|418,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_419   DU0|419,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_420   DU0|420,FLDSSTR /*! UNHANDLED CASE */
#define EID0_421   DU0|421,FLDS1(TS32) /*!  %X */
#define EID0_422   DU0|422,FLDS1(TS32) /*!  %X */
#define EID0_423   DU0|423,FLDS1(TS32) /*! State: %X; USING DEFAULTS */
#define EID0_424   DU0|424,FLDSSTR /*! INCORRECTLY FORMATTED RESPONSE: +CGREG */
#define EID0_425   DU0|425,FLDS1(TS32) /*! Unidentified MODEM SOCKET STATE: %u */
#define EID0_426   DU0|426,FLDS1(TS32) /*! Unidentified AUX SOCKET STATE: %u */
#define EID0_427   DU0|427,FLDSSTR /*! Unrecognised Socket SRING */
#define EID0_428   DU0|428,FLDSSTR /*! Invalid Command. Command not receognised */
#define EID0_429   DU0|429,FLDSSTR /*! NOT ENOUGH DATA */
#define EID0_430   DU0|430,FLDSSTR /*! UDP INCOMPLETE 81 Message Received */
#define EID0_431   DU0|431,FLDSSTR /*! UDP Arbitrary Data received */
#define EID0_432   DU0|432,FLDS2(TS32,TS32) /*! UDP LENGTH ERROR: %u : %u */
#define EID0_433   DU0|433,FLDSSTR /*! CRITICAL ERROR: PIN IS INCORRECTLY PROGRAMMED */
#define EID0_434   DU0|434,FLDSSTR /*! CRITICAL ERROR: PUK REQUIRED. REMOVE SIM AND PLACE IN HANDSET TO ENTER PUK. */
#define EID0_435   DU0|435,FLDSSTR /*! *SIM PUK* */
#define EID0_436   DU0|436,FLDSSTR /*! *SIM PUK* */
#define EID0_437   DU0|437,FLDS1(TS32) /*! Invalid Modem ID Index: %u. Modem NOT IDENTIFIED */
#define EID0_438   DU0|438,FLDSSTR /*! MI: Invalid Power Command */
#define EID0_439   DU0|439,FLDSSTR /*! FOTA ALERT: NO RECOGNISED FOTA STRING */
#define EID0_440   DU0|440,FLDSSTR /*! NO RECOGNISED FOTA STRING */
#define EID0_441   DU0|441,FLDSSTR /*! Undefined Task */
#define EID0_442   DU0|442,FLDSSTR /*! Invalid Command. */
#define EID0_443   DU0|443,FLDSSTR /*! Response or empty message */
#define EID0_444   DU0|444,FLDSSTR /*! Unexpected State: Voice Call terminated without proper notice */
#define EID0_445   DU0|445,FLDSSTR /*! *SIM PUK* */
#define EID0_446   DU0|446,FLDSSTR /*! INVALID STATE */
#define EID0_447   DU0|447,FLDSSTR /*! MESSAGE CORRUPT */
#define EID0_448   DU0|448,FLDSSTR /*! No valid SCA */
#define EID0_449   DU0|449,FLDSSTR /*! Invalid Dest MSISDN, Next msisdn */
#define EID0_450   DU0|450,FLDSSTR /*! No valid Dest MSISDN */
#define EID0_451   DU0|451,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_452   DU0|452,FLDSSTR /*! INVALID STATE */
#define EID0_453   DU0|453,FLDS1(TS32) /*! INVALID STATE: %X */
#define EID0_454   DU0|454,FLDS1(TS32) /*! INVALID STATE: %X */
#define EID0_455   DU0|455,FLDSSTR /*! CRITICAL ERROR */
#define EID0_456   DU0|456,FLDSSTR /*! CRITICAL ERROR: PIN IS INCORRECTLY PROGRAMMED */
#define EID0_457   DU0|457,FLDSSTR /*! CRITICAL ERROR: PUK REQUIRED. REMOVE SIM AND PLACE IN HANDSET TO ENTER PUK. */
#define EID0_458   DU0|458,FLDS1(TS32) /*! INVALID STATE: %X */
#define EID0_459   DU0|459,FLDS1(TS32) /*!  %X */
#define EID0_460   DU0|460,FLDS1(TS32) /*!  %X */
#define EID0_461   DU0|461,FLDSSTR /*! INVALID PIN */
#define EID0_462   DU0|462,FLDSSTR /*! NO SIM. SIM Delay start */
#define EID0_463   DU0|463,FLDSSTR /*! IGNORING CMS ERROR 331 */
#define EID0_464   DU0|464,FLDSSTR /*! Invalid Response State: */
#define EID0_465   DU0|465,FLDSSTR /*! INIT CHANGE PIN */
#define EID0_466   DU0|466,FLDS1(TS32) /*! PIN CHANGE FAIL: MN %u */
#define EID0_467   DU0|467,FLDS1(TS32) /*! NOT ENOUGH SIM ATTEMPTS BEFORE BLOCKING: Remaining %u */
#define EID0_468   DU0|468,FLDSSTR /*! Modem Power Control Type 2: Time up powering Modem */
#define EID0_469   DU0|469,FLDSSTR /*! ALERT: Shutdown for GPS RECOVERY */
#define EID0_470   DU0|470,FLDS1(TS32) /*! INVALID STATE: %X */
#define EID0_471   DU0|471,FLDSSTR /*! CMC MANAGER ERROR: INVALID STATE */
#define EID0_472   DU0|472,FLDS2(TS32,TS32) /*! Unknown ERROR! State: %X (%u) */
#define EID0_473   DU0|473,FLDS2(TS32,TS32) /*! No Response! TASK: %X (%u) */
#define EID0_474   DU0|474,FLDS3(TS32,TS32,TS32) /*! CME H/W: %u; TASK: %X (%u) */
#define EID0_475   DU0|475,FLDS3(TS32,TS32,TS32) /*! CME APP: %u; TASK: %X (%u) */
#define EID0_476   DU0|476,FLDS3(TS32,TS32,TS32) /*! CMS ERROR: %u; TASK: %X (%u) */
#define EID0_477   DU0|477,FLDS2(TS32,TS32) /*! Reboot Requested by State: %X (%u) */
#define EID0_478   DU0|478,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! ERROR: FILE:%u||CMEHard:%u ST:%u||CMEAPP:%u ST:%u||CMS:%u ST:%u||NR:%u, ST:%u */
#define EID0_479   DU0|479,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! ERRHard:%u ERRAPP:%u||ERR LIM: %u||NR:%u NRLim:%u||Reboot:%u Reboot Limit:%u */
#define EID0_480   DU0|480,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! ERRHard:%u ERRAPP:%u||ERR LIM: %u||NR:%u NRLim:%u||Reboot:%u Reboot Limit:%u */
#define EID0_481   DU0|481,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! TELIT RESET. Modem CME: %u; Task: %X; Mdm CMS: %u || Socket CME: %u; Task: %X */
#define EID0_482   DU0|482,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! CONTROLLED TELIT POWER CYCLE. Modem CME: %u; Task: %X; Mdm CMS: %u || Socket CME: %u; Task: %X */
#define EID0_483   DU0|483,FLDSSTR /*! CDMA TASK NOT DEFINED */
#define EID0_484   DU0|484,FLDS1(TS32) /*! INVALID CASE: %X */
#define EID0_485   DU0|485,FLDS1(TS32) /*! INVALID CASE: %X */
#define EID0_486   DU0|486,FLDS1(TS32) /*! INVALID CASE: %X */
#define EID0_487   DU0|487,FLDSSTR /*! Data buffer NULL or 0 length  */
#define EID0_488   DU0|488,FLDSSTR /*! Index points to NULL Reference. */
#define EID0_489   DU0|489,FLDS1(TS32) /*! INVALID CASE: %X */
#define EID0_490   DU0|490,FLDS1(TS32) /*! INVALID CASE: %X */
#define EID0_491   DU0|491,FLDS1(TS32) /*! INVALID CASE: %X */
#define EID0_492   DU0|492,FLDSSTR /*! INVALID QUEUE INDEX OR BUFFER POINTER */
#define EID0_493   DU0|493,FLDSSTR /*! Rx State: BUSY */
#define EID0_494   DU0|494,FLDSSTR /*! CDMA CHOKE */
#define EID0_495   DU0|495,FLDSSTR /*! UNHANDLED CASE */
#define EID0_496   DU0|496,FLDSSTR /*! Unexpected State: Voice Call terminated without proper notice */
#define EID0_497   DU0|497,FLDSSTR /*! UNHANDLED CASE */
#define EID0_498   DU0|498,FLDSSTR /*! UNHANDLED CASE */
#define EID0_499   DU0|499,FLDSSTR /*! UNHANDLED CASE */
#define EID0_500   DU0|500,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_501   DU0|501,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_502   DU0|502,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_503   DU0|503,FLDSSTR /*! UNHANDLED CASE */
#define EID0_504   DU0|504,FLDS1(TU32) /*!  %X */
#define EID0_505   DU0|505,FLDS1(TU32) /*! State: %X; USING DEFAULTS */
#define EID0_506   DU0|506,FLDSSTR /*! INCORRECTLY FORMATTED RESPONSE: +CGREG */
#define EID0_507   DU0|507,FLDS1(TU32) /*! Unidentified MODEM SOCKET STATE: %u */
#define EID0_508   DU0|508,FLDS1(TU32) /*! Unidentified AUX SOCKET STATE: %u */
#define EID0_509   DU0|509,FLDSSTR /*! Unrecognised Socket SRING */
#define EID0_510   DU0|510,FLDSSTR /*! Invalid Command. Command not receognised */
#define EID0_511   DU0|511,FLDSSTR /*! NOT ENOUGH DATA */
#define EID0_512   DU0|512,FLDSSTR /*! UDP INCOMPLETE 81 Message Received */
#define EID0_513   DU0|513,FLDSSTR /*! UDP Arbitrary Data received */
#define EID0_514   DU0|514,FLDS2(TU32,TU32) /*! UDP LENGTH ERROR: %u : %u */
#define EID0_515   DU0|515,FLDSSTR /*! GPRS Routing Error */
#define EID0_516   DU0|516,FLDSSTR /*! No Envelopes */
#define EID0_517   DU0|517,FLDSSTR /*! GPRS Receive: 81 Message Not decoded. Released.  */
#define EID0_518   DU0|518,FLDS1(TU32) /*! Invalid Modem Command: %u */
#define EID0_519   DU0|519,FLDSSTR /*! CRITICAL INTERFACE ERROR. */
#define EID0_520   DU0|520,FLDSSTR /*! CRITICAL INTERFACE ERROR. */
#define EID0_521   DU0|521,FLDSSTR /*! Modem not initialised. */
#define EID0_522   DU0|522,FLDSSTR /*! Modem not communicating. */
#define EID0_523   DU0|523,FLDSSTR /*! Undefined Task */
#define EID0_524   DU0|524,FLDSSTR /*! Invalid Command. */
#define EID0_525   DU0|525,FLDSSTR /*! Response or empty message */
#define EID0_526   DU0|526,FLDSSTR /*! Unexpected State: Voice Call terminated without proper notice */
#define EID0_527   DU0|527,FLDS2(TU32,TU32) /*! Invalid MI Command: %u, Src: %u */
#define EID0_528   DU0|528,FLDSSTR /*! CRITICAL ERROR: PIN IS INCORRECTLY PROGRAMMED */
#define EID0_529   DU0|529,FLDSSTR /*! CRITICAL ERROR: PUK REQUIRED. REMOVE SIM AND PLACE IN HANDSET TO ENTER PUK. */
#define EID0_530   DU0|530,FLDSSTR /*! CRITICAL Modem PAUSED */
#define EID0_531   DU0|531,FLDS1(TU32) /*! Invalid Modem ID Index: %u. Modem NOT IDENTIFIED */
#define EID0_532   DU0|532,FLDS1(TU32) /*! Uninitialised Function Pointer: %u */
#define EID0_533   DU0|533,FLDSSTR /*! MI: Invalid Power Command */
#define EID0_534   DU0|534,FLDSSTR /*! INCORRECTLY FORMATTED RESPONSE: +CGREG */
#define EID0_535   DU0|535,FLDS1(TU32) /*! NOT ENOUGH SIM ATTEMPTS BEFORE BLOCKING: Remaining %u */
#define EID0_536   DU0|536,FLDSSTR /*! Invalid Response State: */
#define EID0_537   DU0|537,FLDSSTR /*! *SIM PUK* */
#define EID0_538   DU0|538,FLDSSTR /*! *SIM PUK* */
#define EID0_539   DU0|539,FLDS1(TU32) /*! INVALID STATE: 0x%04X */
#define EID0_540   DU0|540,FLDS1(TU32) /*! INVALID STATE: 0x%02X */
#define EID0_541   DU0|541,FLDSSTR /*! SSID OR PASSPHRASE TOO SHORT */
#define EID0_542   DU0|542,FLDS1(TU32) /*! INVALID STATE: 0x%02X */
#define EID0_543   DU0|543,FLDS1(TU32) /*! GET Message: Available: %u */
#define EID0_544   DU0|544,FLDSSTR /*! No env available */
#define EID0_545   DU0|545,FLDS1(TU32) /*! GET Message: Available: %u */
#define EID0_546   DU0|546,FLDSSTR /*! No env available */
#define EID0_547   DU0|547,FLDS1(TU32) /*! INVALID STATE: 0x%02X */
#define EID0_548   DU0|548,FLDSSTR /*! MESSAGE CORRUPT */
#define EID0_549   DU0|549,FLDSSTR /*! No valid SCA */
#define EID0_550   DU0|550,FLDSSTR /*! Invalid Dest MSISDN, Next msisdn */
#define EID0_551   DU0|551,FLDSSTR /*! No valid Dest MSISDN */
#define EID0_552   DU0|552,FLDS1(TU32) /*! INVALID STATE: 0x%02X */
#define EID0_553   DU0|553,FLDS1(TU32) /*! INVALID STATE: 0x%02X */
#define EID0_554   DU0|554,FLDS1(TU32) /*! INVALID STATE: 0x%02X */
#define EID0_555   DU0|555,FLDS1(TU32) /*! INVALID STATE: 0x%02X */
#define EID0_556   DU0|556,FLDS1(TU32) /*! INVALID STATE: 0x%02X */
#define EID0_557   DU0|557,FLDSSTR /*! Data Buffer under-run */
#define EID0_558   DU0|558,FLDS1(TSTR) /*! Reached non-numeric: %s */
#define EID0_559   DU0|559,FLDS1(TU32) /*! Cmd Not Allowed: State: %04X */
#define EID0_560   DU0|560,FLDSSTR /*! NO SIM. SIM Delay start */
#define EID0_561   DU0|561,FLDSSTR /*! INVALID PIN */
#define EID0_562   DU0|562,FLDS1(TU32) /*! Unrecognised socket ID %u. Incoming data dumped */
#define EID0_563   DU0|563,FLDS1(TU32) /*! Unknown Channel: %u */
#define EID0_564   DU0|564,FLDS1(TU32) /*! Unknown Channel: %u */
#define EID0_565   DU0|565,FLDSSTR /*! *SIM PUK* */
#define EID0_566   DU0|566,FLDSSTR /*! INVALID STATE */
#define EID0_567   DU0|567,FLDSSTR /*! MESSAGE CORRUPT */
#define EID0_568   DU0|568,FLDSSTR /*! No valid SCA */
#define EID0_569   DU0|569,FLDSSTR /*! Invalid Dest MSISDN, Next msisdn */
#define EID0_570   DU0|570,FLDSSTR /*! No valid Dest MSISDN */
#define EID0_571   DU0|571,FLDSSTR /*! DEFAULT/INVALID STATE */
#define EID0_572   DU0|572,FLDSSTR /*! INVALID STATE */
#define EID0_573   DU0|573,FLDS1(TU32) /*! INVALID STATE: %X */
#define EID0_574   DU0|574,FLDS1(TU32) /*! INVALID STATE: %X */
#define EID0_575   DU0|575,FLDSSTR /*! CRITICAL ERROR */
#define EID0_576   DU0|576,FLDSSTR /*! CRITICAL ERROR: PIN IS INCORRECTLY PROGRAMMED */
#define EID0_577   DU0|577,FLDSSTR /*! CRITICAL ERROR: PUK REQUIRED. REMOVE SIM AND PLACE IN HANDSET TO ENTER PUK. */
#define EID0_578   DU0|578,FLDS1(TU32) /*! INVALID STATE: %X */
#define EID0_579   DU0|579,FLDS1(TU32) /*!  %X */
#define EID0_580   DU0|580,FLDSSTR /*! INVALID PIN */
#define EID0_581   DU0|581,FLDSSTR /*! NO SIM. SIM Delay start */
#define EID0_582   DU0|582,FLDSSTR /*! IGNORING CMS ERROR 331 */
#define EID0_583   DU0|583,FLDSSTR /*! Invalid Response State: */
#define EID0_584   DU0|584,FLDSSTR /*! INIT CHANGE PIN */
#define EID0_585   DU0|585,FLDS1(TU32) /*! PIN CHANGE FAIL: MN %u */
#define EID0_586   DU0|586,FLDSSTR /*! Modem Power Control Type 2: Time up powering Modem */
#define EID0_587   DU0|587,FLDSSTR /*! ALERT:  FOTA UPGRADE PUK REQUIRED  */
#define EID0_588   DU0|588,FLDSSTR /*! ALERT:  FOTA UPGRADE VALID PIN REQUIRED  */
#define EID0_589   DU0|589,FLDSSTR /*! ALERT:  FOTA UPGRADE PUK REQUIRED  */
#define EID0_590   DU0|590,FLDSSTR /*! ALERT:  FOTA UPGRADE VALID PIN REQUIRED  */
#define EID0_591   DU0|591,FLDSSTR /*! ALERT: Shutdown for GPS RECOVERY */
#define EID0_592   DU0|592,FLDSSTR /*! ALERT: Powering Down GSM for MODEM LOCKOUT */
#define EID0_593   DU0|593,FLDSSTR /*! ALERT: Power Down Complete. Entering MODEM LOCKOUT */
#define EID0_594   DU0|594,FLDS0() /*! ALERT: Modem Lockout Released */
#define EID0_595   DU0|595,FLDS1(TU32) /*! INVALID STATE: %X */
#define EID0_596   DU0|596,FLDSSTR /*! CMC MANAGER ERROR: INVALID STATE */
#define EID0_597   DU0|597,FLDS7E(TU32,TU32,TU32,TU32,TU32,TU32,TU32),FLDS2(TU32,TU32) /*! ERROR: FILE:%u||CMEHard:%u ST:%u||CMEAPP:%u ST:%u||CMS:%u ST:%u||NR:%u, ST:%u */
#define EID0_598   DU0|598,FLDS7(TU32,TU32,TU32,TU32,TU32,TU32,TU32) /*! ERRHard:%u ERRAPP:%u||ERR LIM: %u||NR:%u NRLim:%u||Reboot:%u Reboot Limit:%u */
#define EID0_599   DU0|599,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! TELIT RESET. Modem CME: %u; Task: %X; Mdm CMS: %u || Socket CME: %u; Task: %X */
#define EID0_600   DU0|600,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! CONTROLLED TELIT POWER CYCLE. Modem CME: %u; Task: %X; Mdm CMS: %u || Socket CME: %u; Task: %X */
#define EID0_601   DU0|601,FLDSSTR /*! FOTA ALERT: NO RECOGNISED FOTA STRING */
#define EID0_602   DU0|602,FLDSSTR /*! FOTA ALERT: NO RECOGNISED FOTA STRING */
#define EID0_603   DU0|603,FLDSSTR /*! FOTA ALERT: NO RECOGNISED FOTA STRING */
#define EID0_604   DU0|604,FLDSSTR /*! NO RECOGNISED FOTA STRING */
#define EID0_605   DU0|605,FLDSSTR /*! VECTORING FOTA UPGRADE */
#define EID0_606   DU0|606,FLDSSTR /*! CDMA TASK NOT DEFINED */
#define EID0_607   DU0|607,FLDS1(TU32) /*! INVALID CASE: %X */
#define EID0_608   DU0|608,FLDS1(TU32) /*! INVALID CASE: %X */
#define EID0_609   DU0|609,FLDS1(TU32) /*! INVALID CASE: %X */
#define EID0_610   DU0|610,FLDSSTR /*! Data buffer NULL or 0 length  */
#define EID0_611   DU0|611,FLDSSTR /*! Index points to NULL Reference. */
#define EID0_612   DU0|612,FLDS1(TU32) /*! INVALID CASE: %X */
#define EID0_613   DU0|613,FLDS1(TU32) /*! INVALID CASE: %X */
#define EID0_614   DU0|614,FLDS1(TU32) /*! INVALID CASE: %X */
#define EID0_615   DU0|615,FLDSSTR /*! INVALID QUEUE INDEX OR BUFFER POINTER */
#define EID0_616   DU0|616,FLDSSTR /*! Rx State: BUSY */
#define EID0_617   DU0|617,FLDSSTR /*! CDMA CHOKE */
#define EID0_618   DU0|618,FLDSSTR /*! Time Not Valid */
//</ERROR_IDS>
 
#endif // SCP_DBGERRORDEFINESDU0_H

