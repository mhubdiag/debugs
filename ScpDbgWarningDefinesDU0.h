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
#ifndef SCP_DBGWARNINGDEFINESDU0_H
#define SCP_DBGWARNINGDEFINESDU0_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Warning Description ID Defines
****************************************************************************/
//<WARNING_IDS>
// Warning Debugs for Legacy User
#define WID0_0    DU0|0,FLDSSTR /*! Undefined */  
#define WID0_1    DU0|1,FLDS1(TU16) /*! BitBuffer %d: No Start value update required */
#define WID0_2    DU0|2,FLDS1(TU16) /*! BitBuffer %d: No Start value update required */
#define WID0_3    DU0|3,FLDS4(TU16,TU16,TU16,TU16) /*! Sys PwrUp F:%d L:%d, F:%d L:%d */
#define WID0_4    DU0|4,FLDSSTR /*! Sys PwrUp */
#define WID0_5    DU0|5,FLDSSTR /*! Sys WDT */
#define WID0_6    DU0|6,FLDSSTR /*! Sys BrwnOut */
#define WID0_7    DU0|7,FLDS4(TU16,TU16,TU16,TU16) /*! Sys Ext Rst F:%d L:%d, F:%d L:%d */
#define WID0_8    DU0|8,FLDSSTR /*! Sys Ext Rst */
#define WID0_9    DU0|9,FLDS4(TU16,TU16,TU16,TU16) /*! Sys Rst F:%d L:%d, F:%d L:%d */
#define WID0_10   DU0|10,FLDSSTR /*! Sys Rst */
#define WID0_11   DU0|11,FLDSSTR /*! Firmware Upgrade SUCCESSFUL */
#define WID0_12   DU0|12,FLDSSTR /*! ENGINEERING TEST VERSION */
#define WID0_13   DU0|13,FLDSSTR /*! GSM REGULATOR ON */
#define WID0_14   DU0|14,FLDS3(TU16,TU16,TS32) /*! SLOW TSK - File: %d Line: %d PC: 0x%0.8X */
#define WID0_15   DU0|15,FLDS3(TU16,TU16,TS32) /*! SLOW TSK - File: %d Line: %d PC: 0x%0.8X */
#define WID0_16   DU0|16,FLDS1(TS32) /*! Update IMEI %d */
#define WID0_17   DU0|17,FLDS1(TS32) /*! Update IMEI %d */
#define WID0_18   DU0|18,FLDS1(TS32) /*! Geoloc: GPS 3D Accuracy: %d */
#define WID0_19   DU0|19,FLDSSTR /*! Geoloc Set via Flag */
#define WID0_20   DU0|20,FLDSSTR /*! Geoloc Cleared via Flag */
#define WID0_21   DU0|21,FLDSSTR /*! Wipe All Geofences */
#define WID0_22   DU0|22,FLDS1(TS32) /*! Purging from TrackingList = %d */
#define WID0_23   DU0|23,FLDSSTR /*! Geofence Record is Corrupt! */
#define WID0_24   DU0|24,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! GSM GEOLOC SET: REF: %u PD: %u MCC: %u; MNC %u; LAC: %X, CID: %X */
#define WID0_25   DU0|25,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! GSM GEOLOC CLEAR: REF: %u PD: %u MCC: %u; MNC %u; LAC: %X, CID: %X */
#define WID0_26   DU0|26,FLDS7E(TSTR,TS32,TSTR,TSTR,TS32,TS32,TS32),FLDS3(TS32,TS32,TS32) /*! GSM GEOLOC: %s %usec %s %s REF: %u PD: %u MCC: %u; MNC %u; LAC: %X, CID: %X */
#define WID0_27   DU0|27,FLDSSTR /*! GSM BREACH DETECTED (CID / LAC) */
#define WID0_28   DU0|28,FLDSSTR /*! GSM BREACH DETECTED (MCC / MNC) */
#define WID0_29   DU0|29,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS5(TS32,TS32,TS32,TS32,TS32) /*! GSM GEOLOC BREACH: REF: %u PD: %u MCC: g%u  n%u; MNC g%u n%u; LAC: g%X n%X, CID: g%X n%X, ActTime: %u, BTime; %u */
#define WID0_30   DU0|30,FLDS1(TSTR) /*! NinaHW: RXerr: %s */
#define WID0_31   DU0|31,FLDSSTR /*! NinaHW: Needs Configuring */
#define WID0_32   DU0|32,FLDS2(TS32,TS32) /*! BURST ACC: %d ADC: %d */
#define WID0_33   DU0|33,FLDSSTR /*! AR BAD ACC SAMPLES */
#define WID0_34   DU0|34,FLDSSTR /*! AR CALIBRATION RESTARTED */
#define WID0_35   DU0|35,FLDSSTR /*! ACC Not Calibrated */
#define WID0_36   DU0|36,FLDS3(TS32,TS32,TS32) /*! SRC: %d DEST: %d resp: %d */
#define WID0_37   DU0|37,FLDSSTR /*! TRIP DEBUG DATA */
#define WID0_38   DU0|38,FLDSSTR /*! TRIP DEBUG DATA REQ ACK */
#define WID0_39   DU0|39,FLDSSTR /*! TRIP DEBUG DATA REQ QUEUED */
#define WID0_40   DU0|40,FLDSSTR /*! TRIP DEBUG DATA NACK */
#define WID0_41   DU0|41,FLDSSTR /*! TRIP DEBUG DATA REQ ACK */
#define WID0_42   DU0|42,FLDSSTR /*! TRIP DEBUG DATA REQ QUEUED */
#define WID0_43   DU0|43,FLDSSTR /*! TRIP DEBUG DATA NACK */
#define WID0_44   DU0|44,FLDSSTR /*! Harsh Braking - Exceed Limit */
#define WID0_45   DU0|45,FLDSSTR /*! Harsh Acceleration - Exceed Limit */
#define WID0_46   DU0|46,FLDS2(TS32,TS32) /*!  Odo: %d Calc: %d */
#define WID0_47   DU0|47,FLDS2(TS32,TS32) /*!  Odo: %d Calc: %d */
#define WID0_48   DU0|48,FLDS3(TS32,TS32,TS32) /*! RPM = %d, Speed = %d, Ratio = %d */
#define WID0_49   DU0|49,FLDS7E(TU8,TU8,TS32,TS32,TS32,TS32,TS32),FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Vehicle Signature Part %d to %d: %X(%d) %X(%d) %X(%d) %X(%d) %X(%d) */
#define WID0_50   DU0|50,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Vehicle Signature: %X %X %X %X %X */
#define WID0_51   DU0|51,FLDSSTR /*! SPEEDING END */
#define WID0_52   DU0|52,FLDSSTR /*! HIGH RPM END */
#define WID0_53   DU0|53,FLDSSTR /*! EXCESSIVE IDLE END */
#define WID0_54   DU0|54,FLDSSTR /*! FREE WHEELING END */
#define WID0_55   DU0|55,FLDS1(TS32) /*! DB Event type %d not active */
#define WID0_56   DU0|56,FLDS1(TSTR) /*! BLESW: %s Config Wrong */
#define WID0_57   DU0|57,FLDS1(TSTR) /*! BLESW: DTL Full -x- %sX */
#define WID0_58   DU0|58,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! BLESW: Event: FA[0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X] silent for %d s */
#define WID0_59   DU0|59,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! BLESW: Event: MA[0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X] silent for %d s */
#define WID0_60   DU0|60,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! BLESW: Event: QA[0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X] silent for %d s */
#define WID0_61   DU0|61,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! BLESW: Event: AT Dev[0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X] silent for %d s */
#define WID0_62   DU0|62,FLDS2(TSTR,TS32) /*! BLESW: Event: MA[%s] moved away (RSSI=%d) */
#define WID0_63   DU0|63,FLDS1(TS32) /*! BLESW: F[%d] -x- TL Full */
#define WID0_64   DU0|64,FLDSSTR /*! Immediate SMS Fallback */
#define WID0_65   DU0|65,FLDS1(TS32) /*! Invalid DF Page: %d */
#define WID0_66   DU0|66,FLDS1(TS32) /*! Active Tracking for %d seconds */
#define WID0_67   DU0|67,FLDSSTR /*! CFG UPDATE 3.13 */
#define WID0_68   DU0|68,FLDS1(TS32) /*! Default CFG, Page %d - Written! */
#define WID0_69   DU0|69,FLDS1(TS32) /*! Default Flash, Page %d - Written! */
#define WID0_70   DU0|70,FLDSSTR /*! DEPRECATED - NO FLASH UPDATE */
#define WID0_71   DU0|71,FLDS1(TSTR) /*! DIN1: %s */
#define WID0_72   DU0|72,FLDS1(TSTR) /*! DIN2: %s */
#define WID0_73   DU0|73,FLDSSTR /*! ERM DRIVER VALIDATED */
#define WID0_74   DU0|74,FLDS2(TS32,TS32) /*! SGP: CRC Mismatch: %d <> %d */
#define WID0_75   DU0|75,FLDS2(TS32,TS32) /*! SGP: Not a Full PDU in buffer, only %d of %d bytes */
#define WID0_76   DU0|76,FLDS2(TS32,TS32) /*! Hi-G-Tek CRC mismatch: 0x%0.4X != 0x%0.4X */
#define WID0_77   DU0|77,FLDS1(TSTR) /*! FLS: Unexpected Response: %s */
#define WID0_78   DU0|78,FLDSSTR /*! FLS: Checksum Mismatch */
#define WID0_79   DU0|79,FLDSSTR /*! FLS: Initialize Statemachine */
#define WID0_80   DU0|80,FLDSSTR /*! CARD READER: Driver NOT Validated - Same Card Swiped again */
#define WID0_81   DU0|81,FLDSSTR /*! CARD READER: Driver Validated for Dangerous Goods */
#define WID0_82   DU0|82,FLDSSTR /*! CARD READER: Driver Validated */
#define WID0_83   DU0|83,FLDSSTR /*! CARD READER: Driver NOT Validated - Invalid Class */
#define WID0_84   DU0|84,FLDS2(TS32,TS32) /*! CARD READER: Driver NOT Validated - Personal Card: Type=%d, Number=%d */
#define WID0_85   DU0|85,FLDSSTR /*! CARD READER: Driver Validated */
#define WID0_86   DU0|86,FLDS1(TS32) /*! Failed to set key - %d */
#define WID0_87   DU0|87,FLDS1(TS32) /*! Failed to decrypt - %d */
#define WID0_88   DU0|88,FLDS1(TS32) /*! Failed to sha update - %d */
#define WID0_89   DU0|89,FLDS1(TS32) /*! Failed sha final - %d */
#define WID0_90   DU0|90,FLDS1(TS32) /*! Failed to verify message - %u */
#define WID0_91   DU0|91,FLDSSTR /*! Command Message */
#define WID0_92   DU0|92,FLDSSTR /*! Read failure */
#define WID0_93   DU0|93,FLDS2(TS32,TS32) /*! Throwing away byte: %c :: %c */
#define WID0_94   DU0|94,FLDSSTR /*! Id filter disabled */
#define WID0_95   DU0|95,FLDSSTR /*! Id filter enabled */
#define WID0_96   DU0|96,FLDS1(TS32) /*! Filter setting %d */
#define WID0_97   DU0|97,FLDSSTR /*! No key received */
#define WID0_98   DU0|98,FLDSSTR /*! Connected */
#define WID0_99   DU0|99,FLDSSTR /*! Resetting unit in 10 seconds */
#define WID0_100   DU0|100,FLDSSTR /*! Connect failed - User does not exist */
#define WID0_101   DU0|101,FLDS1(TS32) /*!  Frequency Filter enabled %d */
#define WID0_102   DU0|102,FLDS1(TS32) /*!  Frequency Filter disabled %d */
#define WID0_103   DU0|103,FLDS1(TSTR) /*! SOCKET STATE CHANGED: %s */
#define WID0_104   DU0|104,FLDSSTR /*! Trying to open socket */
#define WID0_105   DU0|105,FLDSSTR /*! Invalid can message */
#define WID0_106   DU0|106,FLDS1(TS32) /*! Previous state - %u */
#define WID0_107   DU0|107,FLDSSTR /*! Sending exit */
#define WID0_108   DU0|108,FLDSSTR /*! Closing Aux socket */
#define WID0_109   DU0|109,FLDSSTR /*! Trying to reopen socket */
#define WID0_110   DU0|110,FLDS1(TS32) /*! DS: Requested Page %d not a Meta Record */
#define WID0_111   DU0|111,FLDS1(TS32) /*! DS: Update Page %d out of range */
#define WID0_112   DU0|112,FLDS1(TS32) /*! DS: Update Page %d out of range */
#define WID0_113   DU0|113,FLDSSTR /*! DS: Timeout waiting for response from MProfiler */
#define WID0_114   DU0|114,FLDSSTR /*! Invalid Fleet */
#define WID0_115   DU0|115,FLDSSTR /*! Invalid Class */
#define WID0_116   DU0|116,FLDSSTR /*! Invalid Driver ID */
#define WID0_117   DU0|117,FLDSSTR /*! Invalid Custm. ID */
#define WID0_118   DU0|118,FLDSSTR /*! Invalid IButton. IButton is not a valid Scope button */
#define WID0_119   DU0|119,FLDSSTR /*! Invalid Drive Time */
#define WID0_120   DU0|120,FLDSSTR /*! Invalid Fleet */
#define WID0_121   DU0|121,FLDSSTR /*! Invalid Class */
#define WID0_122   DU0|122,FLDSSTR /*! Invalid Driver ID */
#define WID0_123   DU0|123,FLDSSTR /*! Invalid Custm. ID */
#define WID0_124   DU0|124,FLDSSTR /*! Invalid IButton. IButton is not a valid Scope button */
#define WID0_125   DU0|125,FLDSSTR /*! Invalid Drive Time */
#define WID0_126   DU0|126,FLDSSTR /*! Invalid Fleet */
#define WID0_127   DU0|127,FLDSSTR /*! Invalid Class */
#define WID0_128   DU0|128,FLDSSTR /*! Invalid Driver ID */
#define WID0_129   DU0|129,FLDSSTR /*! Invalid Custm. ID */
#define WID0_130   DU0|130,FLDSSTR /*! Invalid IButton. IButton is not a valid Scope button */
#define WID0_131   DU0|131,FLDSSTR /*! Invalid Drive Time */
#define WID0_132   DU0|132,FLDS1(TS32) /*! Blacklisted Key Used: %u */
#define WID0_133   DU0|133,FLDSSTR /*! Invalid Driver Key */
#define WID0_134   DU0|134,FLDSSTR /*! Master Status: No Driver */
#define WID0_135   DU0|135,FLDSSTR /*! Master: No Driver and Fleet */
#define WID0_136   DU0|136,FLDSSTR /*! Master: No Driver, Fleet, Customer ID */
#define WID0_137   DU0|137,FLDSSTR /*! Current time outside of allowed driving hours */
#define WID0_138   DU0|138,FLDS1(TS32) /*! Blacklisted Key Used: %u */
#define WID0_139   DU0|139,FLDSSTR /*! Vehicle Idle Immobilisation */
#define WID0_140   DU0|140,FLDSSTR /*! Global Vehicle Disabled */
#define WID0_141   DU0|141,FLDSSTR /*! Vehicle Disablement Saved */
#define WID0_142   DU0|142,FLDS1(TS32) /*! CS: %X */
#define WID0_143   DU0|143,FLDSSTR /*! Key Verify Fail */
#define WID0_144   DU0|144,FLDSSTR /*! Key Julian Success */
#define WID0_145   DU0|145,FLDSSTR /*! Key Julian Fail */
#define WID0_146   DU0|146,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! DDetails: %X:%X:%X:%X:%X:%X:%X:%X ; %X:%X:%X:%X:%X:%X:%X:%X */
#define WID0_147   DU0|147,FLDSSTR /*! Invalid Fleet */
#define WID0_148   DU0|148,FLDSSTR /*! Invalid Class */
#define WID0_149   DU0|149,FLDSSTR /*! Invalid Driver ID */
#define WID0_150   DU0|150,FLDSSTR /*! Invalid Custm. ID */
#define WID0_151   DU0|151,FLDSSTR /*! Invalid IButton. IButton is not a valid Scope button */
#define WID0_152   DU0|152,FLDSSTR /*! Invalid Drive Time */
#define WID0_153   DU0|153,FLDSSTR /*! Verify MAC */
#define WID0_154   DU0|154,FLDS1(TS32) /*! evt match: %u */
#define WID0_155   DU0|155,FLDS1(TS32) /*! Trigger timer FS - %u */
#define WID0_156   DU0|156,FLDS1(TS32) /*! Trigger timer FF - %u */
#define WID0_157   DU0|157,FLDS1(TS32) /*! Trigger timer FFi - %u */
#define WID0_158   DU0|158,FLDS1(TS32) /*! Trigger timer DS - %u */
#define WID0_159   DU0|159,FLDS1(TS32) /*! Trigger timer DF - %u */
#define WID0_160   DU0|160,FLDSSTR /*! FW Encrypted */
#define WID0_161   DU0|161,FLDS1(TS32) /*! Page Written: %d */
#define WID0_162   DU0|162,FLDSSTR /*! Starting FW Upgrade */
#define WID0_163   DU0|163,FLDS3(TS32,TS32,TS32) /*! MAF: %u, AER: %u, Stft: %u */
#define WID0_164   DU0|164,FLDS1(TS32) /*! Fuel Trim %u ml */
#define WID0_165   DU0|165,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! FM: TT:%u TD:%u TFU:%uml FL:%u%%; FLE:%uml */
#define WID0_166   DU0|166,FLDS4(TS32,TS32,TS32,TS32) /*! GPS CNO: %d (%d) dBHz N:%d (%d) */
#define WID0_167   DU0|167,FLDS4(TS32,TS32,TS32,TS32) /*! GPS: EPH BAD VIS %d EPH %d ALM %d GPSNAV: 0x%0.2X */
#define WID0_168   DU0|168,FLDS4(TS32,TS32,TS32,TS32) /*! GPS: EPH LOW VIS %d EPH: %d ALM %d GPSNAV: 0x%0.2X */
#define WID0_169   DU0|169,FLDS4(TS32,TS32,TS32,TS32) /*! GPS SVSI: %d EPH:%d ALM:%d GPSNAV: 0x%0.2X */
#define WID0_170   DU0|170,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! AID INI Position: %d %d %d,FLGS 0x%0.4X, TOW: %u:%u */
#define WID0_171   DU0|171,FLDS1(TS32) /*! ALM B-Idx:%d */
#define WID0_172   DU0|172,FLDS1(TS32) /*! EPH B-Idx:%d */
#define WID0_173   DU0|173,FLDS1(TS32) /*! GPS RTC UNCAL. ANT: %d */
#define WID0_174   DU0|174,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! GPS Jamming: %d.%02d AGC:%d (%d) Noise:%d */
#define WID0_175   DU0|175,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! GPS HW2: %d:%d %d:%d CFG: %d L:0x%0.8X P: 0x%0.8X */
#define WID0_176   DU0|176,FLDS2(TS32,TS32) /*! GPS TX: 0x%0.2X 0x%0.2X */
#define WID0_177   DU0|177,FLDSSTR /*! GPS FixNOW OFF */
#define WID0_178   DU0|178,FLDSSTR /*! GPS: RXM SVSI */
#define WID0_179   DU0|179,FLDSSTR /*! GPS: OFF */
#define WID0_180   DU0|180,FLDSSTR /*! GPS: ON */
#define WID0_181   DU0|181,FLDSSTR /*! GPS INIT */
#define WID0_182   DU0|182,FLDSSTR /*! GPS POWER ON */
#define WID0_183   DU0|183,FLDSSTR /*! GPS: Ext. Ant. */
#define WID0_184   DU0|184,FLDSSTR /*! GPS: RTC PWR PENDING */
#define WID0_185   DU0|185,FLDSSTR /*! GPS: RTC PWR TIMEOUT */
#define WID0_186   DU0|186,FLDS2(TS32,TS32) /*! GPS OFFLINE - PWR MODE: 0x%0.2X PWR: %d  */
#define WID0_187   DU0|187,FLDS2(TS32,TS32) /*! GPS: AID Len:%d, Offset:0x%0.4X */
#define WID0_188   DU0|188,FLDSSTR /*! GPS: AID FROM BACKUP */
#define WID0_189   DU0|189,FLDSSTR /*! GPS: AID SERVER REQ */
#define WID0_190   DU0|190,FLDSSTR /*! GPS AID REQ ACK */
#define WID0_191   DU0|191,FLDSSTR /*! GPS AID REQ QUEUED */
#define WID0_192   DU0|192,FLDSSTR /*! GPS AID REQ NACK */
#define WID0_193   DU0|193,FLDSSTR /*! GPS AID REQ SERVER */
#define WID0_194   DU0|194,FLDSSTR /*! GPS AID REQ ACK */
#define WID0_195   DU0|195,FLDSSTR /*! GPS AID REQ QUEUED */
#define WID0_196   DU0|196,FLDSSTR /*! GPS AID REQ NACK */
#define WID0_197   DU0|197,FLDSSTR /*! GPS: AID BACKUP */
#define WID0_198   DU0|198,FLDSSTR /*! GPS FULLAID 2 Module */
#define WID0_199   DU0|199,FLDSSTR /*! GPS: INI AID ONLY */
#define WID0_200   DU0|200,FLDSSTR /*! GPS HOT START */
#define WID0_201   DU0|201,FLDSSTR /*! GPS: AID Valid Pos */
#define WID0_202   DU0|202,FLDS3(TS32,TS32,TS32) /*! GPS: %d, %d Spd: %d */
#define WID0_203   DU0|203,FLDS4(TS32,TS32,TS32,TS32) /*! GPS Radius: %dmm, GForce: %d (%d), %d */
#define WID0_204   DU0|204,FLDSSTR /*! Wait state exiting. */
#define WID0_205   DU0|205,FLDSSTR /*! GPS IN FULL POWER MODE */
#define WID0_206   DU0|206,FLDS2(TS32,TS32) /*! GPS UBX: 0x%0.2X 0x%0.2X */
#define WID0_207   DU0|207,FLDS1(TS32) /*! Filter Configure %u */
#define WID0_208   DU0|208,FLDS1(TSTR) /*! Filter Compare: %s */
#define WID0_209   DU0|209,FLDS1(TS32) /*! IPC: Unknown Command: %d */
#define WID0_210   DU0|210,FLDSSTR /*! IPC: Slave TX Buffer Overrun - Flush */
#define WID0_211   DU0|211,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! IPC: Msg CRC error, Msg Len: %d, Src: %d, Dest: %d, id: %d, Buf:%d:%d */
#define WID0_212   DU0|212,FLDSSTR /*! IPC: Msg Larger than RX Buffer */
#define WID0_213   DU0|213,FLDSSTR /*! IPC: RX Buf Overrun */
#define WID0_214   DU0|214,FLDSSTR /*! Tests Active */
#define WID0_215   DU0|215,FLDS1(TSTR) /*! FILTER %s */
#define WID0_216   DU0|216,FLDSSTR /*! Set 29 bit filters */
#define WID0_217   DU0|217,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Best Guess Position: Distance: %u:%u,  Time %u:%u, Trip:%X, Status: %X */
#define WID0_218   DU0|218,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Best Guess FALSE: Distance: %u:%u,  Time %u:%u, Trip:%X, Status: %X */
#define WID0_219   DU0|219,FLDS2(TS32,TS32) /*! BAD Check: 0x%0.4X: Calc 0x%0.4X */
#define WID0_220   DU0|220,FLDSSTR /*! Requesting TELIT POSITION for Seeding Only */
#define WID0_221   DU0|221,FLDSSTR /*! Requesting TELIT POSITION for BEST GUESS update */
#define WID0_222   DU0|222,FLDSSTR /*! Requesting TELIT POSITION for Seeding and Best Guess */
#define WID0_223   DU0|223,FLDSSTR /*! Cell Set changed  */
#define WID0_224   DU0|224,FLDS4(TS32,TS32,TS32,TS32) /*! Cell ID Found: %X, %X ; %X, %X */
#define WID0_225   DU0|225,FLDSSTR /*! GPS AID REQ - SERVER */
#define WID0_226   DU0|226,FLDSSTR /*! Periodic GPS AID Request - MProfiler */
#define WID0_227   DU0|227,FLDSSTR /*! MP AID REQ - DISABLED */
#define WID0_228   DU0|228,FLDSSTR /*! GPS AID Request - Queue */
#define WID0_229   DU0|229,FLDSSTR /*! GPS AID Request MP Time-Out - Re-Queue */
#define WID0_230   DU0|230,FLDSSTR /*! GPS AID Req Ack Time-Out Re-Queue */
#define WID0_231   DU0|231,FLDSSTR /*! GPS AID Requested - Local */
#define WID0_232   DU0|232,FLDSSTR /*! GPS AID Requested - Local */
#define WID0_233   DU0|233,FLDSSTR /*! GPS AID Request - MProfiler */
#define WID0_234   DU0|234,FLDSSTR /*! GPS AID Request EPH LOW - MProfiler */
#define WID0_235   DU0|235,FLDSSTR /*! GPS AID Request - Queue */
#define WID0_236   DU0|236,FLDSSTR /*! GPS AID Request MP Time-Out - Re-Queue */
#define WID0_237   DU0|237,FLDSSTR /*! GPS AID Req Ack Time-Out Re-Queue */
#define WID0_238   DU0|238,FLDS7E(TSTR,TS32,TS32,TS32,TS32,TS32,TS32),FLDS3(TS32,TS32,TS32) /*! %s SRC: %u DST: %u MOD: %u; Data: 0x%0.2X0x%0.2X0x%0.2X || Size: %d Line: %u: LiLine: %u */
#define WID0_239   DU0|239,FLDS7E(TSTR,TS32,TS32,TS32,TS32,TS32,TS32),FLDS3(TS32,TS32,TS32) /*! %s SRC: %u DST: %u MOD: %u; Data: 0x%0.2X0x%0.2X0x%0.2X || Size: %d Line: %u: LiLine: %u */
#define WID0_240   DU0|240,FLDS2(TS32,TS32) /*! PDA DRIVER VALIDATE: %X, %X */
#define WID0_241   DU0|241,FLDSSTR /*! PDA DRIVER VALIDATION */
#define WID0_242   DU0|242,FLDSSTR /*! PDA DRIVER VALIDATION */
#define WID0_243   DU0|243,FLDS4(TS32,TS32,TS32,TS32) /*! Supported PIDs: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_244   DU0|244,FLDS1(TS32) /*! MIL: 0x%0.2X */
#define WID0_245   DU0|245,FLDS1(TS32) /*! Engine Load: %d */
#define WID0_246   DU0|246,FLDS1(TS32) /*! CLNT: %d */
#define WID0_247   DU0|247,FLDS1(TS32) /*! RPM: %d */
#define WID0_248   DU0|248,FLDS1(TS32) /*! SPEED: %d */
#define WID0_249   DU0|249,FLDS1(TS32) /*! AIR: %d */
#define WID0_250   DU0|250,FLDS1(TS32) /*! MAF: %d */
#define WID0_251   DU0|251,FLDS1(TS32) /*! Throttle Pos: %d */
#define WID0_252   DU0|252,FLDS1(TS32) /*! TIME Start: %d */
#define WID0_253   DU0|253,FLDS1(TS32) /*! Fuel Level: %d */
#define WID0_254   DU0|254,FLDS1(TS32) /*! MIL DIST Travel: %d */
#define WID0_255   DU0|255,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! PID: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_256   DU0|256,FLDSSTR /*! ISO9141 CS Error */
#define WID0_257   DU0|257,FLDSSTR /*! OUTPUT STATE FLASH UPDATE */
#define WID0_258   DU0|258,FLDSSTR /*! SEND ACK */
#define WID0_259   DU0|259,FLDSSTR /*! SEND NACK */
#define WID0_260   DU0|260,FLDSSTR /*! Garmin Message Detected */
#define WID0_261   DU0|261,FLDSSTR /*! Corrupt Message Detected */
#define WID0_262   DU0|262,FLDS1(TS32) /*! BA Decode Response: %d */
#define WID0_263   DU0|263,FLDSSTR /*! PDA Not Connected. Message Discarded */
#define WID0_264   DU0|264,FLDSSTR /*! PDA Not Connected. Message Discarded */
#define WID0_265   DU0|265,FLDS1(TS32) /*! PDA TEST #:0x%0.2X */
#define WID0_266   DU0|266,FLDSSTR /*! TST: SEND BA MDT MESSAGE */
#define WID0_267   DU0|267,FLDSSTR /*! TST: SEND BA MDT MESSAGE */
#define WID0_268   DU0|268,FLDSSTR /*! TST: FAKE PDA CONNECTED */
#define WID0_269   DU0|269,FLDSSTR /*! PWR: 120MHz */
#define WID0_270   DU0|270,FLDSSTR /*! PWR: 24MHz */
#define WID0_271   DU0|271,FLDSSTR /*! PWR: 12MHz */
#define WID0_272   DU0|272,FLDSSTR /*! PWR: 3MHz */
#define WID0_273   DU0|273,FLDSSTR /*! PWR: 72MHz */
#define WID0_274   DU0|274,FLDSSTR /*! PWR: 120MHz */
#define WID0_275   DU0|275,FLDSSTR /*! PWR: RESET INTO IDLE */
#define WID0_276   DU0|276,FLDSSTR /*! PWR: RESET INTO SLEEPSCAN */
#define WID0_277   DU0|277,FLDS1(TS32) /*! PWR: GPS USB PWR %d */
#define WID0_278   DU0|278,FLDS1(TS32) /*! PWR: KA %d */
#define WID0_279   DU0|279,FLDSSTR /*! GSM REGULATOR ON */
#define WID0_280   DU0|280,FLDSSTR /*! GSM REGULATOR ON */
#define WID0_281   DU0|281,FLDSSTR /*! PWR: BATT.CHRG. OFF  */
#define WID0_282   DU0|282,FLDSSTR /*! PWR: BATT.CHRG. OFF: FULL */
#define WID0_283   DU0|283,FLDSSTR /*! PWR: BATT.CHRG. ON: LOW */
#define WID0_284   DU0|284,FLDS4(TS32,TS32,TS32,TS32) /*! PWR: BAT: %X TO: %d DC: %d ST: %d */
#define WID0_285   DU0|285,FLDS3(TS32,TS32,TS32) /*! PWR: BAT: VPC: %d VSC: %d VCT: %d */
#define WID0_286   DU0|286,FLDS3(TS32,TS32,TS32) /*! PWR: BAT: TPQ: %d TR: %d TC: %d */
#define WID0_287   DU0|287,FLDSSTR /*! PWR: BATT.CHRG. RESET OFF  */
#define WID0_288   DU0|288,FLDSSTR /*! INITIALISE MODEM */
#define WID0_289   DU0|289,FLDS2(TS32,TS32) /*! PWR: 0x%0.2X Time:%d */
#define WID0_290   DU0|290,FLDS2(TS32,TS32) /*! PWR: 0x%0.2X Time:%d */
#define WID0_291   DU0|291,FLDSSTR /*! Pwr: No Shutdown - Ext Power */
#define WID0_292   DU0|292,FLDSSTR /*! PWR GPS: OFF */
#define WID0_293   DU0|293,FLDS1(TS32) /*! SSCGR: 0x%0.8X */
#define WID0_294   DU0|294,FLDS1(TS32) /*! ODO UPDATE: %dm */
#define WID0_295   DU0|295,FLDS2(TS32,TS32) /*! ODO NO UPDATE: %d(%d)m */
#define WID0_296   DU0|296,FLDSSTR /*! Message NOT from Approved SIM. Message Discarded */
#define WID0_297   DU0|297,FLDS2(TSTR,TSTR) /*! {%s} {%s} */
#define WID0_298   DU0|298,FLDSSTR /*! VEHICLE DISABLE/ENABLE CRITERIA CORRECT */
#define WID0_299   DU0|299,FLDSSTR /*! Vehicle DISABLED  */
#define WID0_300   DU0|300,FLDSSTR /*! Vehicle ENABLED  */
#define WID0_301   DU0|301,FLDSSTR /*! Message NOT from Approved SIM. Message Discarded */
#define WID0_302   DU0|302,FLDSSTR /*! Txt: Hard modem reset */
#define WID0_303   DU0|303,FLDSSTR /*! PROTOCOL FORCED: 11bit/500kBit */
#define WID0_304   DU0|304,FLDSSTR /*! PROTOCOL FORCED: 29bit/500kBit */
#define WID0_305   DU0|305,FLDSSTR /*! PROTOCOL FORCED: K-Line Fast */
#define WID0_306   DU0|306,FLDSSTR /*! PROTOCOL FORCED: TP2 Inst. */
#define WID0_307   DU0|307,FLDSSTR /*! PROTOCOL FORCED: TP2 ENG. */
#define WID0_308   DU0|308,FLDSSTR /*! PROT: J1939/250/P */
#define WID0_309   DU0|309,FLDSSTR /*! PROT: J1939/250/A */
#define WID0_310   DU0|310,FLDSSTR /*! PROT: J1939/500/P */
#define WID0_311   DU0|311,FLDSSTR /*! PROT: J1939/500/A */
#define WID0_312   DU0|312,FLDSSTR /*! PROTOCOL FORCED: 11bit/500kBit */
#define WID0_313   DU0|313,FLDSSTR /*! PROTOCOL FORCED: 11bit/500kBit */
#define WID0_314   DU0|314,FLDS1(TS32) /*! ParSetID: 0x%0.8X */
#define WID0_315   DU0|315,FLDS1(TS32) /*! EOBD Param Cnt:%u */
#define WID0_316   DU0|316,FLDS4(TS32,TSTR,TSTR,TSTR) /*! Added Filter: 0x%0.8X, RawResp:%s, UnPd:%s, MxMd:%s */
#define WID0_317   DU0|317,FLDS1(TS32) /*! EOBD CMD Cnt: %u */
#define WID0_318   DU0|318,FLDSSTR /*! Requst EOBD Aid */
#define WID0_319   DU0|319,FLDS2(TS32,TS32) /*! Trip Attmpt: %u, Dly Attmpt: %u */
#define WID0_320   DU0|320,FLDS1(TS32) /*! Unplug Stored Protocol Cleared:0x%0.8X */
#define WID0_321   DU0|321,FLDSSTR /*! TP 2.0 Timeout */
#define WID0_322   DU0|322,FLDSSTR /*! Closing Channel */
#define WID0_323   DU0|323,FLDS1(TS32) /*! Filter present: 0x%0.8X */
#define WID0_324   DU0|324,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Filter Added: Rx: 0x%0.8X Tx: 0x%0.8X, Raw: %u, UPd: %u, MM: %u */
#define WID0_325   DU0|325,FLDS1(TS32) /*! DTC SCAN REQUEST: %u mseconds */
#define WID0_326   DU0|326,FLDS1(TS32) /*!  VNI APP TEST: %u */
#define WID0_327   DU0|327,FLDSSTR /*! PROT DETECT OFF */
#define WID0_328   DU0|328,FLDS1(TS32) /*! VNI Standoff Time Set: %u */
#define WID0_329   DU0|329,FLDSSTR /*! PHY Inject msg */
#define WID0_330   DU0|330,FLDS1(TSTR) /*! LEAVE FILTERS %s */
#define WID0_331   DU0|331,FLDS5(TS32,TS32,TSTR,TSTR,TSTR) /*! TST: Add Filter: 0x%0.8X : 0x%0.8X, RawResp:%s, UnPd:%s, MxMd:%s */
#define WID0_332   DU0|332,FLDSSTR /*! CLEARED FILTERS */
#define WID0_333   DU0|333,FLDSSTR /*! KWP2000 GetMessage TST */
#define WID0_334   DU0|334,FLDSSTR /*! UDS GetMessage TST */
#define WID0_335   DU0|335,FLDS2(TS32,TS32) /*! Result: %d.%u */
#define WID0_336   DU0|336,FLDS2(TS32,TS32) /*! Result: %d.%u */
#define WID0_337   DU0|337,FLDS1(TS32) /*! Protocol and Channel Force Active. PST: 0x%0.4X */
#define WID0_338   DU0|338,FLDS1(TS32) /*! PD: Active. PST: 0x%0.4X */
#define WID0_339   DU0|339,FLDS1(TS32) /*! Force Active PST:0x%0.4X */
#define WID0_340   DU0|340,FLDS1(TS32) /*! PD:ChanActv PST: 0x%0.4X */
#define WID0_341   DU0|341,FLDSSTR /*! PD Setup Timeout */
#define WID0_342   DU0|342,FLDSSTR /*! Phy Error Detected */
#define WID0_343   DU0|343,FLDSSTR /*! 250kBaud disabled. */
#define WID0_344   DU0|344,FLDSSTR /*! K-Line SLOW INIT not available. Skipping */
#define WID0_345   DU0|345,FLDSSTR /*! K-Line disabled */
#define WID0_346   DU0|346,FLDSSTR /*! TP2.0 disabled */
#define WID0_347   DU0|347,FLDSSTR /*! Iso15765 Disabled */
#define WID0_348   DU0|348,FLDSSTR /*! FMS/J1939 not enabled. Skipping */
#define WID0_349   DU0|349,FLDS1(TS32) /*! ISO9141 SRC: 0x%0.2X */
#define WID0_350   DU0|350,FLDS2(TS32,TS32) /*! ISO9141 CS: 0x%0.2X 0x%0.2X */
#define WID0_351   DU0|351,FLDS2(TS32,TS32) /*! ISO9141 KW1: 0x%0.2X KW2: 0x%0.2X */
#define WID0_352   DU0|352,FLDS2(TS32,TS32) /*! ISO OTHER KW1: 0x%0.2X KW2: 0x%0.2X */
#define WID0_353   DU0|353,FLDS2(TS32,TS32) /*! Protocol Timeout: %d(%d) */
#define WID0_354   DU0|354,FLDS1(TSTR) /*! Autobusoff %s */
#define WID0_355   DU0|355,FLDS1(TSTR) /*! CAN Automatic Retries %s */
#define WID0_356   DU0|356,FLDS1(TS32) /*! CAN MSG LENGTH: %d */
#define WID0_357   DU0|357,FLDSSTR /*! DLCallback Changed */
#define WID0_358   DU0|358,FLDSSTR /*! ISO15765 INIT */
#define WID0_359   DU0|359,FLDSSTR /*! ISO15765 INIT */
#define WID0_360   DU0|360,FLDSSTR /*! ISO15765 OPEN */
#define WID0_361   DU0|361,FLDSSTR /*! ISO15765 CLOSE */
#define WID0_362   DU0|362,FLDSSTR /*! SLCANIPC INIT */
#define WID0_363   DU0|363,FLDSSTR /*! SLCANIPC OPEN */
#define WID0_364   DU0|364,FLDSSTR /*! SLCANIPC CLOSE */
#define WID0_365   DU0|365,FLDS1(TS32) /*! Command 0x%0.4X */
#define WID0_366   DU0|366,FLDS1(TS32) /*! Command 0x%0.4X not allowed; DATA LINK not initialised */
#define WID0_367   DU0|367,FLDS1(TS32) /*! Command 0x%0.4X not allowed; PHY not initialised */
#define WID0_368   DU0|368,FLDSSTR /*! Initiate PHY Iso15765 */
#define WID0_369   DU0|369,FLDSSTR /*! Initiate PHY Iso9141 */
#define WID0_370   DU0|370,FLDSSTR /*! Initiate PHY Iso9141 */
#define WID0_371   DU0|371,FLDSSTR /*! Initiate DATA LINK Iso15765 */
#define WID0_372   DU0|372,FLDSSTR /*! Initiate DATA LINK Iso9141 */
#define WID0_373   DU0|373,FLDSSTR /*! Initiate DATA LINK Iso9141 */
#define WID0_374   DU0|374,FLDSSTR /*! PHY OPEN */
#define WID0_375   DU0|375,FLDSSTR /*! PHY CLOSE */
#define WID0_376   DU0|376,FLDS1(TS32) /*! PHY IOCTL:  %u datalength */
#define WID0_377   DU0|377,FLDS1(TS32) /*! Invalid VNI 81 command: 0x%0.4X */
#define WID0_378   DU0|378,FLDSSTR /*! FlushBuff0 */
#define WID0_379   DU0|379,FLDSSTR /*! FlushBuff1 */
#define WID0_380   DU0|380,FLDSSTR /*! FlushBuff2 */
#define WID0_381   DU0|381,FLDS1(TS32) /*! WrtPge: %u */
#define WID0_382   DU0|382,FLDS1(TS32) /*! CAN CAP FIN: %u */
#define WID0_383   DU0|383,FLDSSTR /*! Erasing CAN Capture Pages. */
#define WID0_384   DU0|384,FLDS2(TS32,TS32) /*! CurPge: %u,Pge Cnt: %u */
#define WID0_385   DU0|385,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Ste: %u, Idx: %u Pge: %u rpp: %u bpgs:%u */
#define WID0_386   DU0|386,FLDSSTR /*! Req Start */
#define WID0_387   DU0|387,FLDSSTR /*! Req End */
#define WID0_388   DU0|388,FLDS2(TS32,TS32) /*! UPLOAD RDY: SP:%u EP:%u */
#define WID0_389   DU0|389,FLDS2(TS32,TS32) /*! VNI CAP UPLOAD %u %u */
#define WID0_390   DU0|390,FLDS2(TS32,TS32) /*! CDC FTP Upld: %u, %u */
#define WID0_391   DU0|391,FLDS1(TS32) /*! Clr Filt:%u */
#define WID0_392   DU0|392,FLDSSTR /*! Clr Filt */
#define WID0_393   DU0|393,FLDS1(TS32) /*! Fil pres:%u */
#define WID0_394   DU0|394,FLDS2(TS32,TS32) /*! FiltModRx 0x%0.8X Flt 0x%0.8X */
#define WID0_395   DU0|395,FLDS4(TS32,TS32,TS32,TS32) /*! GNRC DC Start: TCC%u #%u: T%u JN%u */
#define WID0_396   DU0|396,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! JL UPL: 20%02u/%u/%u to 20%02u/%u/%u */
#define WID0_397   DU0|397,FLDSSTR /*! Daily upload enabled */
#define WID0_398   DU0|398,FLDS3(TS32,TS32,TS32) /*! CpBuff: %u \tFshBuf0: %u \tFlashBuffer0: %u */
#define WID0_399   DU0|399,FLDS1(TS32) /*! CRC: 0x%0.8X */
#define WID0_400   DU0|400,FLDS2(TS32,TS32) /*! TABLE %u: 0x%0.8X */
#define WID0_401   DU0|401,FLDS1(TS32) /*! Invld Tst:0x%0.2X */
#define WID0_402   DU0|402,FLDSSTR /*! EOBD: VIN read */
#define WID0_403   DU0|403,FLDSSTR /*! Partial VIN read */
#define WID0_404   DU0|404,FLDS1(TSTR) /*! Ecu Serial: %s */
#define WID0_405   DU0|405,FLDS1(TSTR) /*! ODX File: %s */
#define WID0_406   DU0|406,FLDSSTR /*! VIN Hash Calculated */
#define WID0_407   DU0|407,FLDS1(TSTR) /*! New VIN detected: %s */
#define WID0_408   DU0|408,FLDS1(TSTR) /*! VIN Incomplete: %s */
#define WID0_409   DU0|409,FLDS1(TSTR) /*! VIN Current: %s */
#define WID0_410   DU0|410,FLDS2(TSTR,TS32) /*! Fake Vin Set: %s; %u */
#define WID0_411   DU0|411,FLDS2(TSTR,TS32) /*! Fake Vin Set: %s; %u */
#define WID0_412   DU0|412,FLDS4(TSTR,TS32,TS32,TS32) /*! VIN Status: %s; 0x%0.2X, Hash: 0x%0.8X0x%0.8X */
#define WID0_413   DU0|413,FLDS1(TS32) /*! Erasing EOBD Pages. Count: %u */
#define WID0_414   DU0|414,FLDSSTR /*! DP not initialised */
#define WID0_415   DU0|415,FLDSSTR /*! VIN current using Extended Command Set */
#define WID0_416   DU0|416,FLDSSTR /*! Using MobileEye Command Set */
#define WID0_417   DU0|417,FLDSSTR /*! DP not initialised. */
#define WID0_418   DU0|418,FLDSSTR /*! Invalid coms Key, DP not initialised or no buffer available */
#define WID0_419   DU0|419,FLDS4(TS32,TS32,TS32,TS32) /*! TgtArray: 0x%0.8X, ArraySize: %u [0x%0.8X], tgtarr: %u */
#define WID0_420   DU0|420,FLDS3(TS32,TS32,TS32) /*! ID Hash: 0x%0.8X0x%0.8X ; Selection Mask: 0x%0.8X */
#define WID0_421   DU0|421,FLDS2(TS32,TS32) /*! SrcLength: %u, Target Length: %u */
#define WID0_422   DU0|422,FLDS3(TS32,TS32,TS32) /*! ID Hash: 0x%0.8X0x%0.8X ; Selection Mask: 0x%0.8X */
#define WID0_423   DU0|423,FLDS3(TS32,TS32,TS32) /*! Vin Status: 0x%0.2X, Hash:0x%0.8X0x%0.8X */
#define WID0_424   DU0|424,FLDS1(TS32) /*! MAC KEY LENGTH: %u */
#define WID0_425   DU0|425,FLDSSTR /*! HASH */
#define WID0_426   DU0|426,FLDSSTR /*! VIN Hash */
#define WID0_427   DU0|427,FLDS2(TS32,TS32) /*! DESERTEST: ID: %X08%X08 */
#define WID0_428   DU0|428,FLDS1(TS32) /*! Len %u */
#define WID0_429   DU0|429,FLDS1(TS32) /*! Len %u */
#define WID0_430   DU0|430,FLDS1(TS32) /*! Test Odo %u */
#define WID0_431   DU0|431,FLDSSTR /*! Requesting EOBD Update */
#define WID0_432   DU0|432,FLDS2(TS32,TS32) /*! SrcLength: %u, ECU ID: 0x%0.8X */
#define WID0_433   DU0|433,FLDSSTR /*! Max Dtc's. No space */
#define WID0_434   DU0|434,FLDS7(TS32,TS32,TSTR,TSTR,TS32,TS32,TS32) /*! Id: 0x%0.8X SM: %u; Active: %s, Confirmed: %s; MaxAge:%u, TLS: %u; CT: %u */
#define WID0_435   DU0|435,FLDS1(TS32) /*! DTC Found: 0x%0.4X */
#define WID0_436   DU0|436,FLDS1(TS32) /*! DTC: 0x%0.4X */
#define WID0_437   DU0|437,FLDS2(TS32,TS32) /*! CAN Init %u : %u */
#define WID0_438   DU0|438,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Value: 0x%0.2X, Lrv: 0x%0.2X, Mask: 0x%0.2X, Invalid: 0x%0.2X, MaskBitCount: %d,  Justification: %d */
#define WID0_439   DU0|439,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Value: %d, Lrv: %d, Adjusted Val: %d, Adjusted Min: %d, Adjusted Max: %d,  Adjusted PVal: %d */
#define WID0_440   DU0|440,FLDS4(TS32,TS32,TS32,TS32) /*! Value: %d, CfgDelta: %d, Lrv: %d, actual: %d */
#define WID0_441   DU0|441,FLDSSTR /*! CLR PGN */
#define WID0_442   DU0|442,FLDS1(TS32) /*! NEW PGN: 0x%0.2X */
#define WID0_443   DU0|443,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! PGN:0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_444   DU0|444,FLDS2(TS32,TSTR) /*! MAF %umg/s; MAF Src: %s  */
#define WID0_445   DU0|445,FLDS1(TS32) /*! MAF IF: %uml/h */
#define WID0_446   DU0|446,FLDS1(TS32) /*! Eng Load%u percent */
#define WID0_447   DU0|447,FLDS1(TS32) /*! Read MAF not used: %u */
#define WID0_448   DU0|448,FLDS2(TS32,TS32) /*! airmass: %u AbsEngLoad: %u */
#define WID0_449   DU0|449,FLDSSTR /*! SETTING UP MONITOR */
#define WID0_450   DU0|450,FLDS1(TS32) /*! KEY BYTE 1: 0x%0.2X */
#define WID0_451   DU0|451,FLDS1(TS32) /*! KEY BYTE 2: 0x%0.2X */
#define WID0_452   DU0|452,FLDS1(TS32) /*! KEY BYTE 2 RESP: 0x%0.2X */
#define WID0_453   DU0|453,FLDS1(TS32) /*! KEY BYTE 2 RESP: 0x%0.2X */
#define WID0_454   DU0|454,FLDS1(TS32) /*! KEY BYTE 2: 0x%0.2X */
#define WID0_455   DU0|455,FLDS1(TS32) /*! KEY BYTE 2: 0x%0.2X */
#define WID0_456   DU0|456,FLDS1(TS32) /*! KEY F7: 0x%0.2X */
#define WID0_457   DU0|457,FLDSSTR /*! KWP2000 VAG SLOW INIT DONE */
#define WID0_458   DU0|458,FLDSSTR /*! KWP2000 VAG SLOW INIT DONE */
#define WID0_459   DU0|459,FLDSSTR /*! KWP2000 SLOW INIT DONE */
#define WID0_460   DU0|460,FLDSSTR /*! KWP2000 VAG SLOW INIT DONE */
#define WID0_461   DU0|461,FLDSSTR /*! KWP2000 SLOW INIT DONE */
#define WID0_462   DU0|462,FLDSSTR /*! KWP2000 VAG SLOW INIT DONE */
#define WID0_463   DU0|463,FLDSSTR /*! KWP2000 SLOW INIT DONE */
#define WID0_464   DU0|464,FLDSSTR /*! ISO9141 INIT DONE */
#define WID0_465   DU0|465,FLDSSTR /*! KWP2000 VAG SLOW INIT DONE */
#define WID0_466   DU0|466,FLDS1(TS32) /*! Parity: 0x%0.2X */
#define WID0_467   DU0|467,FLDS1(TS32) /*! OBD2 SLOW INIT 0x%0.2X */
#define WID0_468   DU0|468,FLDSSTR /*! OBD2 VAG PRE INIT */
#define WID0_469   DU0|469,FLDS1(TS32) /*! OBD2 VAG INIT 0x%0.2X */
#define WID0_470   DU0|470,FLDS1(TS32) /*! OBD2 VAG 10400 INIT 0x%0.2X */
#define WID0_471   DU0|471,FLDS1(TS32) /*! OBD2 VAG 10400 INIT 0x%0.2X */
#define WID0_472   DU0|472,FLDSSTR /*! OBD2 500kbps 11-Bit */
#define WID0_473   DU0|473,FLDSSTR /*! OBD2 500kbps 29-Bit */
#define WID0_474   DU0|474,FLDSSTR /*! OBD2 250kbps 11-Bit */
#define WID0_475   DU0|475,FLDSSTR /*! OBD2 250kbps 29-Bit */
#define WID0_476   DU0|476,FLDSSTR /*! OBD2 FAST INIT */
#define WID0_477   DU0|477,FLDSSTR /*! OBD2 J1850 VPW */
#define WID0_478   DU0|478,FLDS1(TS32) /*! OBD2 Protocol: 0x%0.4X */
#define WID0_479   DU0|479,FLDSSTR /*! CANBus Standoff: Scantool request received */
#define WID0_480   DU0|480,FLDSSTR /*! ISO9141 INIT DONE */
#define WID0_481   DU0|481,FLDSSTR /*! KWP2000 SLOW INIT DONE */
#define WID0_482   DU0|482,FLDSSTR /*! KWP2000 FAST INIT DONE */
#define WID0_483   DU0|483,FLDSSTR /*! J1850VPW INIT DONE */
#define WID0_484   DU0|484,FLDSSTR /*! KWP2000 FAST INIT DONE */
#define WID0_485   DU0|485,FLDS1(TSTR) /*! VIN Updated: %s */
#define WID0_486   DU0|486,FLDS1(TSTR) /*! OLD VIN: %s */
#define WID0_487   DU0|487,FLDSSTR /*! GPID Change Detected */
#define WID0_488   DU0|488,FLDSSTR /*! GPID Not Changed */
#define WID0_489   DU0|489,FLDSSTR /*! ECU 500kbps 11-Bit Init */
#define WID0_490   DU0|490,FLDS1(TS32) /*! RPM: %d */
#define WID0_491   DU0|491,FLDS1(TS32) /*! Throttle: %d */
#define WID0_492   DU0|492,FLDS1(TS32) /*! TEMP: %d */
#define WID0_493   DU0|493,FLDS1(TS32) /*! SPEED: %d */
#define WID0_494   DU0|494,FLDS1(TS32) /*! Fuel: %dL */
#define WID0_495   DU0|495,FLDS1(TS32) /*! Fuel: %dL */
#define WID0_496   DU0|496,FLDS1(TS32) /*! Odo: %d */
#define WID0_497   DU0|497,FLDS2(TS32,TS32) /*! VAG ADDR:0x%0.2X GRP:%d */
#define WID0_498   DU0|498,FLDS2(TS32,TS32) /*! VAG PERSIST ADDR:0x%0.2X GRP:%d */
#define WID0_499   DU0|499,FLDS1(TSTR) /*! VIN: %s */
#define WID0_500   DU0|500,FLDS1(TS32) /*! RPM: %d */
#define WID0_501   DU0|501,FLDS1(TS32) /*! Throttle: %d */
#define WID0_502   DU0|502,FLDS1(TS32) /*! TEMP: %d */
#define WID0_503   DU0|503,FLDS1(TS32) /*! SPEED: %d */
#define WID0_504   DU0|504,FLDS1(TS32) /*! Fuel: %dL */
#define WID0_505   DU0|505,FLDS1(TS32) /*! Fuel: %dL */
#define WID0_506   DU0|506,FLDS1(TS32) /*! Odo: %d */
#define WID0_507   DU0|507,FLDS2(TS32,TS32) /*! VAG ADDR:0x%0.2X GRP:%d */
#define WID0_508   DU0|508,FLDS2(TS32,TS32) /*! VAG PERSIST ADDR:0x%0.2X GRP:%d */
#define WID0_509   DU0|509,FLDSSTR /*! OBD2 VAG TP20 500kbps 11-Bit */
#define WID0_510   DU0|510,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_511   DU0|511,FLDSSTR /*! ECU 500kbps 11-Bit Init */
#define WID0_512   DU0|512,FLDSSTR /*! ISO DEFAULT */
#define WID0_513   DU0|513,FLDS1(TS32) /*! RPM: %d */
#define WID0_514   DU0|514,FLDS1(TS32) /*! SPEED: %d */
#define WID0_515   DU0|515,FLDS4(TS32,TS32,TS32,TS32) /*! GPID1-0: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_516   DU0|516,FLDS1(TS32) /*! MIL: 0x%0.2X */
#define WID0_517   DU0|517,FLDS1(TS32) /*! Engine Load: %d */
#define WID0_518   DU0|518,FLDS1(TS32) /*! CLNT: %d */
#define WID0_519   DU0|519,FLDS1(TS32) /*! MAP: %d */
#define WID0_520   DU0|520,FLDS1(TS32) /*! RPM: %d */
#define WID0_521   DU0|521,FLDS1(TS32) /*! SPEED: %d */
#define WID0_522   DU0|522,FLDS1(TS32) /*! AIR: %d */
#define WID0_523   DU0|523,FLDS1(TS32) /*! MAF: %d */
#define WID0_524   DU0|524,FLDS1(TS32) /*! Throttle Pos: %d */
#define WID0_525   DU0|525,FLDS1(TS32) /*! TIME Start: %d */
#define WID0_526   DU0|526,FLDS4(TS32,TS32,TS32,TS32) /*! GPID1-1: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_527   DU0|527,FLDS1(TS32) /*! Fuel Level: %d */
#define WID0_528   DU0|528,FLDS1(TS32) /*! MIL DIST Travel: %d */
#define WID0_529   DU0|529,FLDS1(TS32) /*! DIST Travel DTC Cleared: %d */
#define WID0_530   DU0|530,FLDS1(TS32) /*! BAR Press: %d */
#define WID0_531   DU0|531,FLDS4(TS32,TS32,TS32,TS32) /*! GPID1-2: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_532   DU0|532,FLDS1(TS32) /*! Env Air Temp.: %d */
#define WID0_533   DU0|533,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! PID: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_534   DU0|534,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! DTC: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_535   DU0|535,FLDS4(TS32,TS32,TS32,TS32) /*! GPID9-0: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_536   DU0|536,FLDS1(TSTR) /*! VIN: %s */
#define WID0_537   DU0|537,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! PID: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_538   DU0|538,FLDS1(TS32) /*! VIN NOT AVAILABLE: 0x%0.2X */
#define WID0_539   DU0|539,FLDSSTR /*! VIN  messages out of order or corrupt. VIN marked as suspect */
#define WID0_540   DU0|540,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! rpm: %u, engld: %u, baro: %u, bps: %u, EngDis: %u, cs: %u */
#define WID0_541   DU0|541,FLDS3(TS32,TS32,TS32) /*! rpm: %u, engld: %u, enginedis: %u */
#define WID0_542   DU0|542,FLDS1(TS32) /*! Config Src: %u  */
#define WID0_543   DU0|543,FLDS2(TS32,TS32) /*! Calculated MAF %u, Src: %u  */
#define WID0_544   DU0|544,FLDS2(TS32,TS32) /*! MAF %umg/s; MAF Src: %u  */
#define WID0_545   DU0|545,FLDS1(TS32) /*! MAF IF: %uml/h */
#define WID0_546   DU0|546,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! GPIDArray Index: %u: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_547   DU0|547,FLDS1(TS32) /*! Read MAF: %u */
#define WID0_548   DU0|548,FLDS1(TS32) /*! AER IF: %uml/h */
#define WID0_549   DU0|549,FLDS1(TS32) /*! AER IF: %uml/h */
#define WID0_550   DU0|550,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! PID: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_551   DU0|551,FLDS1(TS32) /*! Uknown length for PID:  0x%0.2X. Aborting parser. */
#define WID0_552   DU0|552,FLDS1(TS32) /*! Uknown length for PID:  0x%0.2X. Aborting parser. */
#define WID0_553   DU0|553,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! GPID1::%u: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_554   DU0|554,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! PID: 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X 0x%0.2X */
#define WID0_555   DU0|555,FLDS1(TS32) /*! ECU Busy Notification: Add: 0x08X; MODE: %u */
#define WID0_556   DU0|556,FLDS2(TS32,TS32) /*! ERROR SERVICE: 0x%0.2X CODE 0x%0.2X */
#define WID0_557   DU0|557,FLDS1(TS32) /*! KWP: ECUID Subfunction %u unknown */
#define WID0_558   DU0|558,FLDS2(TS32,TS32) /*! KWP Svc 17 Read DTC: Addr: 0x%0.4X, Mask: 0x%0.4X */
#define WID0_559   DU0|559,FLDS2(TS32,TS32) /*! KWP Svc 18 Read DTC: Addr: 0x%0.4X, Mask: 0x%0.4X */
#define WID0_560   DU0|560,FLDS2(TS32,TS32) /*! KWP Svc 13 Read DTC: Addr: 0x%0.4X, Mask: 0x%0.4X */
#define WID0_561   DU0|561,FLDSSTR /*! KWP: ECU RESET ACK */
#define WID0_562   DU0|562,FLDS2(TS32,TS32) /*! UDS Read DTC: Add: 0x%0.4X, Mask: 0x%0.2X */
#define WID0_563   DU0|563,FLDS1(TS32) /*! UDS Read DTC Tmr: %u */
#define WID0_564   DU0|564,FLDS2(TS32,TS32) /*! UDS Read DTC: Add: 0x%0.4X, Mask: 0x%0.2X */
#define WID0_565   DU0|565,FLDS2(TS32,TS32) /*! UDS Send Custom Command Add: 0x%0.4X; SID: 0x%0.2X */
#define WID0_566   DU0|566,FLDS2(TS32,TS32) /*! UDS Send Custom Command Add: 0x%0.4X; SID: 0x%0.2X */
#define WID0_567   DU0|567,FLDS2(TS32,TS32) /*! PDUADD: 0x%0.8X, SESSADD: 0x%0.8X */
#define WID0_568   DU0|568,FLDS3(TS32,TS32,TS32) /*! SESSION FAILED 0x%0.2X PDUADD: 0x%0.8X, SESSADD: 0x%0.8X */
#define WID0_569   DU0|569,FLDSSTR /*! STRICT MODE ENABLED */
#define WID0_570   DU0|570,FLDSSTR /*! NON-STRICT COMPATIBILITY MODE ENABLED */
#define WID0_571   DU0|571,FLDSSTR /*! VNI_SESSPST_ISO14230_FASTINIT_10400 */
#define WID0_572   DU0|572,FLDSSTR /*! VNI_SESSPST_ISO14230_FASTINIT_9600 */
#define WID0_573   DU0|573,FLDSSTR /*! VNI_SESSPST_ISO9141_INIT_10400 */
#define WID0_574   DU0|574,FLDSSTR /*! VNI_SESSPST_ISO9141_INIT_9600 */
#define WID0_575   DU0|575,FLDS3(TS32,TS32,TS32) /*! ERROR MSG: SID: 0x%0.2X; Opcode: 0x%0.2X; Error: 0x%0.2X */
#define WID0_576   DU0|576,FLDS2(TS32,TS32) /*! ISO14230 CALLBACK: %u [%X] */
#define WID0_577   DU0|577,FLDS1(TS32) /*! ISO14230 INIT: %u */
#define WID0_578   DU0|578,FLDS2(TS32,TS32) /*! ISO14230 Set SubProt: %u, Prot: 0x%0.4X */
#define WID0_579   DU0|579,FLDS1(TS32) /*! ISO14230 OPEN CHANNEL: %u */
#define WID0_580   DU0|580,FLDS1(TS32) /*! ISO14230 Session Start: %u */
#define WID0_581   DU0|581,FLDS1(TS32) /*! ISO14230 ProcessRx: %u */
#define WID0_582   DU0|582,FLDSSTR /*! STRICT MODE ENABLED */
#define WID0_583   DU0|583,FLDSSTR /*! COMPATIBILITY MODE ENABLED */
#define WID0_584   DU0|584,FLDSSTR /*! ISO15765  11b/250k */
#define WID0_585   DU0|585,FLDSSTR /*! ISO15765  29b/250k */
#define WID0_586   DU0|586,FLDSSTR /*! ISO15765  11b/500k */
#define WID0_587   DU0|587,FLDSSTR /*! ISO15765  29b/500k */
#define WID0_588   DU0|588,FLDSSTR /*! Automatic Buss Off DISABLED */
#define WID0_589   DU0|589,FLDSSTR /*! Automatic Buss Off ENABLED */
#define WID0_590   DU0|590,FLDSSTR /*! Automatic Retries DISABLED */
#define WID0_591   DU0|591,FLDSSTR /*! Automatic Retries ENABLED */
#define WID0_592   DU0|592,FLDSSTR /*! Setting Close To Listen mode */
#define WID0_593   DU0|593,FLDS3(TS32,TS32,TS32) /*! ERROR MSG: SID: 0x%0.2X; Opcode: 0x%0.2X; Error: 0x%0.2X */
#define WID0_594   DU0|594,FLDS1(TS32) /*! Unpadded Mode ON: 0x%0.8X */
#define WID0_595   DU0|595,FLDS1(TS32) /*! Mixed Mode ON: 0x%0.8X */
#define WID0_596   DU0|596,FLDS1(TS32) /*! ISO15765 INIT: %u */
#define WID0_597   DU0|597,FLDS2(TS32,TS32) /*! ISO15765 Set SubProt: %u, Prot: 0x%0.4X */
#define WID0_598   DU0|598,FLDS1(TS32) /*! ISO15765 OPEN CHANNEL: %u */
#define WID0_599   DU0|599,FLDS1(TS32) /*! ISO15765 Session Start: %u */
#define WID0_600   DU0|600,FLDS1(TS32) /*! ISO15765 ProcessRx: %u */
#define WID0_601   DU0|601,FLDS2(TS32,TS32) /*! ISO15765 INIT: %u IoConf Flags: 0x%0.2X */
#define WID0_602   DU0|602,FLDS1(TS32) /*! ISO15765 Read PID Mask: %u */
#define WID0_603   DU0|603,FLDS2(TS32,TS32) /*! ISO15765 INIT: %ul IoConf Flags: 0x%0.2X */
#define WID0_604   DU0|604,FLDS1(TS32) /*! ISO15765 Session Start: %u */
#define WID0_605   DU0|605,FLDS1(TS32) /*! ISO15765 ProcessRx: %u */
#define WID0_606   DU0|606,FLDS1(TS32) /*! ISO15765 Read PID Mask: %u */
#define WID0_607   DU0|607,FLDS1(TS32) /*! ISO15765 Read PID's: %u */
#define WID0_608   DU0|608,FLDSSTR /*! J1939 250k/P */
#define WID0_609   DU0|609,FLDSSTR /*! J1939 250k/A */
#define WID0_610   DU0|610,FLDSSTR /*! J1939 500k/P */
#define WID0_611   DU0|611,FLDSSTR /*! J1939 500k/A */
#define WID0_612   DU0|612,FLDSSTR /*! NO Auto BusOff */
#define WID0_613   DU0|613,FLDSSTR /*! Auto BusOff */
#define WID0_614   DU0|614,FLDSSTR /*! AutoRetry Off */
#define WID0_615   DU0|615,FLDSSTR /*! AutoRetry On */
#define WID0_616   DU0|616,FLDSSTR /*! TP20 11b/250k */
#define WID0_617   DU0|617,FLDSSTR /*! TP20 11b/250k */
#define WID0_618   DU0|618,FLDSSTR /*! TP20 11b/500k */
#define WID0_619   DU0|619,FLDSSTR /*! TP20 11b/500k */
#define WID0_620   DU0|620,FLDS3(TS32,TS32,TS32) /*! ERROR MSG: SID: 0x%0.2X; Opcode: 0x%0.2X; Error: 0x%0.2X */
#define WID0_621   DU0|621,FLDS2(TS32,TS32) /*! TP2.0 CALLBACK: %u [%X] */
#define WID0_622   DU0|622,FLDS1(TS32) /*! TP2.0 INIT: %u */
#define WID0_623   DU0|623,FLDS2(TS32,TS32) /*! TP2.0 Set SubProt: %u, Prot: 0x%0.4X */
#define WID0_624   DU0|624,FLDS1(TS32) /*! TP2.0 OPEN CHANNEL: %u */
#define WID0_625   DU0|625,FLDS1(TS32) /*! TP2.0 Session Start: %u */
#define WID0_626   DU0|626,FLDS1(TS32) /*! TP2.0 ProcessRx: %u */
#define WID0_627   DU0|627,FLDS2(TS32,TS32) /*! TP2.0 INIT: %u IoConf Flags: 0x%0.2X */
#define WID0_628   DU0|628,FLDS1(TS32) /*! TP2.0 Read PID Mask: %u */
#define WID0_629   DU0|629,FLDSSTR /*! Button Press REJECTED */
#define WID0_630   DU0|630,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! STD Dev: fInit: %d|numRS: %d|AR_idx: %d|RH_idx: %d|sC: %d|prevAve X: %d Y: %d Z: %d */
#define WID0_631   DU0|631,FLDS4(TSTR,TSTR,TSTR,TSTR) /*! RAW:%s,%s,%s,%s\r\n */
#define WID0_632   DU0|632,FLDS7E(TSTR,TSTR,TSTR,TSTR,TSTR,TSTR,TSTR),FLDS2(TSTR,TSTR) /*! RAW:%s,%s,%s,%s||HPF:%s,%s,%s,%s|<%s\r\n */
#define WID0_633   DU0|633,FLDSSTR /*! Acc Data Integrity Check - Initialize */
#define WID0_634   DU0|634,FLDSSTR /*! Acc Data Integrity Check - First Stage */
#define WID0_635   DU0|635,FLDSSTR /*! Acc Data Integrity Check - Second Stage */
#define WID0_636   DU0|636,FLDSSTR /*! accRawDCOffsetInit */
#define WID0_637   DU0|637,FLDSSTR /*! Acc Data Integrity Check - Final Stage */
#define WID0_638   DU0|638,FLDSSTR /*! Acc Data Integrity Check - Error Stage */
#define WID0_639   DU0|639,FLDSSTR /*! Acc Data Integrity Check - Lockout */
#define WID0_640   DU0|640,FLDSSTR /*! BAD POINTER */
#define WID0_641   DU0|641,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! %c%d Timex10ms: %d(%d) avg g: %d max: %d x: %d y: %d z: %d */
#define WID0_642   DU0|642,FLDS4(TS32,TS32,TS32,TS32) /*! %c Timex10ms: %d avg g: %d max: %d */
#define WID0_643   DU0|643,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! %c%d Timex10ms: %d(%d) avg g: %d max: %d x: %d y: %d z: %d */
#define WID0_644   DU0|644,FLDS1(TS32) /*! DeltaV SR:%d */
#define WID0_645   DU0|645,FLDS2(TS32,TS32) /*! SR: %d S100: %d */
#define WID0_646   DU0|646,FLDSSTR /*! Count<samplesPer100ms! */
#define WID0_647   DU0|647,FLDSSTR /*! Clear the Inc flag! */
#define WID0_648   DU0|648,FLDSSTR /*! Trigger Burst data and clear the Acc flag! */
#define WID0_649   DU0|649,FLDSSTR /*! Max=Current1! */
#define WID0_650   DU0|650,FLDSSTR /*! Summary=Current1! */
#define WID0_651   DU0|651,FLDS5(TSTR,TSTR,TSTR,TS32,TS32) /*! ACC dV(m/s): X: %s Y: %s Z: %s E: %d D: %d */
#define WID0_652   DU0|652,FLDSSTR /*! Reset Max! */
#define WID0_653   DU0|653,FLDSSTR /*! Max=Current2! */
#define WID0_654   DU0|654,FLDSSTR /*! Summary=Current2! */
#define WID0_655   DU0|655,FLDSSTR /*! Clear the Inc flag and release events! */
#define WID0_656   DU0|656,FLDSSTR /*! Clear the Acc flag! */
#define WID0_657   DU0|657,FLDSSTR /*! Reset summary and clear the flag! */
#define WID0_658   DU0|658,FLDSSTR /*! ACCIDENT RAISED */
#define WID0_659   DU0|659,FLDSSTR /*! INCIDENT RAISED */
#define WID0_660   DU0|660,FLDSSTR /*! PEAK ACCIDENT RAISED */
#define WID0_661   DU0|661,FLDSSTR /*! ACCIDENT BAD LEVEL */
#define WID0_662   DU0|662,FLDSSTR /*! AUX ACCIDENT RAISED */
#define WID0_663   DU0|663,FLDSSTR /*! AUX INCIDENT RAISED */
#define WID0_664   DU0|664,FLDSSTR /*! ACCIDENT 5sec */
#define WID0_665   DU0|665,FLDSSTR /*! INCIDENT 5sec */
#define WID0_666   DU0|666,FLDSSTR /*! STM RESET */
#define WID0_667   DU0|667,FLDSSTR /*! Summary reset (Incident)! */
#define WID0_668   DU0|668,FLDSSTR /*! STM RESET */
#define WID0_669   DU0|669,FLDSSTR /*! Summary reset (Unverified)! */
#define WID0_670   DU0|670,FLDSSTR /*! AUX2 ACCIDENT RAISED */
#define WID0_671   DU0|671,FLDSSTR /*! AUX2 INCIDENT RAISED */
#define WID0_672   DU0|672,FLDSSTR /*! ACCIDENT 10sec */
#define WID0_673   DU0|673,FLDSSTR /*! INCIDENT 10sec */
#define WID0_674   DU0|674,FLDS1(TS32) /*! ACCIDENT %dsec */
#define WID0_675   DU0|675,FLDS1(TS32) /*! INCIDENT %dsec */
#define WID0_676   DU0|676,FLDSSTR /*! Summary reset! */
#define WID0_677   DU0|677,FLDS1(TS32) /*! ACCIDENT STM: %d */
#define WID0_678   DU0|678,FLDSSTR /*! ACC: BUFFER */
#define WID0_679   DU0|679,FLDS1(TS32) /*! ACC: EVENT %d DISABLED */
#define WID0_680   DU0|680,FLDSSTR /*! Acc flag set! */
#define WID0_681   DU0|681,FLDSSTR /*! No flag set! */
#define WID0_682   DU0|682,FLDSSTR /*! Inc flag set! */
#define WID0_683   DU0|683,FLDS6(TSTR,TSTR,TSTR,TS32,TS32,TS32) /*! Max DeltaV: %s,%s,%s,%d,%d,%d */
#define WID0_684   DU0|684,FLDS1(TS32) /*! DB Event type %d not active */
#define WID0_685   DU0|685,FLDS4(TS32,TS32,TS32,TS32) /*! HPFConditions Res:%d X:%d Y:%d Z:%d */
#define WID0_686   DU0|686,FLDS2(TS32,TS32) /*! ACC BURST: %d (0x%0.8X) */
#define WID0_687   DU0|687,FLDS3(TS32,TS32,TS32) /*! Burst Armed: C: %d E: %d T: %d */
#define WID0_688   DU0|688,FLDS2(TS32,TS32) /*! Sample Rate=%d, Records/Sec=%d */
#define WID0_689   DU0|689,FLDS3(TSTR,TSTR,TSTR) /*! ACC AVE: X: %s Y: %s Z: %s */
#define WID0_690   DU0|690,FLDS4(TSTR,TSTR,TSTR,TSTR) /*! ACC dV(m/s): X: %s Y: %s Z: %s R: %s */
#define WID0_691   DU0|691,FLDS4(TSTR,TSTR,TSTR,TSTR) /*! ACC dV(m/s): X: %s Y: %s Z: %s R: %s */
#define WID0_692   DU0|692,FLDS1(TS32) /*! ACC MMA: 0x%0.2X */
#define WID0_693   DU0|693,FLDSSTR /*! ACC INIT */
#define WID0_694   DU0|694,FLDS1(TS32) /*! ACC LIS: 0x%0.2X */
#define WID0_695   DU0|695,FLDS1(TS32) /*! ACC ADXL345: 0x%0.2X */
#define WID0_696   DU0|696,FLDS1(TS32) /*! ACC LIS3DH: 0x%0.2X */
#define WID0_697   DU0|697,FLDS1(TS32) /*! ACC MMA7455: 0x%0.2X */
#define WID0_698   DU0|698,FLDS1(TS32) /*! Braking Limit: %d */
#define WID0_699   DU0|699,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define WID0_700   DU0|700,FLDSSTR /*! ACC ENTRY/EXIT */
#define WID0_701   DU0|701,FLDS3(TS32,TS32,TS32) /*! Auto Self: Alpha %d, Beta %d, Theta %d */
#define WID0_702   DU0|702,FLDS3(TS32,TS32,TS32) /*! Cal Alpha:%d Beta:%d Theta:%d */
#define WID0_703   DU0|703,FLDS3(TS32,TS32,TS32) /*! Alpha:%d Beta:%d Theta:%d */
#define WID0_704   DU0|704,FLDS3(TS32,TS32,TS32) /*! angles->alpha %d, angles->beta %d, angles->theta %d */
#define WID0_705   DU0|705,FLDS4(TS32,TS32,TS32,TS32) /*! Accident X: %d Y: %d Z: %d State: 0x%0.2X */
#define WID0_706   DU0|706,FLDS3(TS32,TS32,TS32) /*! Reckless Cornering Left: %d Right: %d Status: 0x%0.2X */
#define WID0_707   DU0|707,FLDS1(TS32) /*! Harsh Braking Status: 0x%0.2X */
#define WID0_708   DU0|708,FLDS1(TS32) /*! Harsh Acceleration Status: 0x%0.2X */
#define WID0_709   DU0|709,FLDSSTR /*! BAD POINTER */
#define WID0_710   DU0|710,FLDS3(TS32,TS32,TS32) /*! %c Time Now: %d %d */
#define WID0_711   DU0|711,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! %c Timex100ms: %d (%d) avg g: %d max: %d x: %d y: %d z: %d */
#define WID0_712   DU0|712,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! %c Timex100ms: %d (%d) avg g: %d max: %d x: %d y: %d z: %d */
#define WID0_713   DU0|713,FLDSSTR /*! BAD POINTER */
#define WID0_714   DU0|714,FLDS3(TS32,TS32,TS32) /*! %c Time Now: %d %d */
#define WID0_715   DU0|715,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS3(TS32,TS32,TS32) /*! %c Timex100ms: %d (%d) avg g: %d max: %d x: %d y: %d z: %d r: %d p: %d */
#define WID0_716   DU0|716,FLDS3(TS32,TS32,TS32) /*! ACC UNCAL 0: X: %d Y: %d Z: %d */
#define WID0_717   DU0|717,FLDS3(TS32,TS32,TS32) /*! ACC UNCAL 0: X: %d Y: %d Z: %d */
#define WID0_718   DU0|718,FLDSSTR /*! CORNERING */
#define WID0_719   DU0|719,FLDSSTR /*! SWERVE */
#define WID0_720   DU0|720,FLDSSTR /*! LANE CHANGE */
#define WID0_721   DU0|721,FLDSSTR /*! SPEED BUMP */
#define WID0_722   DU0|722,FLDS2(TS32,TS32) /*! ACC DB LC: %d SB: %d */
#define WID0_723   DU0|723,FLDSSTR /*! Roll */
#define WID0_724   DU0|724,FLDSSTR /*! Pitch */
#define WID0_725   DU0|725,FLDSSTR /*! ACC Door Close */
#define WID0_726   DU0|726,FLDSSTR /*! ACC ENTRY/EXIT */
#define WID0_727   DU0|727,FLDSSTR /*! Acc Reinit */
#define WID0_728   DU0|728,FLDS3(TS32,TS32,TS32) /*! Stored: Alpha:%d Beta:%d Theta:%d */
#define WID0_729   DU0|729,FLDS3(TS32,TS32,TS32) /*! UNCAL DIFF: %d %d %d */
#define WID0_730   DU0|730,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! UNCAL: Alpha:%d (%d) Beta:%d (%d) Theta:%d (%d) */
#define WID0_731   DU0|731,FLDSSTR /*! BAD POINTER */
#define WID0_732   DU0|732,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! %c%d Timex10ms: %d(%d) avg g: %d max: %d x: %d y: %d z: %d */
#define WID0_733   DU0|733,FLDS4(TS32,TS32,TS32,TS32) /*! %c Timex10ms: %d avg g: %d max: %d */
#define WID0_734   DU0|734,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! %c%d Timex10ms: %d(%d) avg g: %d max: %d x: %d y: %d z: %d */
#define WID0_735   DU0|735,FLDS1(TS32) /*! DeltaV SR:%d */
#define WID0_736   DU0|736,FLDS2(TS32,TS32) /*! SR: %d S100: %d */
#define WID0_737   DU0|737,FLDSSTR /*! Count<samplesPer100ms! */
#define WID0_738   DU0|738,FLDSSTR /*! Clear the Inc flag! */
#define WID0_739   DU0|739,FLDSSTR /*! Trigger Burst data and clear the Acc flag! */
#define WID0_740   DU0|740,FLDSSTR /*! Max=Current1! */
#define WID0_741   DU0|741,FLDSSTR /*! Summary=Current1! */
#define WID0_742   DU0|742,FLDS5(TSTR,TSTR,TSTR,TS32,TS32) /*! ACC dV(m/s): X: %s Y: %s Z: %s E: %d D: %d */
#define WID0_743   DU0|743,FLDSSTR /*! Reset Max! */
#define WID0_744   DU0|744,FLDSSTR /*! Max=Current2! */
#define WID0_745   DU0|745,FLDSSTR /*! Summary=Current2! */
#define WID0_746   DU0|746,FLDSSTR /*! Clear the Inc flag and release events! */
#define WID0_747   DU0|747,FLDSSTR /*! Clear the Acc flag! */
#define WID0_748   DU0|748,FLDSSTR /*! Reset summary and clear the flag! */
#define WID0_749   DU0|749,FLDSSTR /*! ACCIDENT RAISED */
#define WID0_750   DU0|750,FLDSSTR /*! INCIDENT RAISED */
#define WID0_751   DU0|751,FLDSSTR /*! PEAK ACCIDENT RAISED */
#define WID0_752   DU0|752,FLDSSTR /*! ACCIDENT BAD LEVEL */
#define WID0_753   DU0|753,FLDSSTR /*! AUX ACCIDENT RAISED */
#define WID0_754   DU0|754,FLDSSTR /*! AUX INCIDENT RAISED */
#define WID0_755   DU0|755,FLDSSTR /*! ACCIDENT 5sec */
#define WID0_756   DU0|756,FLDSSTR /*! INCIDENT 5sec */
#define WID0_757   DU0|757,FLDSSTR /*! STM RESET */
#define WID0_758   DU0|758,FLDSSTR /*! Summary reset (Incident)! */
#define WID0_759   DU0|759,FLDSSTR /*! STM RESET */
#define WID0_760   DU0|760,FLDSSTR /*! Summary reset (Unverified)! */
#define WID0_761   DU0|761,FLDSSTR /*! AUX2 ACCIDENT RAISED */
#define WID0_762   DU0|762,FLDSSTR /*! AUX2 INCIDENT RAISED */
#define WID0_763   DU0|763,FLDSSTR /*! ACCIDENT 10sec */
#define WID0_764   DU0|764,FLDSSTR /*! INCIDENT 10sec */
#define WID0_765   DU0|765,FLDS1(TS32) /*! ACCIDENT %dsec */
#define WID0_766   DU0|766,FLDS1(TS32) /*! INCIDENT %dsec */
#define WID0_767   DU0|767,FLDSSTR /*! Summary reset! */
#define WID0_768   DU0|768,FLDS1(TS32) /*! ACCIDENT STM: %d */
#define WID0_769   DU0|769,FLDSSTR /*! ACC: BUFFER */
#define WID0_770   DU0|770,FLDS1(TS32) /*! ACC: EVENT %d DISABLED */
#define WID0_771   DU0|771,FLDSSTR /*! Acc flag set! */
#define WID0_772   DU0|772,FLDSSTR /*! No flag set! */
#define WID0_773   DU0|773,FLDSSTR /*! Inc flag set! */
#define WID0_774   DU0|774,FLDS6(TSTR,TSTR,TSTR,TS32,TS32,TS32) /*! Max DeltaV: %s,%s,%s,%d,%d,%d */
#define WID0_775   DU0|775,FLDS1(TS32) /*! DB Event type %d not active */
#define WID0_776   DU0|776,FLDS4(TS32,TS32,TS32,TS32) /*! HPFConditions Res:%d X:%d Y:%d Z:%d */
#define WID0_777   DU0|777,FLDS1(TS32) /*! ACC MMA: 0x%0.2X */
#define WID0_778   DU0|778,FLDSSTR /*! ACC INIT */
#define WID0_779   DU0|779,FLDS1(TS32) /*! ACC LIS: 0x%0.2X */
#define WID0_780   DU0|780,FLDS1(TS32) /*! ACC ADXL345: 0x%0.2X */
#define WID0_781   DU0|781,FLDS1(TS32) /*! ACC LIS3DH: 0x%0.2X */
#define WID0_782   DU0|782,FLDS1(TS32) /*! ACC MMA7455: 0x%0.2X */
#define WID0_783   DU0|783,FLDS1(TS32) /*! Braking Limit: %d */
#define WID0_784   DU0|784,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define WID0_785   DU0|785,FLDSSTR /*! ACC ENTRY/EXIT */
#define WID0_786   DU0|786,FLDS3(TS32,TS32,TS32) /*! Auto Self: Alpha %d, Beta %d, Theta %d */
#define WID0_787   DU0|787,FLDS3(TS32,TS32,TS32) /*! Cal Alpha:%d Beta:%d Theta:%d */
#define WID0_788   DU0|788,FLDS3(TS32,TS32,TS32) /*! Alpha:%d Beta:%d Theta:%d */
#define WID0_789   DU0|789,FLDS3(TS32,TS32,TS32) /*! angles->alpha %d, angles->beta %d, angles->theta %d */
#define WID0_790   DU0|790,FLDS4(TS32,TS32,TS32,TS32) /*! Accident X: %d Y: %d Z: %d State: 0x%0.2X */
#define WID0_791   DU0|791,FLDS3(TS32,TS32,TS32) /*! Reckless Cornering Left: %d Right: %d Status: 0x%0.2X */
#define WID0_792   DU0|792,FLDS1(TS32) /*! Harsh Braking Status: 0x%0.2X */
#define WID0_793   DU0|793,FLDS1(TS32) /*! Harsh Acceleration Status: 0x%0.2X */
#define WID0_794   DU0|794,FLDSSTR /*! BAD POINTER */
#define WID0_795   DU0|795,FLDS3(TS32,TS32,TS32) /*! %c Time Now: %d %d */
#define WID0_796   DU0|796,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! %c Timex100ms: %d (%d) avg g: %d max: %d x: %d y: %d z: %d */
#define WID0_797   DU0|797,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! %c Timex100ms: %d (%d) avg g: %d max: %d x: %d y: %d z: %d */
#define WID0_798   DU0|798,FLDSSTR /*! BAD POINTER */
#define WID0_799   DU0|799,FLDS3(TS32,TS32,TS32) /*! %c Time Now: %d %d */
#define WID0_800   DU0|800,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS3(TS32,TS32,TS32) /*! %c Timex100ms: %d (%d) avg g: %d max: %d x: %d y: %d z: %d r: %d p: %d */
#define WID0_801   DU0|801,FLDS3(TS32,TS32,TS32) /*! ACC UNCAL 0: X: %d Y: %d Z: %d */
#define WID0_802   DU0|802,FLDS3(TS32,TS32,TS32) /*! ACC UNCAL 0: X: %d Y: %d Z: %d */
#define WID0_803   DU0|803,FLDSSTR /*! CORNERING */
#define WID0_804   DU0|804,FLDSSTR /*! SWERVE */
#define WID0_805   DU0|805,FLDSSTR /*! LANE CHANGE */
#define WID0_806   DU0|806,FLDSSTR /*! SPEED BUMP */
#define WID0_807   DU0|807,FLDS2(TS32,TS32) /*! ACC DB LC: %d SB: %d */
#define WID0_808   DU0|808,FLDSSTR /*! Roll */
#define WID0_809   DU0|809,FLDSSTR /*! Pitch */
#define WID0_810   DU0|810,FLDSSTR /*! ACC Door Close */
#define WID0_811   DU0|811,FLDSSTR /*! ACC ENTRY/EXIT */
#define WID0_812   DU0|812,FLDSSTR /*! Acc Reinit */
#define WID0_813   DU0|813,FLDS3(TS32,TS32,TS32) /*! Stored: Alpha:%d Beta:%d Theta:%d */
#define WID0_814   DU0|814,FLDS3(TS32,TS32,TS32) /*! UNCAL DIFF: %d %d %d */
#define WID0_815   DU0|815,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! UNCAL: Alpha:%d (%d) Beta:%d (%d) Theta:%d (%d) */
#define WID0_816   DU0|816,FLDSSTR /*! Battery Crank */
#define WID0_817   DU0|817,FLDSSTR /*! Battery Cranking */
#define WID0_818   DU0|818,FLDSSTR /*! Battery Running */
#define WID0_819   DU0|819,FLDSSTR /*! Battery TimeOut */
#define WID0_820   DU0|820,FLDSSTR /*! Battery Running */
#define WID0_821   DU0|821,FLDS2(TS32,TS32) /*! Battery TimeOut. %d %d */
#define WID0_822   DU0|822,FLDSSTR /*! Battery Too Short */
#define WID0_823   DU0|823,FLDSSTR /*! BQ Updating */
#define WID0_824   DU0|824,FLDSSTR /*! BQ Updating */
#define WID0_825   DU0|825,FLDS1(TSTR) /*! CTx OnOff: %s: */
#define WID0_826   DU0|826,FLDS1(TSTR) /*! CTx OnOff: %s: */
#define WID0_827   DU0|827,FLDSSTR /*! CAN BUSY TX */
#define WID0_828   DU0|828,FLDS1(TS32) /*! CANbus Error: 0x%0.2X */
#define WID0_829   DU0|829,FLDS4(TS32,TS32,TS32,TS32) /*! CANbus Sts: 0x%0.2X ErrRx: %d ErrTx: %d cnt: %d */
#define WID0_830   DU0|830,FLDSSTR /*! PCA Updating */
#define WID0_831   DU0|831,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! RTC %d: %d M:%d S:%d R:%d */
#define WID0_832   DU0|832,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Tot(us) GPS:%06d GSM:%06d ACC:%06d COM:%06d OBD2:%06d GEO:%06d */
#define WID0_833   DU0|833,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! Tot(us) GPS:%06d GSM:%06d ACC:%06d COM:%06d OBD2:%06d GEO:%06d SbS:%06d */
#define WID0_834   DU0|834,FLDS3(TS32,TS32,TS32) /*! Tot(us) ACC:%06d ACC DS:%06d ACC I:%06d */
#define WID0_835   DU0|835,FLDSSTR /*! CRC Error */
#define WID0_836   DU0|836,FLDSSTR /*! USB Serial Device Enumerated */
#define WID0_837   DU0|837,FLDSSTR /*! GPRS MESSAGE QUEUED */
#define WID0_838   DU0|838,FLDSSTR /*! GPRS MESSAGE DESTROYED <Could not be Queued> */
#define WID0_839   DU0|839,FLDSSTR /*! GPRS MESSAGE QUEUE FULL */
#define WID0_840   DU0|840,FLDS4(TS32,TS32,TS32,TS32) /*! FWMAJ: %u, FWMIN:%u; PC: %u; ECnt: %u */
#define WID0_841   DU0|841,FLDS3(TS32,TS32,TS32) /*! Ping: SessTp:%u CT %us; NT %us */
#define WID0_842   DU0|842,FLDSSTR /*! CRC ERR */
#define WID0_843   DU0|843,FLDSSTR /*! CRC ERR */
#define WID0_844   DU0|844,FLDSSTR /*! CRC ERR */
#define WID0_845   DU0|845,FLDS1(TS32) /*! NTime %us */
#define WID0_846   DU0|846,FLDS1(TS32) /*! Server Time: Diff - %ds */
#define WID0_847   DU0|847,FLDS3(TS32,TS32,TS32) /*! ACK: Seq: %u; EC: %u; NT: %u */
#define WID0_848   DU0|848,FLDS2(TS32,TS32) /*! ACK ID: %u, Cnt: %u */
#define WID0_849   DU0|849,FLDS1(TS32) /*! SeqNum ERR: %u */
#define WID0_850   DU0|850,FLDS1(TS32) /*! EC: %u */
#define WID0_851   DU0|851,FLDSSTR /*! CRC ERR */
#define WID0_852   DU0|852,FLDSSTR /*! Login */
#define WID0_853   DU0|853,FLDS1(TS32) /*! Latency -- %u */
#define WID0_854   DU0|854,FLDSSTR /*! No buffer space */
#define WID0_855   DU0|855,FLDS1(TS32) /*! Latency -- %u */
#define WID0_856   DU0|856,FLDS1(TS32) /*! Invalid Test %u */
#define WID0_857   DU0|857,FLDS1(TS32) /*! GPRS Send: %u  */
#define WID0_858   DU0|858,FLDS2(TS32,TS32) /*! GPRS Receive: %u : Buffer Length: %u  */
#define WID0_859   DU0|859,FLDSSTR /*! GPRS Receive: Full 81 Message */
#define WID0_860   DU0|860,FLDSSTR /*! GPRS Receive: 81 Message Routed  */
#define WID0_861   DU0|861,FLDSSTR /*! Set Flow Control (Data TO SP): XOFF */
#define WID0_862   DU0|862,FLDSSTR /*! Set Flow Control (Data TO SP): XON */
#define WID0_863   DU0|863,FLDS1(TS32) /*! Received Full Buffer: %u  */
#define WID0_864   DU0|864,FLDSSTR /*! Set Flow Control (Data FROM SP): XOFF */
#define WID0_865   DU0|865,FLDSSTR /*! Set Flow Control (Data FROM SP): XON */
#define WID0_866   DU0|866,FLDS1(TSTR) /*! %s */
#define WID0_867   DU0|867,FLDS1(TSTR) /*! %s */
#define WID0_868   DU0|868,FLDS3(TS32,TS32,TS32) /*! Lat: %d, Long: %d, Error: %u */
#define WID0_869   DU0|869,FLDSSTR /*!  */
#define WID0_870   DU0|870,FLDSSTR /*!  */
#define WID0_871   DU0|871,FLDSSTR /*!  */
#define WID0_872   DU0|872,FLDSSTR /*!  */
#define WID0_873   DU0|873,FLDS3(TS32,TS32,TS32) /*! Lat: %d, Long: %d, Error: %u */
#define WID0_874   DU0|874,FLDS3(TS32,TS32,TS32) /*! Lat: %d, Long: %d, Error: %u */
#define WID0_875   DU0|875,FLDSSTR /*! INVALID GSM POSITIONING PROVIDER */
#define WID0_876   DU0|876,FLDSSTR /*! INVALID GSM POSITIONING PROVIDER */
#define WID0_877   DU0|877,FLDSSTR /*! ANSWERING INCOMING DATA CALL !! */
#define WID0_878   DU0|878,FLDSSTR /*! Email Send Process Started */
#define WID0_879   DU0|879,FLDSSTR /*! Ftp Send Process Started */
#define WID0_880   DU0|880,FLDS1(TS32) /*! APNACT: Stndoff %us */
#define WID0_881   DU0|881,FLDS4(TS32,TS32,TS32,TS32) /*! APNACT LAC/CID Chnge:LAC:0x%0.4X-0x%0.4X;CID:0x%0.4X-0x%0.4X */
#define WID0_882   DU0|882,FLDS1(TS32) /*! RSSI out of bounds for APN activation: %u */
#define WID0_883   DU0|883,FLDS1(TS32) /*! ClrCode %u;2Hr standoff */
#define WID0_884   DU0|884,FLDSSTR /*!  *** SUSPENDING ACTIVE SOCKET *** */
#define WID0_885   DU0|885,FLDSSTR /*!  *** SUSPENDING PRIMARY SOCKET *** */
#define WID0_886   DU0|886,FLDSSTR /*!  *** TEARING DOWN MPROFILER SOCKET *** */
#define WID0_887   DU0|887,FLDSSTR /*!  *** SUSPENDING AUX SOCKET *** */
#define WID0_888   DU0|888,FLDSSTR /*!  *** TEARING DOWN AUXILLIARY SOCKET *** */
#define WID0_889   DU0|889,FLDSSTR /*! FTP OPEN */
#define WID0_890   DU0|890,FLDSSTR /*! FTP FILE READY FOR WRITING */
#define WID0_891   DU0|891,FLDSSTR /*! FTP ENDING WRITE */
#define WID0_892   DU0|892,FLDSSTR /*! FTP CLOSE */
#define WID0_893   DU0|893,FLDS1(TSTR) /*! FN: %s */
#define WID0_894   DU0|894,FLDS1(TS32) /*! Fetching Pg: %u */
#define WID0_895   DU0|895,FLDSSTR /*! File upload details invalid */
#define WID0_896   DU0|896,FLDSSTR /*! FTP Abort */
#define WID0_897   DU0|897,FLDS1(TSTR) /*! %s FTP */
#define WID0_898   DU0|898,FLDSSTR /*! FTP OPEN */
#define WID0_899   DU0|899,FLDS1(TSTR) /*! FTP Directory Set to: %s */
#define WID0_900   DU0|900,FLDSSTR /*! FTP FILE READY FOR WRITING */
#define WID0_901   DU0|901,FLDSSTR /*! FTP ENDING WRITE */
#define WID0_902   DU0|902,FLDSSTR /*! FTP CLOSE */
#define WID0_903   DU0|903,FLDSSTR /*! Email Send Process Finished */
#define WID0_904   DU0|904,FLDSSTR /*! Wait state exiting. */
#define WID0_905   DU0|905,FLDSSTR /*! EMAIL RETRY */
#define WID0_906   DU0|906,FLDSSTR /*! DETECTED INCOMING DATA CALL !! */
#define WID0_907   DU0|907,FLDS1(TS32) /*! #CEERNET Status: %u */
#define WID0_908   DU0|908,FLDS2(TS32,TS32) /*! Socket SRING Received for Channel: %u, Databuffer: %u */
#define WID0_909   DU0|909,FLDSSTR /*! APN Standoff Reset */
#define WID0_910   DU0|910,FLDSSTR /*! UDP 81 Message Received */
#define WID0_911   DU0|911,FLDSSTR /*! COLD MODEM POWER UP SEQUENCE */
#define WID0_912   DU0|912,FLDSSTR /*! MODEM REGULATOR ON */
#define WID0_913   DU0|913,FLDSSTR /*! REGULATOR SLEW ON */
#define WID0_914   DU0|914,FLDSSTR /*! MODEM ON POWERPIN TOGGLE START */
#define WID0_915   DU0|915,FLDSSTR /*! MODEM POWERPIN TOGGLE COMPLETE */
#define WID0_916   DU0|916,FLDSSTR /*! MODEM RESET */
#define WID0_917   DU0|917,FLDSSTR /*! MODEM RESET RELEASE */
#define WID0_918   DU0|918,FLDSSTR /*! MODEM REGULATOR OFF */
#define WID0_919   DU0|919,FLDS1(TS32) /*! MODEM PRE POWEROFF WAIT: %u */
#define WID0_920   DU0|920,FLDSSTR /*! MODEM OFF POWER PIN TOGGLE START */
#define WID0_921   DU0|921,FLDSSTR /*! MODEM OFF POWER PIN TOGGLE COMPLETE */
#define WID0_922   DU0|922,FLDS1(TS32) /*! MODEM PRE POWEROFF WAIT: %u */
#define WID0_923   DU0|923,FLDSSTR /*! STARTING SIM VETTING */
#define WID0_924   DU0|924,FLDSSTR /*! STARTING IVR SEQUENCE */
#define WID0_925   DU0|925,FLDSSTR /*! Updating PIN */
#define WID0_926   DU0|926,FLDS1(TSTR) /*! IMSI APPROVED FOR USE: %s */
#define WID0_927   DU0|927,FLDS1(TSTR) /*! SIM NOT APPROVED: %s */
#define WID0_928   DU0|928,FLDS1(TS32) /*! Standoff Active %u */
#define WID0_929   DU0|929,FLDS1(TS32) /*! Standoff Active %u */
#define WID0_930   DU0|930,FLDSSTR /*! INVALID NEWORK SIM */
#define WID0_931   DU0|931,FLDSSTR /*! Modem Firmware Update Start */
#define WID0_932   DU0|932,FLDSSTR /*! Updating PIN */
#define WID0_933   DU0|933,FLDS1(TS32) /*! MODEM NOT IDENTIFIED: %u */
#define WID0_934   DU0|934,FLDSSTR /*! Restart for FTP FOTA */
#define WID0_935   DU0|935,FLDSSTR /*! FOTA ALERT: Checking Fingerprints */
#define WID0_936   DU0|936,FLDSSTR /*! FOTA ALERT: Checking AGENT Fingerprints */
#define WID0_937   DU0|937,FLDSSTR /*! FOTA ALERT: Checking CODE Fingerprints */
#define WID0_938   DU0|938,FLDSSTR /*! AUTO ANSWER */
#define WID0_939   DU0|939,FLDSSTR /*! MESSAGE DESTROYED */
#define WID0_940   DU0|940,FLDSSTR /*! TRIP START CLEAR FORBIDDEN LIST */
#define WID0_941   DU0|941,FLDS2(TSTR,TSTR) /*! Whitelist ID: %s Incoming: %s */
#define WID0_942   DU0|942,FLDS2(TSTR,TSTR) /*! Clip ID: %s WL ID: %s */
#define WID0_943   DU0|943,FLDSSTR /*! Updating PIN */
#define WID0_944   DU0|944,FLDS1(TS32) /*! SIM not ready. QSS Override. QSS: %u */
#define WID0_945   DU0|945,FLDS1(TS32) /*! SIM not ready for SMS read. QSS: %u */
#define WID0_946   DU0|946,FLDSSTR /*! Not 81. Post Text. */
#define WID0_947   DU0|947,FLDSSTR /*! Wait exiting. */
#define WID0_948   DU0|948,FLDSSTR /*! No SMS at index */
#define WID0_949   DU0|949,FLDSSTR /*! JDR: GSM JAMMING DETECTED */
#define WID0_950   DU0|950,FLDSSTR /*! JDR: GSM JAMMING STOPPED. */
#define WID0_951   DU0|951,FLDS1(TS32) /*! LUHN Check Failure: %u */
#define WID0_952   DU0|952,FLDSSTR /*! Save IMEI */
#define WID0_953   DU0|953,FLDS1(TS32) /*! Update IMEI %d */
#define WID0_954   DU0|954,FLDSSTR /*! Write IMEI */
#define WID0_955   DU0|955,FLDSSTR /*! IMEI Updated */
#define WID0_956   DU0|956,FLDS2(TSTR,TSTR) /*! SIM CHANGE: Old IMSI: %s; New IMSI: %s */
#define WID0_957   DU0|957,FLDS1(TSTR) /*! SIM ICID: %s */
#define WID0_958   DU0|958,FLDS1(TSTR) /*! Update SCA 1 to: %s */
#define WID0_959   DU0|959,FLDSSTR /*! Unlock FLASH */
#define WID0_960   DU0|960,FLDSSTR /*! Write SMSC */
#define WID0_961   DU0|961,FLDSSTR /*! Lock FLASH */
#define WID0_962   DU0|962,FLDSSTR /*! Update complete */
#define WID0_963   DU0|963,FLDSSTR /*! SMSC in SCA1 valid */
#define WID0_964   DU0|964,FLDS1(TSTR) /*! Clip ID: %s is Control Call ID. Hanging up !! */
#define WID0_965   DU0|965,FLDS1(TS32) /*! Remaining %u */
#define WID0_966   DU0|966,FLDSSTR /*! Datacall Message Corrupt */
#define WID0_967   DU0|967,FLDSSTR /*! POWER UP TELIT MODULE COMPLETE */
#define WID0_968   DU0|968,FLDSSTR /*! MODEM LOCKOUT ACTIVE */
#define WID0_969   DU0|969,FLDSSTR /*! Wait state exiting. */
#define WID0_970   DU0|970,FLDS4(TS32,TS32,TS32,TS32) /*! APP ERROR: NetDEREG: MdmCME:%u Tsk:%X||SktCME:%u Tsk:%X */
#define WID0_971   DU0|971,FLDS1(TS32) /*! INVALID TEST: %u */
#define WID0_972   DU0|972,FLDSSTR /*! CDMA Modem RESET -- Switch off */
#define WID0_973   DU0|973,FLDSSTR /*! CDMA POWER CYCLE */
#define WID0_974   DU0|974,FLDSSTR /*! Socket Close Detected */
#define WID0_975   DU0|975,FLDS4(TS32,TS32,TS32,TS32) /*! Data Length Field: %u; Buffer Length: %u, Diff: %u, UART: %u */
#define WID0_976   DU0|976,FLDSSTR /*! ANSWERING INCOMING DATA CALL !! */
#define WID0_977   DU0|977,FLDSSTR /*! Email Send Process Started */
#define WID0_978   DU0|978,FLDSSTR /*! Ftp Send Process Started */
#define WID0_979   DU0|979,FLDS1(TU32) /*! APNACT: Activation Standoff Active: %u seconds */
#define WID0_980   DU0|980,FLDS4(TU32,TU32,TU32,TU32) /*! APNACT LAC/CID Chnge: LAC: %04X to %04X; CID: %04X to %04X */
#define WID0_981   DU0|981,FLDS1(TU32) /*! RSSI out of bounds for APN activation: %u */
#define WID0_982   DU0|982,FLDSSTR /*!  *** SUSPENDING ACTIVE SOCKET *** */
#define WID0_983   DU0|983,FLDSSTR /*!  *** SUSPENDING PRIMARY SOCKET *** */
#define WID0_984   DU0|984,FLDSSTR /*!  *** TEARING DOWN MPROFILER SOCKET *** */
#define WID0_985   DU0|985,FLDSSTR /*!  *** SUSPENDING AUX SOCKET *** */
#define WID0_986   DU0|986,FLDSSTR /*!  *** TEARING DOWN AUXILLIARY SOCKET *** */
#define WID0_987   DU0|987,FLDSSTR /*! FTP OPEN */
#define WID0_988   DU0|988,FLDSSTR /*! FTP FILE READY FOR WRITING */
#define WID0_989   DU0|989,FLDSSTR /*! FTP ENDING WRITE */
#define WID0_990   DU0|990,FLDSSTR /*! FTP CLOSE */
#define WID0_991   DU0|991,FLDSSTR /*! Email Send Process Finished */
#define WID0_992   DU0|992,FLDSSTR /*! Wait state exiting. */
#define WID0_993   DU0|993,FLDSSTR /*! EMAIL RETRY */
#define WID0_994   DU0|994,FLDSSTR /*! DETECTED INCOMING DATA CALL !! */
#define WID0_995   DU0|995,FLDS2(TU32,TU32) /*! Socket SRING Received for Channel: %u, Databuffer: %u */
#define WID0_996   DU0|996,FLDSSTR /*! APN Standoff Reset */
#define WID0_997   DU0|997,FLDSSTR /*! UDP 81 Message Received */
#define WID0_998   DU0|998,FLDSSTR /*! GPRS MESSAGE QUEUED */
#define WID0_999   DU0|999,FLDSSTR /*! GPRS MESSAGE DESTROYED <Could not be Queued> */
#define WID0_1000  DU0|1000,FLDSSTR /*! GPRS MESSAGE QUEUE FULL */
#define WID0_1001  DU0|1001,FLDS4(TU32,TU32,TU32,TU32) /*! FWMAJ: %u, FWMIN:%u; PC: %u; ECnt: %u */
#define WID0_1002  DU0|1002,FLDS3(TU32,TU32,TU32) /*! Ping: SessT: %u, CT: %u; NT: %u */
#define WID0_1003  DU0|1003,FLDSSTR /*! CRC ERR */
#define WID0_1004  DU0|1004,FLDSSTR /*! CRC Err */
#define WID0_1005  DU0|1005,FLDSSTR /*! EncCRC ERR */
#define WID0_1006  DU0|1006,FLDS1(TU32) /*! New Sess Time: %u */
#define WID0_1007  DU0|1007,FLDS1(TU32) /*! Server Time: Diff - %ds */
#define WID0_1008  DU0|1008,FLDS3(TU32,TU32,TU32) /*! ACK RX; Seq: %u; EC: %u; NT: %u */
#define WID0_1009  DU0|1009,FLDS2(TU32,TU32) /*! Msg ACK'd. ID: %u, Cnt: %u */
#define WID0_1010  DU0|1010,FLDS1(TU32) /*! SeqNum ERR: %u */
#define WID0_1011  DU0|1011,FLDS1(TU32) /*! EC: %u */
#define WID0_1012  DU0|1012,FLDS2(TU32,TU32) /*! Rx CRC ERROR!! Rx CRC: %X; Calc CRC: %X */
#define WID0_1013  DU0|1013,FLDS1(TU32) /*! Latency -- %u */
#define WID0_1014  DU0|1014,FLDS1(TU32) /*! Invalid Test %u */
#define WID0_1015  DU0|1015,FLDS1(TU32) /*! GPRS Send: %u  */
#define WID0_1016  DU0|1016,FLDS2(TU32,TU32) /*! GPRS Receive: %u : Buffer Length: %u  */
#define WID0_1017  DU0|1017,FLDSSTR /*! GPRS Receive: Full 81 Message */
#define WID0_1018  DU0|1018,FLDSSTR /*! GPRS Receive: 81 Message Routed  */
#define WID0_1019  DU0|1019,FLDSSTR /*! Set Flow Control (Data TO SP): XOFF */
#define WID0_1020  DU0|1020,FLDSSTR /*! Set Flow Control (Data TO SP): XON */
#define WID0_1021  DU0|1021,FLDS1(TU32) /*! Received Full Buffer: %u  */
#define WID0_1022  DU0|1022,FLDSSTR /*! Set Flow Control (Data FROM SP): XOFF */
#define WID0_1023  DU0|1023,FLDSSTR /*! Set Flow Control (Data FROM SP): XON */
#define WID0_1024  DU0|1024,FLDSSTR /*!  */
#define WID0_1025  DU0|1025,FLDSSTR /*!  */
#define WID0_1026  DU0|1026,FLDS3(TU32,TU32,TU32) /*! Lat: %d, Long: %d, Error: %u */
#define WID0_1027  DU0|1027,FLDSSTR /*!  */
#define WID0_1028  DU0|1028,FLDSSTR /*!  */
#define WID0_1029  DU0|1029,FLDSSTR /*!  */
#define WID0_1030  DU0|1030,FLDSSTR /*!  */
#define WID0_1031  DU0|1031,FLDS3(TU32,TU32,TU32) /*! Lat: %d, Long: %d, Error: %u */
#define WID0_1032  DU0|1032,FLDS3(TU32,TU32,TU32) /*! Lat: %d, Long: %d, Error: %u */
#define WID0_1033  DU0|1033,FLDSSTR /*! INVALID GSM POSITIONING PROVIDER */
#define WID0_1034  DU0|1034,FLDSSTR /*! INVALID GSM POSITIONING PROVIDER */
#define WID0_1035   DU0|1035,FLDSSTR /*! Updating Wifi Module Parameters */
#define WID0_1036   DU0|1036,FLDSSTR /*! Enable / Disable Webuser Interface */
#define WID0_1037   DU0|1037,FLDSSTR /*! Updating SSID / PASSPHRASE  */
#define WID0_1038   DU0|1038,FLDSSTR /*! FORCE PSD ACTIVATION  */
#define WID0_1039   DU0|1039,FLDSSTR /*! Update WiFi Maximum Transmission Power */
#define WID0_1040   DU0|1040,FLDSSTR /*! Deactivate Wifi. Will turn back on if enabled */
#define WID0_1041   DU0|1041,FLDS1(TU32) /*! Wifi Scan Enable: %u */
#define WID0_1042   DU0|1042,FLDS1(TU32) /*! Update Band Selection %u */
#define WID0_1043   DU0|1043,FLDSSTR /*! FTP Download: %s%s */
#define WID0_1044   DU0|1044,FLDS1(TU32) /*! FORCE STATE: 0x%04X */
#define WID0_1045   DU0|1045,FLDSSTR /*! Initialisation Call */
#define WID0_1046   DU0|1046,FLDS3(TSTR,TSTR,TSTR) /*! Email Queued: %s %s %s */
#define WID0_1047   DU0|1047,FLDSSTR /*! Email could not be queued. */
#define WID0_1048   DU0|1048,FLDSSTR /*! MP URL is: IP */
#define WID0_1049   DU0|1049,FLDSSTR /*! MP URL is INVALID */
#define WID0_1050   DU0|1050,FLDSSTR /*! MP URL is Valid. DNS lookup will be performed */
#define WID0_1051   DU0|1051,FLDSSTR /*! MESSAGE DESTROYED */
#define WID0_1052   DU0|1052,FLDSSTR /*! AUTO ANSWER */
#define WID0_1053   DU0|1053,FLDSSTR /*! MESSAGE DESTROYED */
#define WID0_1054   DU0|1054,FLDS2(TU32,TSTR) /*! NewBaud: %u, Flow: %s */
#define WID0_1055   DU0|1055,FLDS3(TSTR,TSTR,TU32) /*! %s, IP: %s,  Port: %u */
#define WID0_1056   DU0|1056,FLDS1(TU32) /*! MODEM NOT IDENTIFIED: %u */
#define WID0_1057   DU0|1057,FLDSSTR /*! COLD MODEM POWER UP SEQUENCE */
#define WID0_1058   DU0|1058,FLDSSTR /*! MODEM REGULATOR ON */
#define WID0_1059   DU0|1059,FLDSSTR /*! REGULATOR SLEW ON */
#define WID0_1060   DU0|1060,FLDSSTR /*! MODEM ON  */
#define WID0_1061   DU0|1061,FLDSSTR /*! MODEM ON POWERPIN TOGGLE START */
#define WID0_1062   DU0|1062,FLDSSTR /*! MODEM POWERPIN TOGGLE COMPLETE */
#define WID0_1063   DU0|1063,FLDSSTR /*! MODEM RESET */
#define WID0_1064   DU0|1064,FLDSSTR /*! MODEM RESET RELEASE */
#define WID0_1065   DU0|1065,FLDSSTR /*! MODEM REGULATOR OFF */
#define WID0_1066   DU0|1066,FLDS1(TU32) /*! MODEM PRE POWEROFF WAIT: %u */
#define WID0_1067   DU0|1067,FLDSSTR /*! MODEM OFF POWER PIN TOGGLE START */
#define WID0_1068   DU0|1068,FLDSSTR /*! MODEM OFF POWER PIN TOGGLE COMPLETE */
#define WID0_1069   DU0|1069,FLDS1(TU32) /*! MODEM PRE POWEROFF WAIT: %u */
#define WID0_1070   DU0|1070,FLDSSTR /*! COLD MODEM POWER UP SEQUENCE */
#define WID0_1071   DU0|1071,FLDSSTR /*! MODEM POWERUP COMPLETE */
#define WID0_1072   DU0|1072,FLDSSTR /*! MODEM RESET */
#define WID0_1073   DU0|1073,FLDSSTR /*! MODEM RESET RELEASE */
#define WID0_1074   DU0|1074,FLDSSTR /*! MODEM REGULATOR OFF */
#define WID0_1075   DU0|1075,FLDS1(TU32) /*! MODEM PRE POWEROFF WAIT: %u */
#define WID0_1076   DU0|1076,FLDS1(TU32) /*! MODEM PRE POWEROFF WAIT: %u */
#define WID0_1077   DU0|1077,FLDS2(TSTR,TSTR) /*! Whitelist ID: %s Incoming: %s */
#define WID0_1078   DU0|1078,FLDS2(TSTR,TSTR) /*! Clip ID: %s WL ID: %s */
#define WID0_1079   DU0|1079,FLDS1(TU32) /*! LUHN Check Failure: %u */
#define WID0_1080   DU0|1080,FLDSSTR /*! Save IMEI */
#define WID0_1081   DU0|1081,FLDS1(TU32) /*! Update IMEI %d */
#define WID0_1082   DU0|1082,FLDSSTR /*! Unlock FLASH */
#define WID0_1083   DU0|1083,FLDSSTR /*! Write IMEI */
#define WID0_1084   DU0|1084,FLDSSTR /*! Lock FLASH */
#define WID0_1085   DU0|1085,FLDSSTR /*! IMEI Updated */
#define WID0_1086   DU0|1086,FLDS2(TSTR,TSTR) /*! SIM CHANGE: Old IMSI: %s; New IMSI: %s */
#define WID0_1087   DU0|1087,FLDS1(TSTR) /*! SIM ICID: %s */
#define WID0_1088   DU0|1088,FLDS1(TU32) /*! Remaining %u */
#define WID0_1089   DU0|1089,FLDS1(TSTR) /*! Update SCA 1 to: %s */
#define WID0_1090   DU0|1090,FLDSSTR /*! Unlock FLASH */
#define WID0_1091   DU0|1091,FLDSSTR /*! Write SMSC */
#define WID0_1092   DU0|1092,FLDSSTR /*! Lock FLASH */
#define WID0_1093   DU0|1093,FLDSSTR /*! Update complete */
#define WID0_1094   DU0|1094,FLDSSTR /*! SMSC in SCA1 valid */
#define WID0_1095   DU0|1095,FLDSSTR /*! STARTING IVR SEQUENCE */
#define WID0_1096   DU0|1096,FLDSSTR /*! Updating PIN */
#define WID0_1097   DU0|1097,FLDS1(TU32) /*! Standoff Active %u */
#define WID0_1098   DU0|1098,FLDS1(TU32) /*! Standoff Active %u */
#define WID0_1099   DU0|1099,FLDS1(TU32) /*! LUHN Check Failure: %u */
#define WID0_1100   DU0|1100,FLDSSTR /*! Save IMEI */
#define WID0_1101   DU0|1101,FLDS1(TU32) /*! Update IMEI %d */
#define WID0_1102   DU0|1102,FLDSSTR /*! Unlock FLASH */
#define WID0_1103   DU0|1103,FLDSSTR /*! Write IMEI */
#define WID0_1104   DU0|1104,FLDSSTR /*! Lock FLASH */
#define WID0_1105   DU0|1105,FLDSSTR /*! IMEI Updated */
#define WID0_1106   DU0|1106,FLDSSTR /*! Updating PIN */
#define WID0_1107   DU0|1107,FLDSSTR /*! Init Fin */
#define WID0_1108   DU0|1108,FLDS3(TU32,TU32,TU32) /*! Wifi Activation Still busy: %us, PsdStat: %u, Cntxt: %u */
#define WID0_1109   DU0|1109,FLDS3(TU32,TU32,TU32) /*! Rsp: %u, RIE: %u, EC: %u */
#define WID0_1110   DU0|1110,FLDS1(TU32) /*! Rsp: %u */
#define WID0_1111   DU0|1111,FLDSSTR /*! Not 81. Post Text. */
#define WID0_1112   DU0|1112,FLDSSTR /*! Email Address / User Invalid */
#define WID0_1113   DU0|1113,FLDSSTR /*! File upload details invalid */
#define WID0_1114   DU0|1114,FLDS1(TU32) /*! Exiting Wait: %02X */
#define WID0_1115   DU0|1115,FLDS1(TU32) /*! SendAscii_2: %02X */
#define WID0_1116   DU0|1116,FLDS1(TSTR) /*! SendAscii %s */
#define WID0_1117   DU0|1117,FLDSSTR /*! No SMS at index */
#define WID0_1118   DU0|1118,FLDSSTR /*!  */
#define WID0_1119   DU0|1119,FLDS2(TSTR,TSTR) /*! Exp: %s ; Seen: %s */
#define WID0_1120   DU0|1120,FLDSSTR /*! APN Correct */
#define WID0_1121   DU0|1121,FLDSSTR /*! APN INCORRECT */
#define WID0_1122   DU0|1122,FLDSSTR /*!  */
#define WID0_1123   DU0|1123,FLDSSTR /*!  */
#define WID0_1124   DU0|1124,FLDS2(TU32,TU32) /*! Exp: %u ; Seen: %u */
#define WID0_1125   DU0|1125,FLDSSTR /*!  */
#define WID0_1126   DU0|1126,FLDS2(TU32,TU32) /*! Expected WebUI Status: %u ; Actual: %u */
#define WID0_1127   DU0|1127,FLDSSTR /*!  */
#define WID0_1128   DU0|1128,FLDS2(TU32,TU32) /*! Expected Wifi Status: %u ; Actual: %u */
#define WID0_1129   DU0|1129,FLDSSTR /*!  */
#define WID0_1130   DU0|1130,FLDSSTR /*!  */
#define WID0_1131   DU0|1131,FLDS8(TSTR,TSTR,TU32,TU32,TU32,TU32,TU32,TU32) /*! %s, %s, OP: %u, CH: %u, RSSI: %d, AUTH: %02X, UNI: %02X, GRPC: %02X\n */
#define WID0_1132   DU0|1132,FLDS8(TSTR,TSTR,TU32,TU32,TU32,TU32,TU32,TU32) /*! %s, %s, OP: %u, CH: %u, RSSI: %d, AUTH: %02X, UNI: %02X, GRPC: %02X\n */
#define WID0_1133   DU0|1133,FLDSSTR /*!  */
#define WID0_1134   DU0|1134,FLDS1(TU32) /*! PID: %u */
#define WID0_1135   DU0|1135,FLDS1(TSTR) /*! PSD and Context Active: %s */
#define WID0_1136   DU0|1136,FLDSSTR /*! SMTP CONNECT */
#define WID0_1137   DU0|1137,FLDSSTR /*! SMTP TRANSMIT */
#define WID0_1138   DU0|1138,FLDSSTR /*! SMTP DISCONNECT */
#define WID0_1139   DU0|1139,FLDS2(TU32,TU32) /*! FTP Cmd: %u, Status %u */
#define WID0_1140   DU0|1140,FLDSSTR /*! FTP connected */
#define WID0_1141   DU0|1141,FLDSSTR /*! FTP Closed */
#define WID0_1142   DU0|1142,FLDSSTR /*! FTP Download Fail */
#define WID0_1143   DU0|1143,FLDSSTR /*! FTP Download Complete. */
#define WID0_1144   DU0|1144,FLDSSTR /*! FTP Data sent */
#define WID0_1145   DU0|1145,FLDSSTR /*! FTP Data send failure */
#define WID0_1146   DU0|1146,FLDSSTR /*! FTP Dir Change Fail */
#define WID0_1147   DU0|1147,FLDS1(TU32) /*! Context Activation:  %u */
#define WID0_1148   DU0|1148,FLDS1(TSTR) /*! Profile 0 IP: %s */
#define WID0_1149   DU0|1149,FLDS0() /*! No IP. Profile Inactive. */
#define WID0_1150   DU0|1150,FLDS1(TSTR) /*! Prim IP  %s */
#define WID0_1151   DU0|1151,FLDSSTR /*!  */
#define WID0_1152   DU0|1152,FLDS1(TU32) /*! Setting: %u */
#define WID0_1153   DU0|1153,FLDS1(TU32) /*! Socket# %u */
#define WID0_1154   DU0|1154,FLDS1(TU32) /*! Primary Incoming: %u */
#define WID0_1155   DU0|1155,FLDS2(TU32,TU32) /*! Wifi Power Index %u, Setting: %u */
#define WID0_1156   DU0|1156,FLDS1(TU32) /*! Socket ID %u */
#define WID0_1157   DU0|1157,FLDSSTR /*!  */
#define WID0_1158   DU0|1158,FLDS2(TU32,TU32) /*! Incoming: %u, SZ: %u */
#define WID0_1159   DU0|1159,FLDS1(TU32) /*! Prim Socket ID: %u */
#define WID0_1160   DU0|1160,FLDS1(TU32) /*! Aux Socket ID: %u */
#define WID0_1161   DU0|1161,FLDS2(TU32,TU32) /*! Socket ID %u not allocated: CH: %04X */
#define WID0_1162   DU0|1162,FLDS1(TU32) /*! Unsupported SOCTL command %u */
#define WID0_1163   DU0|1163,FLDS1(TU32) /*! Channel: %u */
#define WID0_1164   DU0|1164,FLDS1(TSTR) /*! Resp not found: %s */
#define WID0_1165   DU0|1165,FLDS1(TSTR) /*! No parsable int: %s */
#define WID0_1166   DU0|1166,FLDS1(TSTR) /*! No parsable int: %s */
#define WID0_1167   DU0|1167,FLDSSTR /*!  */
#define WID0_1168   DU0|1168,FLDS1(TSTR) /*! FN: %s */
#define WID0_1169   DU0|1169,FLDS1(TSTR) /*! BandSelect: %s */
#define WID0_1170   DU0|1170,FLDSSTR /*!  */
#define WID0_1171   DU0|1171,FLDSSTR /*!  */
#define WID0_1172   DU0|1172,FLDSSTR /*!  */
#define WID0_1173   DU0|1173,FLDS1(TU32) /*! Value: %u */
#define WID0_1174   DU0|1174,FLDS2(TU32,TSTR) /*! Not Enough fields:%u, %s */
#define WID0_1175   DU0|1175,FLDS1(TSTR) /*! Resp not found: %s */
#define WID0_1176   DU0|1176,FLDS1(TSTR) /*! Unrec format: %s */
#define WID0_1177   DU0|1177,FLDSSTR /*! Updating PIN */
#define WID0_1178   DU0|1178,FLDS1(TU32) /*! SIM not ready. QSS Override. QSS: %u */
#define WID0_1179   DU0|1179,FLDS1(TU32) /*! SIM not ready for SMS read. QSS: %u */
#define WID0_1180   DU0|1180,FLDSSTR /*! Not 81. Post Text. */
#define WID0_1181   DU0|1181,FLDSSTR /*! Wait exiting. */
#define WID0_1182   DU0|1182,FLDSSTR /*! No SMS at index */
#define WID0_1183   DU0|1183,FLDSSTR /*! JDR: GSM JAMMING DETECTED */
#define WID0_1184   DU0|1184,FLDSSTR /*! JDR: GSM JAMMING Source out of Range */
#define WID0_1185   DU0|1185,FLDS2(TU32,TU32) /*! C-OPS format incorrect. Format: %u, COPS Status: %u */
#define WID0_1186   DU0|1186,FLDS1(TSTR) /*! Clip ID: %s is Control Call ID. Hanging up !! */
#define WID0_1187   DU0|1187,FLDSSTR /*! Datacall Message Corrupt */
#define WID0_1188   DU0|1188,FLDSSTR /*! POWER UP TELIT MODULE COMPLETE */
#define WID0_1189   DU0|1189,FLDSSTR /*! MODEM LOCKOUT ACTIVE */
#define WID0_1190   DU0|1190,FLDSSTR /*! Wait state exiting. */
#define WID0_1191   DU0|1191,FLDSSTR /*! ALERT: CMUX Shutdown for Telit Upgrade */
#define WID0_1192   DU0|1192,FLDSSTR /*! FOTA UPGRADE SUCCEEDED */
#define WID0_1193   DU0|1193,FLDSSTR /*! FOTA UPGRADE FAILURE */
#define WID0_1194   DU0|1194,FLDSSTR /*! FOTA UPGRADE COMPLETE */
#define WID0_1195   DU0|1195,FLDS4(TU32,TU32,TU32,TU32) /*! APP ERROR: NetDEREG: MdmCME:%u Tsk:%X||SktCME:%u Tsk:%X */
#define WID0_1196   DU0|1196,FLDSSTR /*! FOTA ALERT: Upgrade Request */
#define WID0_1197   DU0|1197,FLDSSTR /*! FOTA SIRF ALERT: Upgrade Request */
#define WID0_1198   DU0|1198,FLDSSTR /*! FOTA ALERT: AUTO Upgrade Request */
#define WID0_1199   DU0|1199,FLDSSTR /*! FOTA SIRF ALERT: AUTO Upgrade Request */
#define WID0_1200   DU0|1200,FLDSSTR /*! FOTA ALERT: Upgrade Request Answer timedout  */
#define WID0_1201   DU0|1201,FLDSSTR /*! FOTA ALERT: Upgrade In progress: Download Started */
#define WID0_1202   DU0|1202,FLDSSTR /*! FOTA SIRF ALERT: Upgrade In progress: Download Started */
#define WID0_1203   DU0|1203,FLDSSTR /*! FOTA ALERT: Upgrade In progress: Download Complete */
#define WID0_1204   DU0|1204,FLDSSTR /*! FOTA SIRF ALERT: Upgrade In progress: Download Complete */
#define WID0_1205   DU0|1205,FLDSSTR /*! FOTA ALERT: Upgrade failed */
#define WID0_1206   DU0|1206,FLDSSTR /*! FOTA SIRF ALERT: Upgrade failed */
#define WID0_1207   DU0|1207,FLDSSTR /*! FOTA ALERT: Upgrade Succeeded */
#define WID0_1208   DU0|1208,FLDSSTR /*! FOTA SIRF ALERT: Upgrade Succeeded */
#define WID0_1209   DU0|1209,FLDSSTR /*! FOTA ALERT: Module Registered for Upgrade */
#define WID0_1210   DU0|1210,FLDSSTR /*! FOTA ALERT: Module failed to Register for Upgrade */
#define WID0_1211   DU0|1211,FLDSSTR /*! FOTA ALERT: Module Provisioned for Upgrade */
#define WID0_1212   DU0|1212,FLDSSTR /*! FOTA ALERT: Server notified */
#define WID0_1213   DU0|1213,FLDSSTR /*! FOTA ALERT: Server notified of Success */
#define WID0_1214   DU0|1214,FLDSSTR /*! FOTA SIRF ALERT: Server notified of Success */
#define WID0_1215   DU0|1215,FLDSSTR /*! FOTA ALERT: Checking Fingerprints */
#define WID0_1216   DU0|1216,FLDSSTR /*! FOTA ALERT: Checking AGENT Fingerprints */
#define WID0_1217   DU0|1217,FLDSSTR /*! FOTA ALERT: Checking CODE Fingerprints */
#define WID0_1218   DU0|1218,FLDS1(TU32) /*! INVALID TEST: %u */
#define WID0_1219   DU0|1219,FLDSSTR /*! CDMA Modem RESET -- Switch off */
#define WID0_1220   DU0|1220,FLDSSTR /*! CDMA POWER CYCLE */
#define WID0_1221   DU0|1221,FLDSSTR /*! Socket Close Detected */
#define WID0_1222   DU0|1222,FLDS4(TU32,TU32,TU32,TU32) /*! Data Length Field: %u; Buffer Length: %u, Diff: %u, UART: %u */
#define WID0_1223   DU0|1223,FLDS4(TU32,TU32,TU32,TU32) /*! F:%d L:%d, F:%d L:%d */
#define WID0_1224   DU0|1224,FLDS4(TU32,TU32,TU32,TU32) /*! MEM GLOBAL: %d NV: %d ETH: %d USB: %d */
#define WID0_1225   DU0|1225,FLDS2(TU32,TU32) /*! BURST ACC: %d ADC: %d */
//</WARNING_IDS>
 
#endif // SCP_DBGWARNINGDEFINESDU0_H
