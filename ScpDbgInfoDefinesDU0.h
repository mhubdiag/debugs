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
#ifndef SCP_DBGINFODEFINESDU0_H
#define SCP_DBGINFODEFINESDU0_H

#include "Debug/ScpDbgCommon.h"

/***************************************************************************
Info Description ID Defines
****************************************************************************/
//<INFO_IDS>
// Info Debugs for Legacy User
#define IID0_0    DU0|0,FLDSSTR /*! Undefined */  
#define IID0_1    DU0|1,FLDS1(TU16) /*! Init BitBuffer at Page %d */
#define IID0_2    DU0|2,FLDS1(TU16) /*! BitBuffer at Page %d not formatted yet */
#define IID0_3    DU0|3,FLDS1(TU16) /*! BitBuffer at Page %d flushed */
#define IID0_4    DU0|4,FLDS1(TU16) /*! BitBuffer %d wrapped */
#define IID0_5    DU0|5,FLDS2(TU16,TS32) /*! BitBuffer %d Count = %d */
#define IID0_6    DU0|6,FLDS1(TU16) /*! BitBuffer %d wrapped */
#define IID0_7    DU0|7,FLDS8(TU16,TS32,TU16,TU16,TS32,TS32,TU16,TU8) /*! ADDR:%d, SVAL:%d, SCALE:%d, ECNT:%d, DT:%d, GF:%d, COUNT:%d, BLOCK:%d */
#define IID0_8    DU0|8,FLDS2(TU16,TS32) /*! BitBuffer %d Set Start Value to %d */
#define IID0_9    DU0|9,FLDS2(TU16,TS32) /*! BitBuffer %d Set Start Value to %d */
#define IID0_10   DU0|10,FLDSSTR /*! Initialize BitBuffers */
#define IID0_11   DU0|11,FLDS1(TSTR) /*! %s Initialized! */
#define IID0_12   DU0|12,FLDSSTR /*! Boot: COLD */
#define IID0_13   DU0|13,FLDSSTR /*! Boot: WARM */
#define IID0_14   DU0|14,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub837S FW Ver:%0.3d.%0.3d %s %s */
#define IID0_15   DU0|15,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub837S FW Ver:%0.3d.%0.3d %s %s */
#define IID0_16   DU0|16,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8377 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_17   DU0|17,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8377 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_18   DU0|18,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8376 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_19   DU0|19,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8376 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_20   DU0|20,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8464 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_21   DU0|21,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8464 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_22   DU0|22,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8463 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_23   DU0|23,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8463 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_24   DU0|24,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8462 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_25   DU0|25,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8462 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_26   DU0|26,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8375 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_27   DU0|27,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8375 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_28   DU0|28,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8374 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_29   DU0|29,FLDS4(TU8,TU8,TSTR,TSTR) /*! HW: MHub8374 FW Ver:%0.3d.%0.3d %s %s */
#define IID0_30   DU0|30,FLDS1(TS32) /*! MHub ON - Minute Count = %d */
#define IID0_31   DU0|31,FLDS1(TS32) /*! Ign ON - Minute Count = %d */
#define IID0_32   DU0|32,FLDS2(TS32,TS32) /*! UART4 Int: %d, UART2 Int: %d */
#define IID0_33   DU0|33,FLDS1(TS32) /*! CM:%duS */
#define IID0_34   DU0|34,FLDS1(TS32) /*! Timer Cnt: %d */
#define IID0_35   DU0|35,FLDS1(TS32) /*! Acc Samples:%dHz */
#define IID0_36   DU0|36,FLDS2(TS32) /*! Mem: %d Peak: %d */
#define IID0_37   DU0|37,FLDS5(TU16,TU16,TU16,TU16,TU8) /*! T: %d, H: %d, HP: %d, NP: %d, Env: %d */
#define IID0_38   DU0|38,FLDS7(TU16,TU16,TU16,TU16,TU8,TU8,TU8) /*! T: %d, H: %d, HP: %d, NP: %d, Env: %d, PDA_C: %d, PDA_H: %d */
#define IID0_39   DU0|39,FLDSSTR /*! START AES */
#define IID0_40   DU0|40,FLDS1(TS32) /*! END AES %d */
#define IID0_41   DU0|41,FLDS1(TSTR) /*! HW: MHub8377 %s */
#define IID0_42   DU0|42,FLDS3(TS32,TS32,TS32) /*! 0x%0.8X 0x%0.8X 0x%0.8X */
#define IID0_43   DU0|43,FLDSSTR /*! OW TEMP GOOD */
#define IID0_44   DU0|44,FLDSSTR /*! OW TEMP BAD */
#define IID0_45   DU0|45,FLDS2(TU8,TU16) /*! Temp %d Read: %02d */
#define IID0_46   DU0|46,FLDS1(TSTR) /*! %s */
#define IID0_47   DU0|47,FLDS2(TS32,TS32) /*! GeoFences at Page %d: 0x%0.2X */
#define IID0_48   DU0|48,FLDS1(TS32) /*! Geo: Count %d */
#define IID0_49   DU0|49,FLDS2(TS32,TS32) /*! On Distance %d Radius %d */
#define IID0_50   DU0|50,FLDS2(TS32,TS32) /*! Distance %d Radius %d */
#define IID0_51   DU0|51,FLDS2(TS32,TS32) /*! Geo: Entering Shape-%d ID: 0x%0.4X */
#define IID0_52   DU0|52,FLDS3(TS32,TS32,TS32) /*! Geo: Inside Shape-%d ID: 0x%0.4X Type: %d */
#define IID0_53   DU0|53,FLDS2(TS32,TS32) /*! Geo: Exiting Shape-%d ID: 0x%0.4X */
#define IID0_54   DU0|54,FLDS1(TS32) /*! geoRec.pageCfg: 0x%0.2X */
#define IID0_55   DU0|55,FLDS1(TS32) /*! Scanning Polygon Geofence! ID: 0x%0.4X */
#define IID0_56   DU0|56,FLDS1(TS32) /*! Inside Polygon Geofence! ID: 0x%0.4X */
#define IID0_57   DU0|57,FLDS1(TS32) /*! Scanning Corridor Geofence! ID: 0x%0.4X */
#define IID0_58   DU0|58,FLDS1(TS32) /*! Inside Corridor Geofence! ID: 0x%0.4X */
#define IID0_59   DU0|59,FLDS1(TS32) /*! Scanning Polygon Geofence! ID: 0x%0.4X */
#define IID0_60   DU0|60,FLDS1(TS32) /*! Scanning Polygon Geofence! ID: 0x%0.4X */
#define IID0_61   DU0|61,FLDS1(TS32) /*! Inside Polygon Geofence! ID: 0x%0.4X */
#define IID0_62   DU0|62,FLDS1(TS32) /*! Inside Rectangle Geofence! ID: 0x%0.4X */
#define IID0_63   DU0|63,FLDS1(TS32) /*! Geo ID %d Within 5km */
#define IID0_64   DU0|64,FLDS1(TS32) /*! Inside Circle Geofence! ID: 0x%0.4X */
#define IID0_65   DU0|65,FLDS1(TS32) /*! Geo ID %d Within 5km */
#define IID0_66   DU0|66,FLDS1(TS32) /*! Geo StrtQ: %d  */
#define IID0_67   DU0|67,FLDS3(TS32,TS32,TS32) /*! Geo StrtQ: %d ScndTot: %d Scnd: %d */
#define IID0_68   DU0|68,FLDS2(TU32,TS32) /*! Geo StartIdx: %u Quick: %d */
#define IID0_69   DU0|69,FLDS1(TS32) /*! Geo Strtstd: %d  */
#define IID0_70   DU0|70,FLDS3(TS32,TS32,TS32) /*! Geo StrtStd: %d ScndTot: %d Scnd: %d */
#define IID0_71   DU0|71,FLDSSTR /*! Geoloc: Geoloc set */
#define IID0_72   DU0|72,FLDSSTR /*! Geoloc: Conditions not met, Geoloc Pending */
#define IID0_73   DU0|73,FLDS1(TS32) /*! Geo Count Time: %duS */
#define IID0_74   DU0|74,FLDS1(TS32) /*! Store GeoID %d */
#define IID0_75   DU0|75,FLDS1(TS32) /*! Item Count = %d */
#define IID0_76   DU0|76,FLDS4(TS32,TS32,TS32,TS32) /*! Geo Quick: %d Scan Q: %d Slow: %d GeoType:0x%0.4X */
#define IID0_77   DU0|77,FLDS1(TS32) /*! Updating Crc: 0x%0.4X */
#define IID0_78   DU0|78,FLDS1(TS32) /*! Updating Crc: 0x%0.4X */
#define IID0_79   DU0|79,FLDS3(TS32,TS32,TSTR) /*! Validating Crc: Clc 0x%0.4X : Rd 0x%0.4X %s */
#define IID0_80   DU0|80,FLDS1(TS32) /*! Erase 64K Block = %d */
#define IID0_81   DU0|81,FLDS2(TS32,TS32) /*! [AddBit] Item = %d, GeoOldBitBuf = %X */
#define IID0_82   DU0|82,FLDS2(TS32,TS32) /*! [BitCount]: Item = %d, GeoOldBitBuf = %X */
#define IID0_83   DU0|83,FLDS2(TSTR,TS32) /*! NinaHW: TX %s on UART[%d] */
#define IID0_84   DU0|84,FLDS1(TSTR) /*! NinaHW: RX %s */
#define IID0_85   DU0|85,FLDSSTR /*! NinaHW: Configuring */
#define IID0_86   DU0|86,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! I2C: %d ERROR: %d CR1: 0x%0.8X SR1: 0x%0.8X SR2: 0x%0.8X */
#define IID0_87   DU0|87,FLDS1(TS32) /*! AR Default CRC: 0x%0.2X */
#define IID0_88   DU0|88,FLDS1(TS32) /*! AR INIT: %d */
#define IID0_89   DU0|89,FLDS2(TS32,TS32) /*! CalcCRC: 0x%0.2X ARCRC: 0x%0.2X */
#define IID0_90   DU0|90,FLDSSTR /*! UPDATING AR STRUCTURE */
#define IID0_91   DU0|91,FLDSSTR /*! AR Structure Blank, Writing Defaults and skipping integrity check */
#define IID0_92   DU0|92,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Page Size: %d, NrPg: %d, NrRec: %d, NrBit: %d, TotRec: %d */
#define IID0_93   DU0|93,FLDS2(TS32,TS32) /*! PgIdx: %d RecIdx: %d */
#define IID0_94   DU0|94,FLDSSTR /*! Non Trip AR Record */
#define IID0_95   DU0|95,FLDS2(TS32,TS32) /*! PageAddr: %d PageOff: %d */
#define IID0_96   DU0|96,FLDS1(TS32) /*! AR: Log Wrapped: Erased Sector: %d */
#define IID0_97   DU0|97,FLDS1(TS32) /*! AR: Erased Sector: %d */
#define IID0_98   DU0|98,FLDS2(TS32,TS32) /*! Start Scan: %d %d */
#define IID0_99   DU0|99,FLDS2(TS32,TS32) /*! Record %d %d */
#define IID0_100   DU0|100,FLDS2(TS32,TS32) /*! End Scan %d %d */
#define IID0_101   DU0|101,FLDS2(TS32,TS32) /*! Addr: %d Val: 0x%0.2X */
#define IID0_102   DU0|102,FLDS4(TS32,TS32,TS32,TS32) /*! PgAddr: %d Inx: %d pageCount: %d loop: %d */
#define IID0_103   DU0|103,FLDS1(TS32) /*! AR: Response Received, Cmd = %d */
#define IID0_104   DU0|104,FLDS1(TS32) /*! SBS: Msg Sent OK, Msg Idx = %d */
#define IID0_105   DU0|105,FLDS1(TS32) /*! SBS: EOD Sent OK, Msg Idx = %d */
#define IID0_106   DU0|106,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Page Size: %d, NrPg: %d, NrRec: %d, NrBit: %d, TotRec: %d */
#define IID0_107   DU0|107,FLDS3(TS32,TS32,TS32) /*! Acc Raw X: %d Y: %d Z: %d */
#define IID0_108   DU0|108,FLDS1(TS32) /*! SBS: Msg Sent OK, Msg Idx = %d */
#define IID0_109   DU0|109,FLDS1(TS32) /*! SBS: EOD Sent OK, Msg Idx = %d */
#define IID0_110   DU0|110,FLDSSTR /*! Accident Log Event Generation Bypassed */
#define IID0_111   DU0|111,FLDS3(TS32,TS32,TS32) /*! Override Values: x = %d y = %d x = %d */
#define IID0_112   DU0|112,FLDS1(TS32) /*! Start Index: %d  */
#define IID0_113   DU0|113,FLDS4(TS32,TS32,TS32,TS32) /*! Nr of Values: %d x = %d y = %d x = %d */
#define IID0_114   DU0|114,FLDSSTR /*! Not Enough Entries */
#define IID0_115   DU0|115,FLDS3(TS32,TS32,TS32) /*! Override Values: x = %d y = %d x = %d */
#define IID0_116   DU0|116,FLDS1(TS32) /*! Start Index: %d  */
#define IID0_117   DU0|117,FLDS4(TS32,TS32,TS32,TS32) /*! Nr of Values: %d x = %d y = %d x = %d */
#define IID0_118   DU0|118,FLDSSTR /*! Not Enough Entries */
#define IID0_119   DU0|119,FLDS1(TS32) /*! AR AVG Index: %d  */
#define IID0_120   DU0|120,FLDS4(TS32,TS32,TS32,TS32) /*! AR CAL: X: %d Y:%d Z:%d cnt: %d */
#define IID0_121   DU0|121,FLDS4(TS32,TS32,TS32,TS32) /*! AR LEVEL: X: %d Y:%d Z:%d cnt: %d */
#define IID0_122   DU0|122,FLDS4(TS32,TS32,TS32,TS32) /*! AR ACCEL: X: %d Y:%d Z:%d cnt: %d */
#define IID0_123   DU0|123,FLDSSTR /*! Accident Log Erasure Initiated */
#define IID0_124   DU0|124,FLDS1(TS32) /*! Erase 64K Block = %d */
#define IID0_125   DU0|125,FLDSSTR /*! Accident Log Erasure Initiated */
#define IID0_126   DU0|126,FLDS1(TS32) /*! Erase Block = %d */
#define IID0_127   DU0|127,FLDS2(TS32,TS32) /*! SBS: Delta not Possible due to Time Shift %d %d */
#define IID0_128   DU0|128,FLDSSTR /*! SBS: Delta not Possible */
#define IID0_129   DU0|129,FLDSSTR /*! SBS: Delta not Possible */
#define IID0_130   DU0|130,FLDSSTR /*! SBS: Sending Short Frame in Journey Log due to Time Shift */
#define IID0_131   DU0|131,FLDSSTR /*! SBS: Sending Short trip in Journey Log */
#define IID0_132   DU0|132,FLDS2(TS32,TS32) /*! SBS: Msg Queued, Msg Idx = %d, Records = %d */
#define IID0_133   DU0|133,FLDS2(TS32,TS32) /*! SBS: Msg cound not be Queued, Trip Index = %d, Records = %d */
#define IID0_134   DU0|134,FLDSSTR /*! SBS: Trip Data Sent - Send EOD */
#define IID0_135   DU0|135,FLDS1(TS32) /*! SBS: Record Start at %d */
#define IID0_136   DU0|136,FLDS1(TS32) /*! SBS: Record Start at %d */
#define IID0_137   DU0|137,FLDS1(TS32) /*! SBS: Add Records: Continuing at %d */
#define IID0_138   DU0|138,FLDS1(TS32) /*! SBS: Empty Record at %d */
#define IID0_139   DU0|139,FLDS1(TS32) /*! SBS: Record at %d already Sent */
#define IID0_140   DU0|140,FLDS1(TS32) /*! SBS: Empty Record at %d */
#define IID0_141   DU0|141,FLDS2(TS32,TS32) /*! SBS: Add Record at %d, %d */
#define IID0_142   DU0|142,FLDS1(TS32) /*! SBS: Add Header Frame, Index = %d */
#define IID0_143   DU0|143,FLDSSTR /*! SBS: Need to add a Key Frame */
#define IID0_144   DU0|144,FLDS2(TS32,TS32) /*! SBS: Msg Len = %d, Delta Rec Size = %d */
#define IID0_145   DU0|145,FLDS3(TS32,TS32,TS32) /*! SBS: Records = %d, Index = %d, Time = %d */
#define IID0_146   DU0|146,FLDS2(TS32,TS32) /*! SBS: Enough Data. Message Length = %d, Rec Count = %d */
#define IID0_147   DU0|147,FLDS1(TS32) /*! SBS: Sending short trip or short end of trip in Journey Log: %d records */
#define IID0_148   DU0|148,FLDS1(TS32) /*! SBS: Last Frame - Can Send EOD, Index = %d */
#define IID0_149   DU0|149,FLDS2(TS32,TS32) /*! SBS: Msg Queued, Msg Idx = %d, Records = %d */
#define IID0_150   DU0|150,FLDS2(TS32,TS32) /*! SBS: Msg cound not be Queued, Trip Index = %d, Records = %d */
#define IID0_151   DU0|151,FLDS2(TS32,TS32) /*! SBS: Not enough data yet, Trip Index = %d, Records = %d */
#define IID0_152   DU0|152,FLDS3(TS32,TS32,TS32) /*! SBS: Msg NOT Full due to Time Shift, Records = %d, Length = %d, End Time = %d */
#define IID0_153   DU0|153,FLDS3(TS32,TS32,TS32) /*! SBS: Msg Full, Records = %d, Length = %d, End Time = %d */
#define IID0_154   DU0|154,FLDS1(TS32) /*! SBS: Max Loop Count = %d */
#define IID0_155   DU0|155,FLDS2(TS32,TS32) /*! SBS: Max Number of Records read per loop, MsgLen = %d, Records = %d */
#define IID0_156   DU0|156,FLDS2(TS32,TS32) /*! SBS: Last Frame - Can Send EOD, Records: %d, Index: %d */
#define IID0_157   DU0|157,FLDS2(TS32,TS32) /*! SBS: Not enough data yet, Trip Index = %d, Records = %d, Wait 60s before scanning again */
#define IID0_158   DU0|158,FLDS1(TS32) /*! SBS: Start Search at Idx = %d */
#define IID0_159   DU0|159,FLDS1(TS32) /*! SBS: Searching at Idx = %d */
#define IID0_160   DU0|160,FLDS1(TS32) /*! SBS: Empty Record at %d */
#define IID0_161   DU0|161,FLDS1(TS32) /*! SBS: Found Trip End at %d */
#define IID0_162   DU0|162,FLDS1(TS32) /*! SBS: Found Send Start at %d */
#define IID0_163   DU0|163,FLDS1(TS32) /*! SBS: Found EOD at %d */
#define IID0_164   DU0|164,FLDS1(TS32) /*! SBS: Partial: Found Send Start at %d */
#define IID0_165   DU0|165,FLDS1(TS32) /*! SBS: Found Trip Start at %d */
#define IID0_166   DU0|166,FLDSSTR /*! SBS: Log Wrapped */
#define IID0_167   DU0|167,FLDSSTR /*! SBS: Back at the beginning of the Log - Restart Search */
#define IID0_168   DU0|168,FLDS3(TS32,TS32,TS32) /*! SBS: Trip Start = %d, Trip End = %d, Send Start = %d */
#define IID0_169   DU0|169,FLDS1(TS32) /*! SBS: Update: EOD Sent %d */
#define IID0_170   DU0|170,FLDS1(TS32) /*! SBS: Update: Message Sent %d */
#define IID0_171   DU0|171,FLDS1(TS32) /*! SBS: Update: Message Queued %d */
#define IID0_172   DU0|172,FLDS1(TS32) /*! SBS: Update: Continuing at %d */
#define IID0_173   DU0|173,FLDS1(TS32) /*! SBS: On Sector Boundary at %d */
#define IID0_174   DU0|174,FLDS1(TS32) /*! SBS: Empty Record at %d */
#define IID0_175   DU0|175,FLDS3(TS32,TS32,TS32) /*! SBS: Update Record Sent, Index = %d, ID = %d, count = %d */
#define IID0_176   DU0|176,FLDS4(TS32,TS32,TS32,TS32) /*! SBS: Update Record Queued, Index = %d, ID = %d, count = %d, Page Offset = %d */
#define IID0_177   DU0|177,FLDS2(TS32,TS32) /*! SBS: %d Records Updated, ID = %d */
#define IID0_178   DU0|178,FLDSSTR /*! SBS: EOD Record Queued */
#define IID0_179   DU0|179,FLDSSTR /*! SBS: EOD Record could not be queued */
#define IID0_180   DU0|180,FLDS1(TS32) /*! SBS: State Machine: %d */
#define IID0_181   DU0|181,FLDSSTR /*! SBS: All Trip Data Sent. Send EOD */
#define IID0_182   DU0|182,FLDSSTR /*! SBS: Timeout wating for data response, send data again */
#define IID0_183   DU0|183,FLDSSTR /*! SBS: Timeout wating for EOD response, send EOD again */
#define IID0_184   DU0|184,FLDSSTR /*! SBS: Wait State Finished */
#define IID0_185   DU0|185,FLDS1(TU32) /*! lgth: %u */
#define IID0_186   DU0|186,FLDS1(TU32) /*! lgth: %u */
#define IID0_187   DU0|187,FLDS2(TS32,TS32) /*! Odometer: %d OdoStore: %d  */
#define IID0_188   DU0|188,FLDS4(TS32,TS32,TS32,TS32) /*! Odometer: %d OdoStore: %d OdoVal: %d OdoBit: %d */
#define IID0_189   DU0|189,FLDSSTR /*! Harsh Braking - Debounce */
#define IID0_190   DU0|190,FLDSSTR /*! Harsh Braking - Debounce Failed */
#define IID0_191   DU0|191,FLDSSTR /*! Harsh Braking - Monitoring */
#define IID0_192   DU0|192,FLDSSTR /*! Harsh Braking - Ended - Event Generation */
#define IID0_193   DU0|193,FLDSSTR /*! Harsh Acceleration - Debounce */
#define IID0_194   DU0|194,FLDSSTR /*! Harsh Acceleration - Debounce Failed */
#define IID0_195   DU0|195,FLDSSTR /*! Harsh Acceleration - Monitoring */
#define IID0_196   DU0|196,FLDSSTR /*! Harsh Acceleration - Ended - Event Generation */
#define IID0_197   DU0|197,FLDS5(TS32,TS32,TSTR,TSTR,TSTR) /*! SpeedFlt:%d Speed:%d Val:%s Old:%s Up:%s */
#define IID0_198   DU0|198,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! Cond1.1: %d ~ Cond1.2: %d ~ Cond1.3: %d ~ GPS Speed: %d ~ GPS Speed Accy: %d ~ GPS Speed Threshold: %d ~ GPS Status Valid: %d ~ 3D Lock Time: %d */
#define IID0_199   DU0|199,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Excessive Idle: %d ~ SpeedOk: %d ~ Ignition State: %d ~ OBC Speed: %dkm/h ~ Stationary Time: %d ~ Stationary: %d */
#define IID0_200   DU0|200,FLDS1(TS32) /*! distCalc: %d */
#define IID0_201   DU0|201,FLDS2(TS32,TS32) /*! Odo: %d %d */
#define IID0_202   DU0|202,FLDS2(TS32,TS32) /*! Odo: %d %d */
#define IID0_203   DU0|203,FLDS2(TS32,TS32) /*! Odo: %d %d */
#define IID0_204   DU0|204,FLDSSTR /*! Updating Odo 100m Bits */
#define IID0_205   DU0|205,FLDSSTR /*! Updating Odo 100m Bits */
#define IID0_206   DU0|206,FLDS1(TS32) /*! Unplug St: %d */
#define IID0_207   DU0|207,FLDS2(TS32,TS32) /*! USB:0x%0.8X ETH:0x%0.8X */
#define IID0_208   DU0|208,FLDS1(TS32) /*! Odometer: %d  */
#define IID0_209   DU0|209,FLDS3(TS32,TS32,TS32) /*! Odometer: %d OdoStore: %d OdoBit: %d */
#define IID0_210   DU0|210,FLDS1(TS32) /*! Odometer: %d  */
#define IID0_211   DU0|211,FLDS1(TS32) /*! Speeding Dur: %d (10mS) */
#define IID0_212   DU0|212,FLDS4(TS32,TS32,TS32,TS32) /*! SPD: %d RPM: %d IDLE: %d FREEW: %d */
#define IID0_213   DU0|213,FLDS3(TS32,TS32,TS32) /*! Odometer: %d OdoStore: %d OdoBit: %d */
#define IID0_214   DU0|214,FLDS2(TS32,TS32) /*! Odo: %d Calc: %d */
#define IID0_215   DU0|215,FLDS2(TS32,TS32) /*! ACC TOT: %d, SAMPLES: %d */
#define IID0_216   DU0|216,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! IGN - LIN:%d V:%d (%d) dV:%d (%d) ACC:%d (%d) GPS:%d SPD:%d RPM:%d GEO:%d TRG:%d CAN:%d ALT: %d */
#define IID0_217   DU0|217,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS3(TS32,TS32,TS32) /*! LIN: %d V: %d dV: %d ACC: %d GPS: %d SPD: %d RPM: %d GEO: %d TRG: %d CAN: %d */
#define IID0_218   DU0|218,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! TRP - LIN:%d V:%d (%d) dV:%d ACC:%d GPS:%d SPD:%d RPM:%d GEO:%d TRG:%d CAN:%d ALT:%d TRP On:%d Off:%d */
#define IID0_219   DU0|219,FLDS1(TS32) /*! Service Odometer: %dm */
#define IID0_220   DU0|220,FLDS1(TS32) /*! Fuel Rate: %duL/s */
#define IID0_221   DU0|221,FLDS1(TS32) /*! Fuel Level: %dL */
#define IID0_222   DU0|222,FLDS1(TS32) /*! Fuel Remaining: %dL */
#define IID0_223   DU0|223,FLDSSTR /*! AD: Initialize */
#define IID0_224   DU0|224,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! AD Data: %d,%d,%d,%d,%d,%d,%d,%d */
#define IID0_225   DU0|225,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Possible accident at t=%dms with impact of %d Gs at an angle of %d degrees, Probability = %d, Severity = %d */
#define IID0_226   DU0|226,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Values used for calculation: Vbefore = %d, Vafter = %d, Rmax = %d, RboxMax = %d, Max Displacement = %d */
#define IID0_227   DU0|227,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! Calculated Parameters: AS = %d, SUS = %d, HAP = %d, SAP = %d, SSP = %d, BFMF = %d, DMV = %d, BDP = %d, Sum = %d */
#define IID0_228   DU0|228,FLDS1(TS32) /*! Input 1 Cycles: %d */
#define IID0_229   DU0|229,FLDS1(TS32) /*! Input 2 Cycles: %d */
#define IID0_230   DU0|230,FLDS1(TS32) /*! Input 1 Cycles: %d */
#define IID0_231   DU0|231,FLDS1(TS32) /*! Input 2 Cycles: %d */
#define IID0_232   DU0|232,FLDS3(TS32,TS32,TS32) /*! ADC %d AVE: %d NEW: %d */
#define IID0_233   DU0|233,FLDS3(TS32,TS32,TS32) /*! ADC %d AVE: %d NEW: %d */
#define IID0_234   DU0|234,FLDS4(TS32,TS32,TS32,TS32) /*! ADC %d AVE: %d NEW: %d Samples: %d */
#define IID0_235   DU0|235,FLDS3(TS32,TS32,TS32) /*! ADC %d AVE: %d NEW: %d */
#define IID0_236   DU0|236,FLDS2(TS32,TS32) /*! ADC[0]: %d, Weight: %d */
#define IID0_237   DU0|237,FLDS1(TS32) /*! DRV LENGTH %d */
#define IID0_238   DU0|238,FLDSSTR /*! BLE SKT RX */
#define IID0_239   DU0|239,FLDS3(TSTR,TS32,TSTR) /*! BLESW: Disc %s, RSSI: %d dBm, Name: %s */
#define IID0_240   DU0|240,FLDS2(TSTR,TS32) /*! BLESW: %s Type %d */
#define IID0_241   DU0|241,FLDS3(TSTR,TS32,TSTR) /*! BLESW: %s, RSSI: %d dBm, Name: %s */
#define IID0_242   DU0|242,FLDS2(TSTR,TS32) /*! BLESW: %s(%d) -> DTL */
#define IID0_243   DU0|243,FLDS3(TSTR,TS32,TS32) /*! BLESW: RC10[%s] RSSI=%d Btns=%X */
#define IID0_244   DU0|244,FLDS6(TSTR,TS32,TS32,TS32,TS32,TS32) /*! BLESW: ET90[%s] RSSI=%d Tmp=%d.%d Hmdty=%d.%d */
#define IID0_245   DU0|245,FLDS4(TSTR,TS32,TS32,TS32) /*! BLESW: TPMS[%s] RSSI=%d Tmp=%d PSI=%d */
#define IID0_246   DU0|246,FLDS4(TSTR,TS32,TS32,TS32) /*! BLESW: IM20/1/4[%s] RSSI=%d T=%d A=%d */
#define IID0_247   DU0|247,FLDS2(TSTR,TS32) /*! BLESW: AT Dev[%s] RSSI=%d */
#define IID0_248   DU0|248,FLDS1(TS32) /*! BLESW: Scan Done, RXd %d adverts */
#define IID0_249   DU0|249,FLDSSTR /*! BLESW: Load Device List into RAM */
#define IID0_250   DU0|250,FLDS2(TS32,TS32) /*! BLESW: TL[%d] = F[%d] */
#define IID0_251   DU0|251,FLDS2(TS32,TS32) /*! BLESW: TL[%d] x F[%d] */
#define IID0_252   DU0|252,FLDS1(TS32) /*! ScpCMFindEvent = %d */
#define IID0_253   DU0|253,FLDS1(TS32) /*! ScpCMFindEvent = %d */
#define IID0_254   DU0|254,FLDS2(TS32,TS32) /*! Event ID: %d added; %d in packet */
#define IID0_255   DU0|255,FLDS2(TS32,TS32) /*! Pages HP: %d NP: %d */
#define IID0_256   DU0|256,FLDS4(TS32,TS32,TS32,TS32) /*! Event Count: %d, Tail: %d,EvtIdx: %d, lastIdx: %d */
#define IID0_257   DU0|257,FLDS1(TS32) /*! NP Events: %d Queued */
#define IID0_258   DU0|258,FLDS3(TS32,TS32,TS32) /*! Event Count: %d, Tail: %d, lastIdx: %d */
#define IID0_259   DU0|259,FLDS3(TS32,TS32,TS32) /*! Event Count: %d, Tail: %d, lastIdx: %d */
#define IID0_260   DU0|260,FLDS1(TS32) /*! HP Events: %d Queued */
#define IID0_261   DU0|261,FLDS1(TS32) /*! HP Events: %d Not Queued */
#define IID0_262   DU0|262,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32), FLDS2(TS32,TS32) /*! [SMS: T = %d, H = %d, HP = %d],[GPRS: T = %d, H = %d, HP = %d], [IRIDIUM: T = %d, H = %d, HP = %d] */
#define IID0_263   DU0|263,FLDS2(TS32,TS32) /*! Count= %d, StartIdx = %d */
#define IID0_264   DU0|264,FLDS2(TS32,TS32) /*! CFG CRC: 0x%0.4X CALC: 0x%0.4X */
#define IID0_265   DU0|265,FLDSSTR /*! Check if Status Section need to be persisted */
#define IID0_266   DU0|266,FLDS2(TS32,TS32) /*! Status Persist CRC:0x%0.4X OLD:0x%0.4X */
#define IID0_267   DU0|267,FLDSSTR /*! Check if Config Section need to be persisted */
#define IID0_268   DU0|268,FLDS2(TS32,TS32) /*! Config Persist CRC:0x%0.4X OLD:0x%0.4X */
#define IID0_269   DU0|269,FLDSSTR /*! CSTM Init */
#define IID0_270   DU0|270,FLDSSTR /*! CSTM Init */
#define IID0_271   DU0|271,FLDS1(TS32) /*! Key Pressed: %d */
#define IID0_272   DU0|272,FLDS1(TS32) /*! Key Pressed: %d */
#define IID0_273   DU0|273,FLDSSTR /*! Red LEDs Set - OK */
#define IID0_274   DU0|274,FLDSSTR /*! Green LEDs Set - OK */
#define IID0_275   DU0|275,FLDSSTR /*! Sound Generation - OK */
#define IID0_276   DU0|276,FLDSSTR /*! Stopper Command - OK */
#define IID0_277   DU0|277,FLDS2(TS32,TSTR) /*! DrvID: %d (%s) */
#define IID0_278   DU0|278,FLDS1(TS32) /*! VIN L: %d */
#define IID0_279   DU0|279,FLDS1(TS32) /*! VRN L: %d */
#define IID0_280   DU0|280,FLDS1(TS32) /*! cIS1 L: %d */
#define IID0_281   DU0|281,FLDS1(TS32) /*! cIS2 L: %d */
#define IID0_282   DU0|282,FLDS2(TS32,TS32) /*!  CSCalc: 0x%0.2X CS: 0x%0.2X */
#define IID0_283   DU0|283,FLDS4(TS32,TS32,TS32,TS32) /*! TCO: 0x%0.2X0x%0.2X0x%0.2X0x%0.2X */
#define IID0_284   DU0|284,FLDS1(TS32) /*! SPD: %d */
#define IID0_285   DU0|285,FLDS1(TS32) /*! DIST: %d */
#define IID0_286   DU0|286,FLDS1(TS32) /*! TRP DIST: %d */
#define IID0_287   DU0|287,FLDS1(TS32) /*! RPM: %d */
#define IID0_288   DU0|288,FLDS4(TS32,TS32,TS32,TS32) /*! TCO: 0x%0.2X0x%0.2X0x%0.2X0x%0.2X */
#define IID0_289   DU0|289,FLDS1(TS32) /*! Dist: %d */
#define IID0_290   DU0|290,FLDS1(TS32) /*! MSG Length: %d */
#define IID0_291   DU0|291,FLDS2(TS32,TS32) /*! CS CALC: 0x%0.2X MSG: 0x%0.2X */
#define IID0_292   DU0|292,FLDS1(TSTR) /*! RFID: %s */
#define IID0_293   DU0|293,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! RFID: 0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X */
#define IID0_294   DU0|294,FLDS1(TS32) /*! DataByte: 0x%0.2X */
#define IID0_295   DU0|295,FLDSSTR /*! ERM BackLight OFF */
#define IID0_296   DU0|296,FLDSSTR /*! ERM BackLight ON */
#define IID0_297   DU0|297,FLDS1(TS32) /*! CARSHARE: BA Decode Response: %d */
#define IID0_298   DU0|298,FLDS1(TSTR) /*! CARSHARE: Message: %s */
#define IID0_299   DU0|299,FLDSSTR /*! CARSHARE: ZERO */
#define IID0_300   DU0|300,FLDS1(TS32) /*! CARSHARE: Card Swiped %X - Validated */
#define IID0_301   DU0|301,FLDS1(TS32) /*! CARSHARE: Card Swiped %X - Valid but not in time slot */
#define IID0_302   DU0|302,FLDS1(TS32) /*! CARSHARE: Card Swiped %X - Not In List */
#define IID0_303   DU0|303,FLDSSTR /*! SGP: Enough Data in Buffer */
#define IID0_304   DU0|304,FLDSSTR /*! SGP: Found Start of Message */
#define IID0_305   DU0|305,FLDS1(TS32) /*! SGP: Message of %X length received */
#define IID0_306   DU0|306,FLDS1(TS32) /*! SGP: Response %X received */
#define IID0_307   DU0|307,FLDSSTR /*! Driver Fatigue: Stored values corrupt - re-init */
#define IID0_308   DU0|308,FLDS2(TS32,TS32) /*! Driver Fatigue: Above Speed Timer = %d, Rest Timer = %d */
#define IID0_309   DU0|309,FLDS1(TS32) /*! Driver Fatigue: Above speed threshold too long, switch on beeper (output3), beep Timer = %d */
#define IID0_310   DU0|310,FLDSSTR /*! Driver Fatigue: Did not rest long enough, subtracting rest time */
#define IID0_311   DU0|311,FLDSSTR /*! Driver Fatigue: Rested Long Enough, Raising Event */
#define IID0_312   DU0|312,FLDSSTR /*! TX: TIME_COORDINATES */
#define IID0_313   DU0|313,FLDSSTR /*! TX: REQUEST */
#define IID0_314   DU0|314,FLDS1(TS32) /*! TX: ACK/NACK (%d) */
#define IID0_315   DU0|315,FLDSSTR /*! TX: Data from Server */
#define IID0_316   DU0|316,FLDS1(TS32) /*! RX: PERIOD_COORDINATES at %d s intervals */
#define IID0_317   DU0|317,FLDSSTR /*! RX: ACK */
#define IID0_318   DU0|318,FLDSSTR /*! RX: NACK */
#define IID0_319   DU0|319,FLDSSTR /*! RX: NO_DATA */
#define IID0_320   DU0|320,FLDSSTR /*! RX: TIME_COORDINATES */
#define IID0_321   DU0|321,FLDSSTR /*! Timeout waiting for data from AVLR */
#define IID0_322   DU0|322,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS5(TS32,TS32,TS32,TS32,TS32) /*! RFID Data: 0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X */
#define IID0_323   DU0|323,FLDSSTR /*! Found STX */
#define IID0_324   DU0|324,FLDSSTR /*! Found ETX */
#define IID0_325   DU0|325,FLDS1(TSTR) /*! RFID: %s */
#define IID0_326   DU0|326,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! RFID: 0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X */
#define IID0_327   DU0|327,FLDSSTR /*!  */
#define IID0_328   DU0|328,FLDS2(TS32,TS32) /*! FLS: Req Level from Sensor Pos %d with ID %d */
#define IID0_329   DU0|329,FLDSSTR /*! FLS: Expected Response */
#define IID0_330   DU0|330,FLDS3(TS32,TS32,TS32) /*! FLS: RSP Sensor: Pos=%d, ID=%d, Level=%d - Discard */
#define IID0_331   DU0|331,FLDS3(TS32,TS32,TS32) /*! FLS: RSP Sensor: Pos=%d, ID=%d, Level=%d */
#define IID0_332   DU0|332,FLDS1(TSTR) /*! FLS: RX: %s */
#define IID0_333   DU0|333,FLDSSTR /*! No Sensor IDs defined */
#define IID0_334   DU0|334,FLDSSTR /*! SQ: Data received */
#define IID0_335   DU0|335,FLDS1(TS32) /*! SQ: Full Packet received, Len = %d */
#define IID0_336   DU0|336,FLDS1(TS32) /*! SQ: Packet Type: %d */
#define IID0_337   DU0|337,FLDSSTR /*! SQ: Not enough fields */
#define IID0_338   DU0|338,FLDSSTR /*! SQ: Not enough fields */
#define IID0_339   DU0|339,FLDSSTR /*! SQ: Not enough fields */
#define IID0_340   DU0|340,FLDSSTR /*! SQ: Not enough fields */
#define IID0_341   DU0|341,FLDS1(TS32) /*! SQ: Unknown Packet ID: %d */
#define IID0_342   DU0|342,FLDS1(TSTR) /*! SQ: Unknown Packet Type: %s */
#define IID0_343   DU0|343,FLDS1(TS32) /*! CARD READER: AUX Port Data Length: %d */
#define IID0_344   DU0|344,FLDSSTR /*! CARD READER: Found Start of Track 2 */
#define IID0_345   DU0|345,FLDSSTR /*! CARD READER: Found Complete Track 2 */
#define IID0_346   DU0|346,FLDSSTR /*! CARD READER: Found Start of Track 3 */
#define IID0_347   DU0|347,FLDSSTR /*! CARD READER: Found Complete Track 3 */
#define IID0_348   DU0|348,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! CARD READER: Card Data: %X %X %X %X %X %X %X */
#define IID0_349   DU0|349,FLDS2(TS32,TS32) /*! CARD READER: Lic Type: %d, Cfg Class: %d */
#define IID0_350   DU0|350,FLDS4(TS32,TSTR,TSTR,TSTR) /*! UL202 Fuel Level: %d mm = %s liters of %s or %s full */
#define IID0_351   DU0|351,FLDS1(TS32) /*! UL202 Fuel Level: %d */
#define IID0_352   DU0|352,FLDS1(TS32) /*! BLE: AUX Port Data Length: %d */
#define IID0_353   DU0|353,FLDS1(TSTR) /*! BLE: AUX Port Data: %s */
#define IID0_354   DU0|354,FLDS2(TS32,TS32) /*! ICLASS SE: Fascility Code: %d, Card Number: %d */
#define IID0_355   DU0|355,FLDS1(TS32) /*! MI: Headway Measurement: %d */
#define IID0_356   DU0|356,FLDS1(TS32) /*! MI: Headway Warning Level: %d */
#define IID0_357   DU0|357,FLDS1(TS32) /*! MI: Lane Departure Left: %d */
#define IID0_358   DU0|358,FLDS1(TS32) /*! MI: Lane Departure Right: %d */
#define IID0_359   DU0|359,FLDS1(TS32) /*! MI: Front Collision Warning: %d */
#define IID0_360   DU0|360,FLDS1(TS32) /*! MI: Speeding: %d */
#define IID0_361   DU0|361,FLDS1(TS32) /*! MI: Pedestrian Collision Warning: %d */
#define IID0_362   DU0|362,FLDS1(TS32) /*! MI: Pedestrian in Danger Zone: %d */
#define IID0_363   DU0|363,FLDS1(TS32) /*! MI: Brakes: %d */
#define IID0_364   DU0|364,FLDS1(TS32) /*! MI: Left Turn Signal: %d */
#define IID0_365   DU0|365,FLDS1(TS32) /*! MI: Right Turn Signal: %d */
#define IID0_366   DU0|366,FLDS1(TS32) /*! MI: Wipers: %d */
#define IID0_367   DU0|367,FLDS1(TS32) /*! MI: Low Beam: %d */
#define IID0_368   DU0|368,FLDS1(TS32) /*! MI: High Beam: %d */
#define IID0_369   DU0|369,FLDS1(TS32) /*! MI: Tamper Alert: %d */
#define IID0_370   DU0|370,FLDS1(TS32) /*! MI: Comms Status: %d */
#define IID0_371   DU0|371,FLDS3(TS32,TS32,TS32) /*! RemoteCan filter ready - CANIDs: %d  Scantime: %d   Enabled: %d */
#define IID0_372   DU0|372,FLDS6(TS32,TS32,TU32,TU32,TU32,TU32) /*! Allow UD: %d	Time remaining: %d	HCTime Remaining: %u ms	  Login KeepAlive: %u	LoginGiveUp: %u		Speed: %u */
#define IID0_373   DU0|373,FLDS5(TS32,TS32,TS32,TS32,TU32) /*! RemoteCan filter ready - CANIDs: %d		Allow Unsol: %d		Time remaining: %d		Haskey: %d	 HCTime Remaining: %u ms */
#define IID0_374   DU0|374,FLDSSTR /*! Connection Lost - Resetting connection */
#define IID0_375   DU0|375,FLDS1(TSTR) /*! Login Name: %s */
#define IID0_376   DU0|376,FLDS1(TSTR) /*! %s */
#define IID0_377   DU0|377,FLDS1(TU32) /*! RD enc set: %u */
#define IID0_378   DU0|378,FLDS1(TU32) /*! RD timeout set: %u */
#define IID0_379   DU0|379,FLDS1(TSTR) /*! RD peername set: %s */
#define IID0_380   DU0|380,FLDSSTR /*! RD key set */
#define IID0_381   DU0|381,FLDS1(TS32) /*! port - %d */
#define IID0_382   DU0|382,FLDS1(TSTR) /*! _IP - %s */
#define IID0_383   DU0|383,FLDS2(TSTR,TS32) /*! Setting IP to %s and Port to %d  */
#define IID0_384   DU0|384,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! TLM IDX: SD: %d SF: %d  DD: %d DF: %d idx: %d */
#define IID0_385   DU0|385,FLDS2(TS32,TS32) /*! TLM SS: %d DS:%d */
#define IID0_386   DU0|386,FLDS2(TS32,TS32) /*! TLM IDX: %d TMR: %d */
#define IID0_387   DU0|387,FLDS3(TS32,TS32,TS32) /*! DF: OLD:%d NEW:%d Page:%d */
#define IID0_388   DU0|388,FLDSSTR /*! Check if Config Section need to be persisted */
#define IID0_389   DU0|389,FLDS1(TS32) /*! DF SECT WR:%d */
#define IID0_390   DU0|390,FLDS2(TS32,TS32) /*! sectorNumber = %d, IntSectorAddress = %d */
#define IID0_391   DU0|391,FLDS2(TS32,TS32) /*! sectorErase = %d, pageStartAddress = %d */
#define IID0_392   DU0|392,FLDS2(TS32,TS32) /*! sectorNumber = %d, IntSectorAddress = %d */
#define IID0_393   DU0|393,FLDS1(TS32) /*! DF INT:%d */
#define IID0_394   DU0|394,FLDS3(TS32,TS32,TS32) /*! WLP RECORDS: %d BITS: %d Index: %d */
#define IID0_395   DU0|395,FLDS2(TS32,TS32) /*! WLP Buffer at Addr: %d Page:%d flushed */
#define IID0_396   DU0|396,FLDS1(TS32) /*! WLP Write Index: %d */
#define IID0_397   DU0|397,FLDS1(TS32) /*! DS: Msg Sent OK, Msg Idx = %d */
#define IID0_398   DU0|398,FLDS1(TS32) /*! DS: Msg Sent OK, Msg Idx = %d */
#define IID0_399   DU0|399,FLDS1(TS32) /*! DS: Msg Sent Faked, Msg Idx = %d */
#define IID0_400   DU0|400,FLDSSTR /*! DS Log Erasure Initiated */
#define IID0_401   DU0|401,FLDS1(TS32) /*! Erase 64K Block = %d */
#define IID0_402   DU0|402,FLDS1(TS32) /*! Erase Block = %d */
#define IID0_403   DU0|403,FLDS2(TS32,TS32) /*! DS: Msg Queued, Msg Idx = %d, ACC Records = %d */
#define IID0_404   DU0|404,FLDS1(TS32) /*! DS: Msg cound not be Queued, Record Idx = %d */
#define IID0_405   DU0|405,FLDS1(TS32) /*! DS: Update Meta Record, Record Idx = %d */
#define IID0_406   DU0|406,FLDS1(TS32) /*! DS: Update Data Record, Record Idx = %d */
#define IID0_407   DU0|407,FLDS1(TS32) /*! DS: Update Data Record, Record Idx = %d */
#define IID0_408   DU0|408,FLDS1(TS32) /*! DS: Checking Page %d */
#define IID0_409   DU0|409,FLDS1(TS32) /*! DS: Start of Incident at Page %d */
#define IID0_410   DU0|410,FLDS1(TS32) /*! DS: No Data to be Sent in Page %d */
#define IID0_411   DU0|411,FLDSSTR /*! DS: No Data to be Sent */
#define IID0_412   DU0|412,FLDSSTR /*! Operation not allowed for following reason */
#define IID0_413   DU0|413,FLDSSTR /*! iButton Integrity Failure */
#define IID0_414   DU0|414,FLDSSTR /*! Operation not allowed for following reason */
#define IID0_415   DU0|415,FLDSSTR /*! iButton Integrity Failure */
#define IID0_416   DU0|416,FLDSSTR /*! iButton Passenger Verification Failure */
#define IID0_417   DU0|417,FLDSSTR /*! iButton Passenger Invalid */
#define IID0_418   DU0|418,FLDSSTR /*! iButton Passenger Validation Failed */
#define IID0_419   DU0|419,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! 1 WIRE ID: 0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X0x%0.2X */
#define IID0_420   DU0|420,FLDSSTR /*! Operation not allowed for following reason */
#define IID0_421   DU0|421,FLDSSTR /*! 1-Wire ID presented */
#define IID0_422   DU0|422,FLDSSTR /*! Valid PAGE 0 CRC16 */
#define IID0_423   DU0|423,FLDSSTR /*! Valid PAGE 1 CRC16 */
#define IID0_424   DU0|424,FLDSSTR /*! Valid PAGE 2 CRC16 */
#define IID0_425   DU0|425,FLDSSTR /*! Valid PAGE 3 CRC16 */
#define IID0_426   DU0|426,FLDS1(TS32) /*! Driver Fleet: %02d */
#define IID0_427   DU0|427,FLDS2(TU32,TS32) /*! Driver Aux Fleet %u: %02d */
#define IID0_428   DU0|428,FLDS1(TS32) /*! Driver Class: %02d */
#define IID0_429   DU0|429,FLDS1(TS32) /*! Driver ID: %02d */
#define IID0_430   DU0|430,FLDS1(TU32) /*! Customer Code: %u */
#define IID0_431   DU0|431,FLDS1(TS32) /*! Driver Fleet: %02d */
#define IID0_432   DU0|432,FLDS1(TS32) /*! Driver Class: %02d */
#define IID0_433   DU0|433,FLDS3(TS32,TS32,TS32) /*! Driver ID: 0X000x%0.2X0x%0.2X0x%0.2X */
#define IID0_434   DU0|434,FLDS4(TU32,TU32,TU32,TU32) /*! Current DOW: %u; DrvTime Start: %u; DrvTime Stop: %u; Time: %u */
#define IID0_435   DU0|435,FLDS4(TU32,TU32,TU32,TU32) /*! Start %u, Stop %u, Current %u, Dow: %u  */
#define IID0_436   DU0|436,FLDS2(TS32,TS32) /*! DRV CRC: 0x%0.4X (0x%0.4X) */
#define IID0_437   DU0|437,FLDSSTR /*! DRV: Success */
#define IID0_438   DU0|438,FLDS6(TU32,TU32,TU32,TU32,TU32,TU32) /*! CDID: %u; CC: %u, FC: %u; DC: %u; DP: %u; PT: %u; */
#define IID0_439   DU0|439,FLDSSTR /*! Operation not allowed for following reason */
#define IID0_440   DU0|440,FLDSSTR /*! iButton Integrity Failure */
#define IID0_441   DU0|441,FLDS3(TS32,TS32,TS32) /*! Fleet: %d Class: %d ID: %d */
#define IID0_442   DU0|442,FLDSSTR /*! Driver Key Validated */
#define IID0_443   DU0|443,FLDSSTR /*! Driver Key Not Validated */
#define IID0_444   DU0|444,FLDSSTR /*! Invalid Key Read */
#define IID0_445   DU0|445,FLDSSTR /*! Valid Key Read */
#define IID0_446   DU0|446,FLDSSTR /*! Default Request */
#define IID0_447   DU0|447,FLDS3(TS32,TS32,TS32) /*! crc = %X, SeqIdx = %X, StartIdx = %X */
#define IID0_448   DU0|448,FLDSSTR /*! CRC Error */
#define IID0_449   DU0|449,FLDS2(TS32,TU32) /*! ScpEnc: ret = %d, rsaPubKey.n = %u */
#define IID0_450   DU0|450,FLDS1(TS32) /*! ScpEnc: ret = %d */
#define IID0_451   DU0|451,FLDSSTR /*! Event Generation Bypassed, Start-up or Self Test Running */
#define IID0_452   DU0|452,FLDSSTR /*! Event Generation Bypassed, Start-up or Self Test Running */
#define IID0_453   DU0|453,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Evt: evtIdx: %d, actualIdx: %d, pageAddr: %d, pageOffs: %d, total: %d  */
#define IID0_454   DU0|454,FLDS2(TS32,TS32) /*! Evt: Write Page: %d Index: %d  */
#define IID0_455   DU0|455,FLDS1(TS32) /*! Evt: Erased Sector: %d */
#define IID0_456   DU0|456,FLDS1(TS32) /*! Evt: Erased Page: %d */
#define IID0_457   DU0|457,FLDS3(TS32,TS32,TS32) /*! Msg Len = %d, PDU Cntr = %d, Count = %d */
#define IID0_458   DU0|458,FLDS2(TU32,TU32) /*! ID: %u; Count: %u */
#define IID0_459   DU0|459,FLDS1(TS32) /*! Header Status: %X */
#define IID0_460   DU0|460,FLDS1(TS32) /*! Found Event! Index = %d */
#define IID0_461   DU0|461,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Evt: evtIdx: %d, actualIdx: %d, pageAddr: %d, pageOffs: %d, total: %d  */
#define IID0_462   DU0|462,FLDS2(TU32,TU32) /*! T: %u :: %u */
#define IID0_463   DU0|463,FLDS2(TU32,TU32) /*! Evt: %u :: %u */
#define IID0_464   DU0|464,FLDS8(TU32,TU32,TU32,TU32,TU32,TU32,TU32,TU32) /*! Evt Found: %u :: %u-%u-%u %u:%u:%u; Idx: %u;  */
#define IID0_465   DU0|465,FLDSSTR /*! Trigger Timer IRQ */
#define IID0_466   DU0|466,FLDS4(TS32,TS32,TS32,TS32) /*! P %d S %d CRC 0x%0.4X CALC 0x%0.4X */
#define IID0_467   DU0|467,FLDS3(TS32,TS32,TS32) /*! P %d, S %d CRC 0x%0.4X */
#define IID0_468   DU0|468,FLDS1(TS32) /*! FW: Decrypted %d pages */
#define IID0_469   DU0|469,FLDS1(TS32) /*! Pages to erase: %X */
#define IID0_470   DU0|470,FLDS1(TS32) /*! FM Consumption: Init = %d */
#define IID0_471   DU0|471,FLDS1(TS32) /*! FM Consumption: Source = %d */
#define IID0_472   DU0|472,FLDS3(TS32,TS32,TS32) /*! FM Consumption: Total = %dml, TripStart = %dml, InTrip = %dml */
#define IID0_473   DU0|473,FLDS4(TS32,TS32,TS32,TS32) /*! FM: In1 Cycles: %d, In2 Cycles: %d, Fuel Out: %d, Fuel In: %d */
#define IID0_474   DU0|474,FLDS4(TS32,TS32,TS32,TS32) /*! FM: Km/L = %d, Distance = %d, FuelRate = %d, FuelUsed = %d */
#define IID0_475   DU0|475,FLDS1(TS32) /*! FM Level: Init = %d */
#define IID0_476   DU0|476,FLDS1(TS32) /*! FM Level: Source = %d */
#define IID0_477   DU0|477,FLDS2(TS32,TS32) /*! FM: Fuel Level = %d (%d ml) */
#define IID0_478   DU0|478,FLDS1(TS32) /*! FM: Trip Start Level = %d */
#define IID0_479   DU0|479,FLDS2(TS32,TS32) /*! FM: Theft Detected. Last Value = %d, Current Value %d */
#define IID0_480   DU0|480,FLDS1(TS32) /*! FM: Trip End Level = %d */
#define IID0_481   DU0|481,FLDS1(TU32) /*! FUEL - %u ml */
#define IID0_482   DU0|482,FLDS1(TS32) /*! FUEL - %d */
#define IID0_483   DU0|483,FLDS1(TU32) /*! FUEL - %u ml */
#define IID0_484   DU0|484,FLDS3(TS32,TS32,TS32) /*! FM: Fuel AD value below/above empty setting: level = %d, setting = %d, inverted = %d */
#define IID0_485   DU0|485,FLDS3(TS32,TS32,TS32) /*! FM: Fuel AD value above/below full setting: level = %d, setting= %d, inverted = %d */
#define IID0_486   DU0|486,FLDS3(TS32,TS32,TS32) /*! FM: AD = %d is between Empty and First Slot, Range: %d to %d */
#define IID0_487   DU0|487,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! FM: AD = %d is between Last Used Slot (%d) and Full, Range: %d to %d, inverted = %d */
#define IID0_488   DU0|488,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! FM: AD = %d is between Slot %d and Slot %d, Range %d to %d, inverted = %d */
#define IID0_489   DU0|489,FLDS2(TS32,TS32) /*! FM: AD: %d, Fuel Level: %d mL */
#define IID0_490   DU0|490,FLDS1(TS32) /*! FUEL: %d uL */
#define IID0_491   DU0|491,FLDS2(TS32,TS32) /*! CO2: %d Type:%d */
#define IID0_492   DU0|492,FLDS2(TS32,TS32) /*! MAF: %d Load:%d */
#define IID0_493   DU0|493,FLDS2(TS32,TS32) /*! FUEL MafLoad: %d uL Rate:%d */
#define IID0_494   DU0|494,FLDS2(TS32,TS32) /*! FUEL MafLoad: %d uL Rate:%d */
#define IID0_495   DU0|495,FLDS1(TS32) /*! FM: Init = %d */
#define IID0_496   DU0|496,FLDS2(TS32,TS32) /*! FM: Initialized1 = %d, Initialized2 = %d  */
#define IID0_497   DU0|497,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! FM: Fuel Level = %d (%d ml), Fuel Used: Total=%dml, Prev=%dml, Current=%dml */
#define IID0_498   DU0|498,FLDS1(TS32) /*! FM: Fuel Level Event: Level = %d */
#define IID0_499   DU0|499,FLDS2(TU32,TU32) /*! GPS SW ANT: %u, tmr: %u */
#define IID0_500   DU0|500,FLDS3(TU32,TU32,TU32) /*! GPS ANT(%u): AGC On %u; AGC Off %u */
#define IID0_501   DU0|501,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! SV: %d Eph%d: %d Alm%d: %d */
#define IID0_502   DU0|502,FLDS1(TS32) /*! GPS Dist->Pnt: %dm */
#define IID0_503   DU0|503,FLDS1(TS32) /*! GPS 2 Dist->Pnt: %dmm */
#define IID0_504   DU0|504,FLDS2(TS32,TS32) /*! GPS Speed: %d (%d) */
#define IID0_505   DU0|505,FLDS1(TS32) /*! GPS TTFF: %dmS */
#define IID0_506   DU0|506,FLDS3(TS32,TS32,TS32) /*! GPS AUX: LAT: %d LON: %d ALT: %d */
#define IID0_507   DU0|507,FLDSSTR /*! GPS: AID-INI Position SUPPLIED */
#define IID0_508   DU0|508,FLDS3(TS32,TS32,TS32) /*! GPS LLA: LAT: %d LON: %d ALT: %d */
#define IID0_509   DU0|509,FLDSSTR /*! GPS: AID-INI BEST GUESS */
#define IID0_510   DU0|510,FLDSSTR /*! GPS: AID-INI No Position */
#define IID0_511   DU0|511,FLDSSTR /*! GPS: AID-INI Current AID Position */
#define IID0_512   DU0|512,FLDSSTR /*! GPS: INI TimeSync */
#define IID0_513   DU0|513,FLDS1(TS32) /*! ALM Idx:%d */
#define IID0_514   DU0|514,FLDS1(TS32) /*! EPH Idx:%d */
#define IID0_515   DU0|515,FLDS1(TS32) /*! GPS RTC CAL. ANT: %d */
#define IID0_516   DU0|516,FLDS2(TS32,TS32) /*! GPS DCDR: 0x%0.2X 0x%0.2X */
#define IID0_517   DU0|517,FLDS2(TS32,TS32) /*! GPS ACK: 0x%0.2X 0x%0.2X */
#define IID0_518   DU0|518,FLDSSTR /*! GPS: Enable ITFM */
#define IID0_519   DU0|519,FLDS1(TSTR) /*! GPS: %s */
#define IID0_520   DU0|520,FLDS3(TS32,TS32,TS32) /*! GPS: %02d Time:%d Mode: %d */
#define IID0_521   DU0|521,FLDS2(TS32,TS32) /*! GPS WEEK::%d TOW:%d */
#define IID0_522   DU0|522,FLDS1(TS32) /*! GPS AID SIZE: %d */
#define IID0_523   DU0|523,FLDSSTR /*! GPS: Ext. Ant. */
#define IID0_524   DU0|524,FLDSSTR /*! GPS: Int. Ant. */
#define IID0_525   DU0|525,FLDS1(TS32) /*! Addr: %X */
#define IID0_526   DU0|526,FLDS1(TS32) /*! GPS: INI CRC 0x%0.2X */
#define IID0_527   DU0|527,FLDS1(TS32) /*! Addr: %X */
#define IID0_528   DU0|528,FLDSSTR /*! GPS: AID BACKUP */
#define IID0_529   DU0|529,FLDSSTR /*! GPS: Last Valid Pos */
#define IID0_530   DU0|530,FLDSSTR /*! GPS: TimeSync */
#define IID0_531   DU0|531,FLDSSTR /*! GPS: TimeSync */
#define IID0_532   DU0|532,FLDS1(TSTR) /*! %s */
#define IID0_533   DU0|533,FLDS2(TS32,TS32) /*! GPS State: 0x%0.4X; Time: %d */
#define IID0_534   DU0|534,FLDSSTR /*!  */
#define IID0_535   DU0|535,FLDS4(TS32,TS32,TS32,TS32) /*! Lat1: %d Lon1: %d Lat2: %d Lon2:%d */
#define IID0_536   DU0|536,FLDS1(TS32) /*! Dist: %d */
#define IID0_537   DU0|537,FLDS3(TS32,TS32,TS32) /*! IPC: RX Passthrough Msg, ID: %d, PT ID: %d, Version: %d */
#define IID0_538   DU0|538,FLDS1(TS32) /*! COM2 Port TX Data Length: %d bytes */
#define IID0_539   DU0|539,FLDS1(TS32) /*! AUX Port RX Data Length: %d bytes */
#define IID0_540   DU0|540,FLDS1(TS32) /*! Send Outputs: %X */
#define IID0_541   DU0|541,FLDSSTR /*! IPC: RX CAN Data */
#define IID0_542   DU0|542,FLDSSTR /*! FILTERS CONFIGURED */
#define IID0_543   DU0|543,FLDSSTR /*! FILTERS 11-Bit */
#define IID0_544   DU0|544,FLDSSTR /*! FILTERS 29-bit */
#define IID0_545   DU0|545,FLDSSTR /*! FILTERS BYPASS */
#define IID0_546   DU0|546,FLDS3(TS32,TS32,TS32) /*! RX Beep Style Data: %X|%X|%X */
#define IID0_547   DU0|547,FLDS1(TS32) /*! Received IO Update Response %X */
#define IID0_548   DU0|548,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! IPC: RX: %2d p/s, %4d B/s, %2d TF | TX: %2d p/s, %4d B/s */
#define IID0_549   DU0|549,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! 81C: RX: %2d p/s, %4d B/s, %2d TF | TX: %2d p/s, %4d B/s */
#define IID0_550   DU0|550,FLDS4(TS32,TS32,TS32,TS32) /*! IPC: Data RX: id: %d, len: %d, pdulen: %d, prevRXid: %d */
#define IID0_551   DU0|551,FLDS2(TS32,TS32) /*! IPC: ACK: RXid: %d, new TXid: %d */
#define IID0_552   DU0|552,FLDS1(TS32) /*! IPC: Unknown Command:%d */
#define IID0_553   DU0|553,FLDS3(TS32,TS32,TS32) /*! IPC: RX FW Passthrough Msg, ID: %d, PT ID: %d, Version: %d */
#define IID0_554   DU0|554,FLDS1(TS32) /*! Send Serial Data: %d bytes */
#define IID0_555   DU0|555,FLDSSTR /*! Request IO States */
#define IID0_556   DU0|556,FLDSSTR /*! Send Temperature Values */
#define IID0_557   DU0|557,FLDSSTR /*! Send DriverKey Data */
#define IID0_558   DU0|558,FLDS3(TS32,TS32,TS32) /*! Send Beep Style Data: %X|%X|%X */
#define IID0_559   DU0|559,FLDSSTR /*! Sending RXd CAN Data */
#define IID0_560   DU0|560,FLDSSTR /*! Multisection PID found */
#define IID0_561   DU0|561,FLDSSTR /*! Unsupported PID found */
#define IID0_562   DU0|562,FLDSSTR /*! Checksum failed */
#define IID0_563   DU0|563,FLDS1(TS32) /*! Unsupported PID - %d */
#define IID0_564   DU0|564,FLDS1(TS32) /*! Unsupported PID - %d */
#define IID0_565   DU0|565,FLDS1(TS32) /*! Unsupported PID - %d */
#define IID0_566   DU0|566,FLDS1(TS32) /*! TotFuelUsed - %d */
#define IID0_567   DU0|567,FLDS1(TS32) /*! TripDistance - %d */
#define IID0_568   DU0|568,FLDS1(TS32) /*! TotEngHours - %d */
#define IID0_569   DU0|569,FLDS1(TS32) /*! TotDistance - %d */
#define IID0_570   DU0|570,FLDS1(TS32) /*! EngSpeed - %d */
#define IID0_571   DU0|571,FLDS1(TS32) /*! TripFuel - %d */
#define IID0_572   DU0|572,FLDS1(TS32) /*! AveFuelEconomy - %d */
#define IID0_573   DU0|573,FLDS1(TS32) /*! InstFuelRate - %d */
#define IID0_574   DU0|574,FLDS1(TS32) /*! RoadSpeed - %d */
#define IID0_575   DU0|575,FLDS1(TS32) /*! EngLoad - %d */
#define IID0_576   DU0|576,FLDS1(TS32) /*! ThrottlePos - %d */
#define IID0_577   DU0|577,FLDS1(TS32) /*! WetTankPress - %d */
#define IID0_578   DU0|578,FLDS1(TS32) /*! EngOilPress - %d */
#define IID0_579   DU0|579,FLDS1(TS32) /*! TrnsOilPress - %d */
#define IID0_580   DU0|580,FLDS1(TS32) /*! AirInletPress - %d */
#define IID0_581   DU0|581,FLDS1(TS32) /*! EngOilLvl - %d */
#define IID0_582   DU0|582,FLDS1(TS32) /*! FuelLvl - %d */
#define IID0_583   DU0|583,FLDS3(TS32,TS32,TS32) /*! GPS AID: LAT: %d LON: %d ALT: %d */
#define IID0_584   DU0|584,FLDS1(TS32) /*! Updating Last Valid Position Crc: 0x%0.4X */
#define IID0_585   DU0|585,FLDS1(TS32) /*! Updating Last Valid Position Crc: 0x%0.4X */
#define IID0_586   DU0|586,FLDS8(TU32,TU32,TU32,TU32,TU32,TU32,TS32,TS32) /*! GASTS: BCK Age: %u (%u | %u); EPH/ALM %u;%u: SVQI EPH: %u ; 0x%X | 0x%X */
#define IID0_587   DU0|587,FLDS2(TS32,TS32) /*! Odo: %d RPM: %d */
#define IID0_588   DU0|588,FLDS1(TS32) /*! RPM Cal: %d */
#define IID0_589   DU0|589,FLDS1(TS32) /*! Odo Pulses: %d */
#define IID0_590   DU0|590,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ODO %d: %d  RPM %d: %d Lim: %d %d */
#define IID0_591   DU0|591,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ODO: %d RPM: %d Speed: %d (%d) Timer: %d %d */
#define IID0_592   DU0|592,FLDS2(TS32,TS32) /*! ODO: %d RPM: %d */
#define IID0_593   DU0|593,FLDSSTR /*! Request VIN */
#define IID0_594   DU0|594,FLDS1(TS32) /*! Request PID: 0x%0.2X */
#define IID0_595   DU0|595,FLDS3(TS32,TS32,TS32) /*! Slow = %d, Next PIDIdx: 0x%0.2X, reqPID = 0x%0.2X */
#define IID0_596   DU0|596,FLDS2(TS32,TS32) /*! Slow = %d, Request PID: 0x%0.2X */
#define IID0_597   DU0|597,FLDS3(TS32,TS32,TS32) /*! Request State, t1 = %d, t2 = %d, t3 = %d */
#define IID0_598   DU0|598,FLDS3(TS32,TS32,TS32) /*! Response State, t1 = %d, t2 = %d, t3 = %d */
#define IID0_599   DU0|599,FLDSSTR /*! No Response, Request Next */
#define IID0_600   DU0|600,FLDS3(TS32,TS32,TS32) /*! Retry State, t1 = %d, t2 = %d, t3 = %d */
#define IID0_601   DU0|601,FLDS1(TS32) /*! Calc Chksum = 0x%0.2X */
#define IID0_602   DU0|602,FLDS1(TS32) /*! Vin[0]=0x%0.2X */
#define IID0_603   DU0|603,FLDS1(TSTR) /*! Vin = %s */
#define IID0_604   DU0|604,FLDS3(TS32,TS32,TS32) /*! ISO9141: SID=0x%0.2X, PID=0x%0.2X, DataLen=%d */
#define IID0_605   DU0|605,FLDSSTR /*!  BEEP ALL 1 */
#define IID0_606   DU0|606,FLDS1(TS32) /*! BEEP VAL1: %d */
#define IID0_607   DU0|607,FLDSSTR /*!  BEEP ALL NONE */
#define IID0_608   DU0|608,FLDS1(TS32) /*! BEEP VAL2: %d */
#define IID0_609   DU0|609,FLDS5(TU32,TU32,TU32,TU32,TSTR) /*! SM State: %u; RT: %u; PngT: %u; DevPT: %u; %s */
#define IID0_610   DU0|610,FLDSSTR /*! SENDENABLE */
#define IID0_611   DU0|611,FLDSSTR /*! REQ PID */
#define IID0_612   DU0|612,FLDSSTR /*! REQ UNIT ID */
#define IID0_613   DU0|613,FLDSSTR /*! SEND PING */
#define IID0_614   DU0|614,FLDSSTR /*! SEND TEXT */
#define IID0_615   DU0|615,FLDS2(TS32,TS32) /*! Time of Message: %X; %X */
#define IID0_616   DU0|616,FLDSSTR /*! SEND TEXT RECEIPT */
#define IID0_617   DU0|617,FLDSSTR /*! SEND TEXT RECEIPT */
#define IID0_618   DU0|618,FLDSSTR /*! SEND STOP */
#define IID0_619   DU0|619,FLDS2(TS32,TS32) /*! Time of Stop: %X; %X */
#define IID0_620   DU0|620,FLDSSTR /*! Fleet: IDData */
#define IID0_621   DU0|621,FLDSSTR /*! Fleet: Support */
#define IID0_622   DU0|622,FLDS1(TSTR) /*! %s */
#define IID0_623   DU0|623,FLDSSTR /*! Fleet: Unicode Support */
#define IID0_624   DU0|624,FLDSSTR /*! Fleet: C2S Message */
#define IID0_625   DU0|625,FLDSSTR /*! Fleet: Text Message Receipt */
#define IID0_626   DU0|626,FLDSSTR /*! Fleet: PING Resp */
#define IID0_627   DU0|627,FLDS1(TS32) /*! Fleet: UNRECOGNISED: 0x%0.2X */
#define IID0_628   DU0|628,FLDSSTR /*! Rx: Ack */
#define IID0_629   DU0|629,FLDSSTR /*! Rx: Cmd */
#define IID0_630   DU0|630,FLDSSTR /*! Rx: NAck */
#define IID0_631   DU0|631,FLDSSTR /*! Rx: PVT */
#define IID0_632   DU0|632,FLDSSTR /*! Rx: Fleet */
#define IID0_633   DU0|633,FLDSSTR /*! BA Ping */
#define IID0_634   DU0|634,FLDSSTR /*! BA Send Confirmation */
#define IID0_635   DU0|635,FLDS2(TU32,TS32) /*! Outgoing BA: Session %u; Type: %X; */
#define IID0_636   DU0|636,FLDS2(TU32,TS32) /*! Incoming BA: Session %u; Type: %X; */
#define IID0_637   DU0|637,FLDS2(TU32,TU32) /*! BatchLen: %u:, RxLength: %u  */
#define IID0_638   DU0|638,FLDS2(TU32,TU32) /*! BatchLen: %u:, RxLength: %u  */
#define IID0_639   DU0|639,FLDS4(TU32,TU32,TS32,TS32) /*! BatchLen: %u:, RxLength: %u; RxCrc: %X CalcCrc: %X */
#define IID0_640   DU0|640,FLDSSTR /*! Single Frame Messsage Decoded */
#define IID0_641   DU0|641,FLDSSTR /*! Multi Frame Messsage Decoded; First Frame */
#define IID0_642   DU0|642,FLDSSTR /*! BA Acknowledge Received */
#define IID0_643   DU0|643,FLDSSTR /*! BA NACK Received */
#define IID0_644   DU0|644,FLDSSTR /*! BA Message Sent */
#define IID0_645   DU0|645,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! MAIN: %d BATT: %d MODEM: %d CHGR: %d PWRON: %d */
#define IID0_646   DU0|646,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! MAIN: %d BATT: %d CHGR: %d TO: %d KA:%d */
#define IID0_647   DU0|647,FLDS4(TS32,TS32,TS32,TS32) /*! MAIN: %d BATT: %d MODEM: %d CHGR: %d */
#define IID0_648   DU0|648,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! MAIN: %d BATT: %d (%d) MODEM: %d CHGR: %d PWRON: %d */
#define IID0_649   DU0|649,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! PWR: %d MAINS: %d BATT: %d GPS: %d GSM: %d Override: %d Time: %d */
#define IID0_650   DU0|650,FLDSSTR /*! PWR: BATT.CHRG.EN  */
#define IID0_651   DU0|651,FLDSSTR /*! PWR: BATT.CHRG.EN  */
#define IID0_652   DU0|652,FLDSSTR /*! PWR: BATT.CHRG. ON: PAUSE */
#define IID0_653   DU0|653,FLDSSTR /*! PWR: BATT.CHRG. ON: RESUME */
#define IID0_654   DU0|654,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! V_Start: %d_min (%d_10ms) %d_ave (%d_10ms) %d_stop %d_Post */
#define IID0_655   DU0|655,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! BAT: %dV %dC EN:%d FULL:%d LOW:%d TIME: %ds ST:%d */
#define IID0_656   DU0|656,FLDSSTR /*! GPS: Ext. Ant. */
#define IID0_657   DU0|657,FLDSSTR /*! GPS: Int. Ant. */
#define IID0_658   DU0|658,FLDS1(TS32) /*! POWER MODE: 0x%0.2X */
#define IID0_659   DU0|659,FLDS4(TS32,TS32,TS32,TS32) /*! H: %d 1: %d 2: %d S: %d */
#define IID0_660   DU0|660,FLDSSTR /*! GPS Full Power Mode */
#define IID0_661   DU0|661,FLDSSTR /*! GPS FixNow Idle Mode */
#define IID0_662   DU0|662,FLDSSTR /*! GPS Idle Mode */
#define IID0_663   DU0|663,FLDSSTR /*! GPS FixNow Sleep Mode */
#define IID0_664   DU0|664,FLDSSTR /*! Wake UP Peripherals */
#define IID0_665   DU0|665,FLDSSTR /*! Ignition On */
#define IID0_666   DU0|666,FLDS3(TS32,TS32,TS32) /*! Pwr: MAX: %d GPS: %d GSM: %d */
#define IID0_667   DU0|667,FLDS1(TS32) /*! Sentinel Flag:0x%0.2X */
#define IID0_668   DU0|668,FLDSSTR /*!  */
#define IID0_669   DU0|669,FLDS1(TSTR) /*! %s */
#define IID0_670   DU0|670,FLDS4(TS32,TS32,TS32,TS32) /*! Port:%d Pin:%d Dir:%d Sts:%d */
#define IID0_671   DU0|671,FLDS4(TS32,TS32,TS32,TS32) /*! Port:%d Pin:%d Dir:%d Sts:%d */
#define IID0_672   DU0|672,FLDS4(TS32,TS32,TS32,TS32) /*! Port:%d Pin:%d Dir:%d Sts:%d */
#define IID0_673   DU0|673,FLDS4(TS32,TS32,TS32,TS32) /*! Port:%d Pin:%d Dir:%d Sts:%d */
#define IID0_674   DU0|674,FLDS4(TS32,TS32,TS32,TS32) /*! EXTICR 0: 0x%0.8X 1: 0x%0.8X 2: 0x%0.8X 3: 0x%0.8X */
#define IID0_675   DU0|675,FLDS4(TS32,TS32,TS32,TS32) /*! EXTI IMR: 0x%0.8X EMR: 0x%0.8X RTSR: 0x%0.8X FTSR: 0x%0.8X */
#define IID0_676   DU0|676,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! H: %d 1: %d 2: %d S: %d SSCGR: 0x%0.8X */
#define IID0_677   DU0|677,FLDS4(TS32,TS32,TS32,TS32) /*! WRPS:0x%0.8X RDP:0x%0.8X BOR:0x%0.8X USR:0x%0.8X */
#define IID0_678   DU0|678,FLDS1(TS32) /*! RDP Level: %d */
#define IID0_679   DU0|679,FLDS2(TS32,TS32) /*! DATA: 0x%0.2X0x%0.2X */
#define IID0_680   DU0|680,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ADR: 0x%0.2X I2C: %d ERROR: %d CR1: 0x%0.8X SR1: 0x%0.8X SR2: 0x%0.8X */
#define IID0_681   DU0|681,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ADR: 0x%0.2X I2C: %d ERROR: %d CR1: 0x%0.8X SR1: 0x%0.8X SR2: 0x%0.8X */
#define IID0_682   DU0|682,FLDS4(TS32,TS32,TS32,TS32) /*! Run a Msg Test: Test ID: %d, DataLen: %d, msgID: %d, Encrypted: %d */
#define IID0_683   DU0|683,FLDS4(TS32,TS32,TS32,TS32) /*! Run Msg Test: Test ID: %d, DataLen: %d, msgID: %d, Encrypted: %d */
#define IID0_684   DU0|684,FLDS2(TS32,TS32) /*! Odometer: %d TripStart: %d */
#define IID0_685   DU0|685,FLDS2(TS32,TS32) /*! Odometer: %d TripStart: %d */
#define IID0_686   DU0|686,FLDS3(TS32,TS32,TS32) /*! Tail: %d, Head: %d, Trip ID = %d */
#define IID0_687   DU0|687,FLDS3(TS32,TS32,TS32) /*! evtIdx = %d, evtTripID: %d, evtID: %d */
#define IID0_688   DU0|688,FLDSSTR /*! Not a False Trip - undetain events */
#define IID0_689   DU0|689,FLDSSTR /*! False Trip - detain new trip events */
#define IID0_690   DU0|690,FLDSSTR /*! Normal Trip End Delay */
#define IID0_691   DU0|691,FLDSSTR /*! Tow Away Arming */
#define IID0_692   DU0|692,FLDS1(TS32) /*! TRIP FUEL: %d */
#define IID0_693   DU0|693,FLDS1(TSTR) /*! %s */
#define IID0_694   DU0|694,FLDS1(TSTR) /*! %s */
#define IID0_695   DU0|695,FLDS2(TSTR,TSTR) /*! From: %s Message: %s */
#define IID0_696   DU0|696,FLDSSTR /*! Geoloc Activated */
#define IID0_697   DU0|697,FLDSSTR /*! Geoloc Deactivated */
#define IID0_698   DU0|698,FLDSSTR /*! GEO ON 1 */
#define IID0_699   DU0|699,FLDSSTR /*! GEO ON 2 */
#define IID0_700   DU0|700,FLDSSTR /*! GEO OFF 1 */
#define IID0_701   DU0|701,FLDSSTR /*! GEO OFF 2 */
#define IID0_702   DU0|702,FLDSSTR /*! Help Command Received */
#define IID0_703   DU0|703,FLDSSTR /*! Location */
#define IID0_704   DU0|704,FLDS1(TS32) /*! Stored Protocol Type 0x%0.8X */
#define IID0_705   DU0|705,FLDS1(TS32) /*! VNI Prot: 0x%0.4X */
#define IID0_706   DU0|706,FLDS4(TU32,TU32,TU32,TU32) /*! PRx: %u, PTx %u, BRx: %u, BTx: %u */
#define IID0_707   DU0|707,FLDS1(TU32) /*! Standoff Timer: %u */
#define IID0_708   DU0|708,FLDS1(TU32) /*! DTC Req Timer: %u */
#define IID0_709   DU0|709,FLDS1(TU32) /*! Command: %u */
#define IID0_710   DU0|710,FLDSSTR /*! STORED PROTOCOLS CLEARED */
#define IID0_711   DU0|711,FLDS2(TU32,TS32) /*! Prot SET: %u [0x%0.4X] */
#define IID0_712   DU0|712,FLDS2(TU32,TS32) /*! TEST #%u [0x%0.2X] */
#define IID0_713   DU0|713,FLDS3(TU32,TU32,TS32) /*! Prot DETECT TST: Retry #%u, Prot: %u [0x%0.4X] */
#define IID0_714   DU0|714,FLDS1(TU32) /*! Invalid Tst: %u */
#define IID0_715   DU0|715,FLDS1(TU32) /*! PD STATE: %u */
#define IID0_716   DU0|716,FLDS1(TS32) /*! Callback: 0x%0.4X */
#define IID0_717   DU0|717,FLDS3(TS32,TS32,TS32) /*! ADD: 0x%0.8X SID: 0x%0.2X ID: 0x%0.2X */
#define IID0_718   DU0|718,FLDS3(TS32,TS32,TS32) /*! ADD: 0x%0.8X SID: 0x%0.2X ID: 0x%0.2X */
#define IID0_719   DU0|719,FLDS1(TS32) /*! Init K-Line: 0x%0.4X */
#define IID0_720   DU0|720,FLDS1(TS32) /*! Init TP2.0: 0x%0.4X */
#define IID0_721   DU0|721,FLDS1(TS32) /*! Init ISO15765: 0x%0.4X */
#define IID0_722   DU0|722,FLDS1(TS32) /*! Init FMS/J1939: 0x%0.4X */
#define IID0_723   DU0|723,FLDSSTR /*! SYNC DONE */
#define IID0_724   DU0|724,FLDSSTR /*! DLCallback Changed */
#define IID0_725   DU0|725,FLDS3(TS32,TS32,TS32) /*! ISO14230 State: %d Data: 0x%0.2X Timer: %dmS */
#define IID0_726   DU0|726,FLDS2(TS32,TS32) /*! ISO14230: 0x%0.2X State: %d */
#define IID0_727   DU0|727,FLDS3(TS32,TS32,TS32) /*! ISO14230 State: %d Data: 0x%0.2X Timer: %dmS */
#define IID0_728   DU0|728,FLDS2(TS32,TS32) /*! KWP2000 KW1: 0x%0.2X KW2: 0x%0.2X */
#define IID0_729   DU0|729,FLDS2(TS32,TS32) /*! KWP2000 KW1: 0x%0.2X KW2: 0x%0.2X */
#define IID0_730   DU0|730,FLDS3(TS32,TS32,TS32) /*! ISO14230: HDR:0x%0.2X TGT: 0x%0.2X SRC: 0x%0.2X */
#define IID0_731   DU0|731,FLDS2(TS32,TS32) /*! ISO14230 CS: 0x%0.2X 0x%0.2X */
#define IID0_732   DU0|732,FLDS3(TS32,TS32,TS32) /*! ISO9141 State: %d Data: 0x%0.2X Timer: %dmS */
#define IID0_733   DU0|733,FLDS4(TS32,TS32,TS32,TS32) /*! ISO9141 %d %d: 0x%0.2X State: %d */
#define IID0_734   DU0|734,FLDS3(TS32,TS32,TS32) /*! ISO9141 State: %d Data: 0x%0.2X Timer: %dmS */
#define IID0_735   DU0|735,FLDS1(TS32) /*! SAE LENGTH:%d */
#define IID0_736   DU0|736,FLDS3(TS32,TS32,TS32) /*! ISOSLOW State: %d Data: 0x%0.2X Timer: %dmS */
#define IID0_737   DU0|737,FLDS2(TS32,TS32) /*! KWP2000 KW1: 0x%0.2X KW2: 0x%0.2X */
#define IID0_738   DU0|738,FLDS2(TS32,TS32) /*! KWP2000: 0x%0.2X State: %d */
#define IID0_739   DU0|739,FLDS2(TS32,TS32) /*! KWP2000: 0x%0.2X State: %d */
#define IID0_740   DU0|740,FLDS1(TS32) /*! ISOSLOW: 0x%0.2X */
#define IID0_741   DU0|741,FLDS1(TS32) /*! ISO14230 State:%d */
#define IID0_742   DU0|742,FLDS2(TS32,TS32) /*! BIT: %d STATE:%d */
#define IID0_743   DU0|743,FLDS1(TS32) /*! ISOSLOW: 0x%0.2X */
#define IID0_744   DU0|744,FLDSSTR /*! ISO15765 DL_INIT */
#define IID0_745   DU0|745,FLDS1(TS32) /*! MSG_ID: 0x%0.8X */
#define IID0_746   DU0|746,FLDSSTR /*! DLCallback Changed */
#define IID0_747   DU0|747,FLDS1(TS32) /*! Filter Addr: 0x%0.4X */
#define IID0_748   DU0|748,FLDS1(TS32) /*! Filter Addr: 0x%0.4X */
#define IID0_749   DU0|749,FLDS1(TS32) /*! Filter Addr: 0x%0.4X */
#define IID0_750   DU0|750,FLDS1(TS32) /*! Filter Addr: 0x%0.4X */
#define IID0_751   DU0|751,FLDSSTR /*! FILTERS BYPASS */
#define IID0_752   DU0|752,FLDSSTR /*! FILTERS 11-Bit */
#define IID0_753   DU0|753,FLDSSTR /*! FILTERS 29-bit */
#define IID0_754   DU0|754,FLDSSTR /*! FILTERS BYPASS */
#define IID0_755   DU0|755,FLDSSTR /*! FILTERS BYPASS */
#define IID0_756   DU0|756,FLDS1(TS32) /*! FILTERS: %d */
#define IID0_757   DU0|757,FLDS1(TS32) /*! ABOM: %d */
#define IID0_758   DU0|758,FLDS1(TS32) /*! NART: %d */
#define IID0_759   DU0|759,FLDS1(TS32) /*! LISTEN MODE: %d */
#define IID0_760   DU0|760,FLDS1(TS32) /*! POWER ENABLE: %d */
#define IID0_761   DU0|761,FLDS1(TS32) /*! Reset: %d */
#define IID0_762   DU0|762,FLDS1(TS32) /*! Debug: %d */
#define IID0_763   DU0|763,FLDS1(TS32) /*! Agg. BusOff: %d */
#define IID0_764   DU0|764,FLDS2(TS32,TS32) /*! 0x%0.8X%16X */
#define IID0_765   DU0|765,FLDSSTR /*! FILTERS 11-Bit */
#define IID0_766   DU0|766,FLDSSTR /*! FILTERS 29-bit */
#define IID0_767   DU0|767,FLDSSTR /*! FILTERS BYPASS */
#define IID0_768   DU0|768,FLDSSTR /*! FILTERS BYPASS */
#define IID0_769   DU0|769,FLDS1(TS32) /*! FILTERS: %d */
#define IID0_770   DU0|770,FLDS1(TS32) /*! ABOM: %d */
#define IID0_771   DU0|771,FLDS1(TS32) /*! NART: %d */
#define IID0_772   DU0|772,FLDS1(TS32) /*! LISTEN MODE: %d */
#define IID0_773   DU0|773,FLDS1(TS32) /*! POWER ENABLE: %d */
#define IID0_774   DU0|774,FLDS1(TS32) /*! Reset: %d */
#define IID0_775   DU0|775,FLDS1(TS32) /*! Debug: %d */
#define IID0_776   DU0|776,FLDS1(TS32) /*! Agg. BusOff: %d */
#define IID0_777   DU0|777,FLDSSTR /*! DC Start */
#define IID0_778   DU0|778,FLDSSTR /*! DC Stop */
#define IID0_779   DU0|779,FLDS1(TU32) /*! Start Timed Data Capture: %u */
#define IID0_780   DU0|780,FLDS1(TU32) /*! CAN Capture MASK change: %u */
#define IID0_781   DU0|781,FLDS7(TU32,TS32,TU32,TS32,TS32,TU32,TU32) /*! SRC: %u [0x%0.4X], Func: %u, C0: %d.%0.3u, C1: %d.%0.3u */
#define IID0_782   DU0|782,FLDS2(TS32,TU32) /*! Target: %d.%u */
#define IID0_783   DU0|783,FLDS1(TS32) /*! pnt: 0x%0.2X */
#define IID0_784   DU0|784,FLDS1(TU32) /*! Speed: %u km/h */
#define IID0_785   DU0|785,FLDS1(TU32) /*! RPM: %u */
#define IID0_786   DU0|786,FLDS1(TU32) /*! EOBD: Odometer: %u m */
#define IID0_787   DU0|787,FLDS1(TU32) /*! EOBD: Service Dist: %u km  */
#define IID0_788   DU0|788,FLDS1(TU32) /*! EOBD: Service Time: %u days  */
#define IID0_789   DU0|789,FLDS1(TU32) /*! EOBD: Fuel Level: %u percent  */
#define IID0_790   DU0|790,FLDS1(TU32) /*! EOBD: Fuel Economy: %u m/L  */
#define IID0_791   DU0|791,FLDS2(TU32,TU32) /*! EOBD: Fuel Rate: %u.%02uL/h  */
#define IID0_792   DU0|792,FLDS1(TU32) /*! EOBD: MIL: %u  */
#define IID0_793   DU0|793,FLDS1(TU32) /*! EOBD: Throttle: %u  */
#define IID0_794   DU0|794,FLDS2(TS32,TS32) /*! Coolant Temp: %d degC [0x%0.2X] */
#define IID0_795   DU0|795,FLDS2(TS32,TS32) /*! ECU Voltage: %dV  [0x%0.2X] */
#define IID0_796   DU0|796,FLDS2(TU32,TS32) /*! Barometric Pressure: %u mBar  [0x%0.2X] */
#define IID0_797   DU0|797,FLDS2(TU32,TS32) /*! Distance DTC Cleared: %u mBar  [0x%0.2X] */
#define IID0_798   DU0|798,FLDS2(TU32,TS32) /*! MAF: %u  [0x%0.2X] */
#define IID0_799   DU0|799,FLDS2(TU32,TS32) /*! Intake Temp: %u degC  [0x%0.2X] */
#define IID0_800   DU0|800,FLDS2(TU32,TS32) /*! Ignition Timing Advance: %u  [0x%0.2X] */
#define IID0_801   DU0|801,FLDS2(TU32,TS32) /*! Ignition Timing Advance: %u  [0x%0.2X] */
#define IID0_802   DU0|802,FLDS2(TU32,TS32) /*! Trip Fuel: %u uL [0x%0.2X] */
#define IID0_803   DU0|803,FLDS2(TU32,TS32) /*! Accumulated Trip Distance: %u  [0x%0.2X] */
#define IID0_804   DU0|804,FLDS2(TU32,TS32) /*! Intake MAP: %u kPa [0x%0.2X] */
#define IID0_805   DU0|805,FLDS3(TU32,TS32,TS32) /*! Engine Load: %u \% [0x%0.2X] */
#define IID0_806   DU0|806,FLDS2(TU32,TS32) /*! Dist with MIL: %u km [0x%0.2X] */
#define IID0_807   DU0|807,FLDS2(TU32,TS32) /*! Fuel Remaining: %u mL [0x%0.2X] */
#define IID0_808   DU0|808,FLDSSTR /*! EOBD: Mobileye 0x700 - Display and Warnings */
#define IID0_809   DU0|809,FLDSSTR /*! EOBD: Mobileye 0x760 - Car Signals */
#define IID0_810   DU0|810,FLDS1(TS32) /*! EOBD: Mobileye 0x%0.4X - Trafic Sign */
#define IID0_811   DU0|811,FLDSSTR /*! EOBD: Mobileye 0x0727 - Sign Type */
#define IID0_812   DU0|812,FLDS1(TU32) /*! Loading Page: %u */
#define IID0_813   DU0|813,FLDS1(TU32) /*! Found Current Write Index: %u */
#define IID0_814   DU0|814,FLDS1(TU32) /*! Loading Page: %u */
#define IID0_815   DU0|815,FLDS3(TU32,TU32,TU32) /*! In-Page Index: %u; FlashEntrySize %u paramrec: %u */
#define IID0_816   DU0|816,FLDS1(TU32) /*! Written Page: %u */
#define IID0_817   DU0|817,FLDS1(TU32) /*! Length: %u */
#define IID0_818   DU0|818,FLDS1(TU32) /*! RecStrcVer: %u */
#define IID0_819   DU0|819,FLDS1(TU32) /*! Par Inf Type: %u */
#define IID0_820   DU0|820,FLDS4(TS32,TS32,TU32,TU32) /*! PID: 0x%0.4X; SID: 0x%0.2X, Flags: 0x%0.4X, Period: %u */
#define IID0_821   DU0|821,FLDS7E(TSTR,TU32,TU32,TU32,TU32,TU32,TU32),FLDS4(TU32,TU32,TU32,TU32) /*!  ScpId: %s 0x%0.4X;\t ADD: 0x%0.4X, RESPADD: 0x%0.4X, ID: 0x%0.4X (Blk %u) (Sens %u); RespInd: %u, RespLength %u, Flags: 0x%0.4X, Period: %u */
#define IID0_822   DU0|822,FLDS5(TU32,TS32,TU32,TS32,TU32) /*! Func: 0x%0.2X; C0: %d.%u, C1: %d.%u */
#define IID0_823   DU0|823,FLDS3(TS32,TS32,TS32) /*! RectStr: 0x%0.4X, RecVer: 0x%0.8X, StrcType: 0x%0.2X */
#define IID0_824   DU0|824,FLDS2(TS32,TS32) /*! ID:0x%0.8X0x%0.8X */
#define IID0_825   DU0|825,FLDSSTR /*! Searching... */
#define IID0_826   DU0|826,FLDS3(TS32,TS32,TS32) /*! ID Hash: 0x%0.8X0x%0.8X ; Selection Mask: 0x%0.4X */
#define IID0_827   DU0|827,FLDS7E(TU32,TSTR,TU32,TU32,TU32,TU32,TU32),FLDS3(TU32,TU32,TU32) /*! Index %u, %s 0x%0.4X;\t TgtAdd: 0x%0.8X RspAdd: 0x%0.8X, Flags: 0x%0.4X, Period: %u, SID: 0x%0.2X, CmdInfo: 0x%0.2X, CmdLngth: %u */
#define IID0_828   DU0|828,FLDS7E(TU32,TSTR,TU32,TU32,TU32,TU32,TU32),FLDS5(TU32,TU32,TU32,TU32,TU32) /*! Index %u, %s 0x%0.4X;\t TgtAdd: 0x%0.8X RspAdd: 0x%0.8X ID: 0x%0.4X (Blk %u) (Sens %u); RespInd: %u, RespLength %u, Flags: 0x%0.4X, Period: %u */
#define IID0_829   DU0|829,FLDS5(TU32,TS32,TU32,TS32,TU32) /*! Func: 0x%0.2X; C0: %d.%u, C1: %d.%u */
#define IID0_830   DU0|830,FLDS3(TU32,TU32,TU32) /*! ID Hash: 0x%0.8X0x%0.8X ; Selection Mask: 0x%0.8X */
#define IID0_831   DU0|831,FLDS7E(TU32,TSTR,TU32,TU32,TU32,TU32,TU32),FLDS5(TU32,TU32,TU32,TU32,TU32) /*! Index %u, %s 0x%0.4X;\t TgtAdd: 0x%0.8X RspAdd: 0x%0.8X ID: 0x%0.4X (Blk %u) (Sens %u); RespInd: %u, RespLength %u, Flags: 0x%0.4X, Period: %u */
#define IID0_832   DU0|832,FLDS5(TU32,TS32,TU32,TS32,TU32) /*! Func: 0x%0.2X; C0: %d.%u, C1: %d.%u */
#define IID0_833   DU0|833,FLDS1(TU32) /*! RecCount: %u */
#define IID0_834   DU0|834,FLDS1(TU32) /*! RecCount: %u */
#define IID0_835   DU0|835,FLDS1(TU32) /*! RecCount: %u */
#define IID0_836   DU0|836,FLDS7E(TU32,TSTR,TU32,TU32,TU32,TU32,TU32),FLDS3(TU32,TU32,TU32) /*! Index %u, ScpId: %s 0x%0.4X;\t ID: 0x%0.4X (Blk %u) (Sens %u); RespInd: %u, RespLength %u, Flags: 0x%0.4X, Period: %u */
#define IID0_837   DU0|837,FLDS5(TU32,TS32,TU32,TS32,TU32) /*! Func: 0x%0.2X; C0: %d.%u, C1: %d.%u */
#define IID0_838   DU0|838,FLDSSTR /*! TEST MAC */
#define IID0_839   DU0|839,FLDS3(TU32,TU32,TU32) /*! DTC Expire: 0x%0.8X, TT:%u; TLS:%u */
#define IID0_840   DU0|840,FLDS3(TU32,TU32,TU32) /*! DTC Refresh: 0x%0.8X, JT:%u, RepJT: %u */
#define IID0_841   DU0|841,FLDS1(TS32) /*! DTC Tracked: 0x%0.8X */
#define IID0_842   DU0|842,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! New DTC: 0x%0.4X; Add:0x%0.8X, SrcMod: %u; RepStatus: 0x%0.2X; ModStat: 0x%0.2X */
#define IID0_843   DU0|843,FLDS2(TU32,TU32) /*! ECU Present: 0x%0.8X; 0x%0.2X */
#define IID0_844   DU0|844,FLDS4(TS32,TS32,TS32,TS32) /*! DTC ECU Stored: ADD: 0x%0.8X; RSPADD: 0x%0.8X; 0x%0.2X, MaskInfo: 0x%0.4X */
#define IID0_845   DU0|845,FLDSSTR /*! Fetch UDS DTC ECU Adds */
#define IID0_846   DU0|846,FLDSSTR /*! Fetch KWP DTC ECU Adds */
#define IID0_847   DU0|847,FLDS3(TS32,TS32,TS32) /*! ECU Retrieved: 0x%0.8X; 0x%0.2X, Mask: 0x%0.4X */
#define IID0_848   DU0|848,FLDS1(TS32) /*! UDS ECU: 0x%0.8X */
#define IID0_849   DU0|849,FLDS1(TS32) /*! KWP ECU: 0x%0.8X */
#define IID0_850   DU0|850,FLDS1(TS32) /*! UDS ECU: 0x%0.8X */
#define IID0_851   DU0|851,FLDSSTR /*! NO MORE UDS ECUs */
#define IID0_852   DU0|852,FLDS1(TS32) /*! KWP ECU: 0x%0.8X */
#define IID0_853   DU0|853,FLDSSTR /*! NO MORE KWP ECUs */
#define IID0_854   DU0|854,FLDS1(TS32) /*! UDS Unsolicited Add: 0x%0.8X */
#define IID0_855   DU0|855,FLDS4(TU32,TU32,TU32,TU32) /*! ParamAdd: 0x%0.8X]; ParamIdx: %u ParamLength %u Flags: 0x%0.4X */
#define IID0_856   DU0|856,FLDS5(TU32,TU32,TS32,TS32,TU32) /*! J1939 Per Info. PGN: 0x%0.4X; SPN: %d; Value: 0x%0.2X : %d; Idx: %u */
#define IID0_857   DU0|857,FLDS5(TU32,TU32,TS32,TS32,TU32) /*! J1939 Per Info. PGN: 0x%0.4X; SPN: %d; Value: 0x%0.2X : %d; Idx: %u */
#define IID0_858   DU0|858,FLDS7E(TU8,TU16,TU8,TU8,TU8,TU8,TU8),FLDS5(TU8,TU8,TU8,TU8,TU8) /*! id:0x%0.2X pgn:0x%0.4X prty:0x%0.2X lngth:%02u dta:0x%0.2X:0x%0.2X:0x%0.2X:0x%0.2X:0x%0.2X:0x%0.2X:0x%0.2X:0x%0.2X */
#define IID0_859   DU0|859,FLDS1(TU32) /*! 0x%0.4X */
#define IID0_860   DU0|860,FLDS3(TU32,TS32,TU32) /*! Test %X, testVal_1: %d, mod: %u */
#define IID0_861   DU0|861,FLDS1(TS32) /*! CB DATA RX: 0x%0.2X */
#define IID0_862   DU0|862,FLDS1(TS32) /*! CB TIMEOUT: 0x%0.2X */
#define IID0_863   DU0|863,FLDS1(TS32) /*! CB ACTIVE: 0x%0.2X */
#define IID0_864   DU0|864,FLDS1(TS32) /*! CB PHY ERROR: 0x%0.2X */
#define IID0_865   DU0|865,FLDS1(TS32) /*! CB TXBUF: 0x%0.2X */
#define IID0_866   DU0|866,FLDS1(TS32) /*! CB MSG TIMEOUT: 0x%0.2X */
#define IID0_867   DU0|867,FLDS1(TS32) /*! CB CLOSED: 0x%0.2X */
#define IID0_868   DU0|868,FLDS1(TU32) /*! MAF_Scaler %u  */
#define IID0_869   DU0|869,FLDS1(TS32) /*! CB: %X */
#define IID0_870   DU0|870,FLDS1(TS32) /*! CANBus TimeOut: %d */
#define IID0_871   DU0|871,FLDS2(TS32,TS32) /*! 0x%0.2X %d */
#define IID0_872   DU0|872,FLDSSTR /*! ISO9141 PROTOCOL DETECTED */
#define IID0_873   DU0|873,FLDSSTR /*! ISO14230 PROTOCOL DETECTED */
#define IID0_874   DU0|874,FLDSSTR /*! VAG PROTOCOL DETECTED */
#define IID0_875   DU0|875,FLDSSTR /*! ISO14230 PROTOCOL DETECTED */
#define IID0_876   DU0|876,FLDSSTR /*! VAG PROTOCOL DETECTED 2 */
#define IID0_877   DU0|877,FLDS1(TS32) /*! OBD2 Set WaitState: 0x%0.4X */
#define IID0_878   DU0|878,FLDS1(TS32) /*! REQ PID:%d */
#define IID0_879   DU0|879,FLDS1(TS32) /*! CANID: 0x%0.4X */
#define IID0_880   DU0|880,FLDS1(TS32) /*! CB DATA RX: 0x%0.2X */
#define IID0_881   DU0|881,FLDS1(TS32) /*! CB TIMEOUT: 0x%0.2X */
#define IID0_882   DU0|882,FLDS1(TS32) /*! CB ACTIVE: 0x%0.2X */
#define IID0_883   DU0|883,FLDS1(TS32) /*! CB PHY ERROR: 0x%0.2X */
#define IID0_884   DU0|884,FLDS1(TS32) /*! CB TXBUF: 0x%0.2X */
#define IID0_885   DU0|885,FLDS1(TS32) /*! CB MSG TIMEOUT: 0x%0.2X */
#define IID0_886   DU0|886,FLDS1(TS32) /*! CB CLOSED: 0x%0.2X */
#define IID0_887   DU0|887,FLDS4(TS32,TS32,TS32,TS32) /*! S0x%0.4X R:%d I:%d T:%d */
#define IID0_888   DU0|888,FLDS1(TS32) /*! OBD2 Exit Wait: 0x%0.4X */
#define IID0_889   DU0|889,FLDS1(TS32) /*! OBD2 State: 0x%0.2X */
#define IID0_890   DU0|890,FLDS1(TS32) /*! OBD2 Exit Wait: 0x%0.4X */
#define IID0_891   DU0|891,FLDS1(TS32) /*! OBD2 State: 0x%0.2X */
#define IID0_892   DU0|892,FLDS2(TS32,TS32) /*! 0x%0.2X %d */
#define IID0_893   DU0|893,FLDSSTR /*! ISO9141 CS MATCHED */
#define IID0_894   DU0|894,FLDS2(TS32,TS32) /*! ISO9141 CS: 0x%0.2X 0x%0.2X */
#define IID0_895   DU0|895,FLDS3(TS32,TS32,TS32) /*! ISO9141 CS: 0x%0.2X 0x%0.2X 0x%0.2X */
#define IID0_896   DU0|896,FLDS1(TS32) /*! VAG 0x%0.2X */
#define IID0_897   DU0|897,FLDS3(TS32,TS32,TS32) /*! 0x%0.2X %d 0x%0.2X */
#define IID0_898   DU0|898,FLDS1(TS32) /*! 0x%0.2X */
#define IID0_899   DU0|899,FLDS2(TS32,TS32) /*! 0x%0.2X 0x%0.2X */
#define IID0_900   DU0|900,FLDS2(TS32,TS32) /*! 0x%0.2X 0x%0.2X */
#define IID0_901   DU0|901,FLDS2(TS32,TS32) /*! KWP2000: 0x%0.2X State: %d */
#define IID0_902   DU0|902,FLDSSTR /*! ISO9141 CS MATCHED */
#define IID0_903   DU0|903,FLDS2(TS32,TS32) /*! KWP2000 CS: 0x%0.2X 0x%0.2X */
#define IID0_904   DU0|904,FLDS1(TS32) /*! Next PID: 0x%0.2X */
#define IID0_905   DU0|905,FLDS2(TS32,TS32) /*! PID: %d PIDFast: %d */
#define IID0_906   DU0|906,FLDS1(TS32) /*! Next PID: 0x%0.2X */
#define IID0_907   DU0|907,FLDS1(TSTR) /*! VIN: %s */
#define IID0_908   DU0|908,FLDSSTR /*! ECU 0x09 RESPONSE */
#define IID0_909   DU0|909,FLDSSTR /*! ECU 0x09 RESPONSE  */
#define IID0_910   DU0|910,FLDSSTR /*! VIN 0x09 RESPONSE */
#define IID0_911   DU0|911,FLDSSTR /*! ERROR 0x09 RESPONSE */
#define IID0_912   DU0|912,FLDSSTR /*! PID 0x09 RESPONSE */
#define IID0_913   DU0|913,FLDSSTR /*! ECU 0xE7 RESPONSE */
#define IID0_914   DU0|914,FLDSSTR /*! SEND 0x09 RESPONSE 1 */
#define IID0_915   DU0|915,FLDSSTR /*! SEND 0x09 RESPONSE 2 */
#define IID0_916   DU0|916,FLDSSTR /*! SEND 0x09 RESPONSE Default */
#define IID0_917   DU0|917,FLDSSTR /*! SEND 0x09 RESPONSE 3 */
#define IID0_918   DU0|918,FLDSSTR /*! SEND 0x29 RESPONSE 4 */
#define IID0_919   DU0|919,FLDSSTR /*! ECU 0xE7 RESPONSE */
#define IID0_920   DU0|920,FLDS1(TS32) /*! CONN 0x%0.2X */
#define IID0_921   DU0|921,FLDSSTR /*! CHANNEL RESP */
#define IID0_922   DU0|922,FLDS2(TS32,TS32) /*! Tx: 0x%0.4X Rx: 0x%0.4X */
#define IID0_923   DU0|923,FLDSSTR /*! CONN ACK */
#define IID0_924   DU0|924,FLDS2(TS32,TS32) /*! TimeOut: %d minTime: %d */
#define IID0_925   DU0|925,FLDS2(TS32,TS32) /*! KWP2000: 0x%0.2X State: %d */
#define IID0_926   DU0|926,FLDS2(TS32,TS32) /*! KWP2000 CS: 0x%0.2X 0x%0.2X */
#define IID0_927   DU0|927,FLDS1(TS32) /*! Fuel: %d \230/sec */
#define IID0_928   DU0|928,FLDS2(TS32,TS32) /*! Fuel: %d ml rate:%d ul/sec */
#define IID0_929   DU0|929,FLDS2(TS32,TS32) /*! DTC: 0x%0.4X MEM: 0x%0.4X */
#define IID0_930   DU0|930,FLDS2(TS32,TS32) /*! DTC: 0x%0.4X MEM: 0x%0.4X */
#define IID0_931   DU0|931,FLDS4(TS32,TS32,TS32,TS32) /*! DTC %d: 0x%0.4X idx: %d Mask: 0x%0.4X */
#define IID0_932   DU0|932,FLDSSTR /*! PID Config Mask Init Complete */
#define IID0_933   DU0|933,FLDS1(TS32) /*! Flag: 0x%0.4X */
#define IID0_934   DU0|934,FLDSSTR /*! All VIN Data Received */
#define IID0_935   DU0|935,FLDS1(TU32) /*! ISO 15765 Reported DTC Count: %u */
#define IID0_936   DU0|936,FLDSSTR /*! Message does not contain DTC's */
#define IID0_937   DU0|937,FLDS1(TU32) /*! Valid DTC's Found: %u */
#define IID0_938   DU0|938,FLDS1(TU32) /*! MAF_Scaler %u  */
#define IID0_939   DU0|939,FLDSSTR /*! No more supported PID masks */
#define IID0_940   DU0|940,FLDS1(TS32) /*! MIL: 0x%0.2X */
#define IID0_941   DU0|941,FLDS1(TU32) /*! EngLd: %u percent */
#define IID0_942   DU0|942,FLDS1(TS32) /*! CoolntTmp: %d degC */
#define IID0_943   DU0|943,FLDS1(TU32) /*! MAP: %u kPa */
#define IID0_944   DU0|944,FLDS1(TU32) /*! RPM: %u */
#define IID0_945   DU0|945,FLDS1(TU32) /*! Spd: %ukm/h */
#define IID0_946   DU0|946,FLDS1(TS32) /*! InAirTemp: %d degC  */
#define IID0_947   DU0|947,FLDS1(TU32) /*! ThrttlePos: %u percent */
#define IID0_948   DU0|948,FLDS1(TU32) /*! DrvTime: %u */
#define IID0_949   DU0|949,FLDS1(TU32) /*! Fuel Lvl: %u percent */
#define IID0_950   DU0|950,FLDS1(TU32) /*! MIL Dst: %u m */
#define IID0_951   DU0|951,FLDS1(TU32) /*! DST DTC Clr: %u */
#define IID0_952   DU0|952,FLDS1(TU32) /*! Baro Press: %u kPa */
#define IID0_953   DU0|953,FLDS1(TU32) /*! EcuVltg %u mV */
#define IID0_954   DU0|954,FLDS1(TU32) /*! AbsEngLoad %u */
#define IID0_955   DU0|955,FLDS1(TS32) /*! AmbTmp.:%d degC  */
#define IID0_956   DU0|956,FLDS1(TU32) /*! AccPos: %u percent */
#define IID0_957   DU0|957,FLDS1(TU32) /*! Lambdas Pres: 0x%0.2X  */
#define IID0_958   DU0|958,FLDS1(TU32) /*! AE Ratio: %u (x1000)  */
#define IID0_959   DU0|959,FLDS1(TU32) /*! AE Ratio 1: %u  */
#define IID0_960   DU0|960,FLDS1(TU32) /*! AE Ratio 2: %u  */
#define IID0_961   DU0|961,FLDS2(TS32,TS32) /*! ER MAX: %d%  */
#define IID0_962   DU0|962,FLDS2(TS32,TS32) /*! LmbdaV MAX: %d%  */
#define IID0_963   DU0|963,FLDS2(TS32,TS32) /*! LmbdaI MAX: %d%  */
#define IID0_964   DU0|964,FLDS2(TS32,TS32) /*! MAP MAX: %d%  */
#define IID0_965   DU0|965,FLDS2(TS32,TS32) /*! MAF MAX: %d%  */
#define IID0_966   DU0|966,FLDS2(TS32,TS32) /*! Shrt Trm FT: %d percent%  */
#define IID0_967   DU0|967,FLDS1(TS32) /*! Long Trm FT: %d percent  */
#define IID0_968   DU0|968,FLDS2(TU32,TSTR) /*! TST: Mil %u, Ret: %s */
#define IID0_969   DU0|969,FLDS1(TU32) /*! ChannelID: %u */
#define IID0_970   DU0|970,FLDS3(TU32,TU32,TU32) /*! KWP SERV13 DTC RepCount: %u DataLength: %u, DtcLength: %u */
#define IID0_971   DU0|971,FLDS4(TU32,TU32,TU32,TU32) /*! KWP Svc-%u DTC RepCount: %u DataLength: %u, DtcLength: %u */
#define IID0_972   DU0|972,FLDS2(TU32,TU32) /*! KWP: Local ID : %u [0x%0.2X]  */
#define IID0_973   DU0|973,FLDS2(TU32,TU32) /*! TP2: BlockID: 0x%0.2X SensID: 0x%0.2X */
#define IID0_974   DU0|974,FLDS1(TU32) /*! KWP Serv:21 LocalID: 0x%0.2X */
#define IID0_975   DU0|975,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! KWP: SensorId: %u [0x%0.4X]; ResponseIdx: %u ParamId %u, Flags: 0x%0.4X */
#define IID0_976   DU0|976,FLDS1(TU32) /*! KWP: Local ID Item scan: %u  */
#define IID0_977   DU0|977,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! KWP: ParamID: %u [0x%0.4X]; ParamIdx: %u ParamLength %u Flags: 0x%0.4X */
#define IID0_978   DU0|978,FLDS1(TU32) /*! KWP: No More Data %u */
#define IID0_979   DU0|979,FLDS5(TU32,TU32,TU32,TSTR,TU32) /*! ReadById Found: 0x%0.4X Block: 0x%0.2X, Index: %u, ScpID: %s %u  */
#define IID0_980   DU0|980,FLDS3(TU32,TU32,TU32) /*! UDS DTC Subfunc : %u [0x%0.2X] Status Mask: 0x%0.2X  */
#define IID0_981   DU0|981,FLDS2(TU32,TU32) /*! UDS: Local ID : %u [0x%0.4X]  */
#define IID0_982   DU0|982,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! UDS: ParamID: %u [0x%0.4X]; ParamIdx: %u ParamLength %u Flags: 0x%0.4X */
#define IID0_983   DU0|983,FLDS1(TU32) /*! UDS: Not enough Data %u */
#define IID0_984   DU0|984,FLDS1(TU32) /*! GETSTATE: %u */
#define IID0_985   DU0|985,FLDS1(TU32) /*! FLG: 0x%0.4X */
#define IID0_986   DU0|986,FLDS5(TU32,TU32,TU32,TSTR,TU32) /*! ReadByID Found: 0x%0.8X, Add: 0x%0.4X, Index: %u, ScpID: %s %u  */
#define IID0_987   DU0|987,FLDS5(TU32,TU32,TU32,TSTR,TU32) /*! ReadByID Found: 0x%0.8X, Add: 0x%0.4X, Index: %u, ScpID: %s %u  */
#define IID0_988   DU0|988,FLDSSTR /*! PHY and DL Open */
#define IID0_989   DU0|989,FLDSSTR /*! PHY and DL Closed */
#define IID0_990   DU0|990,FLDS1(TU32) /*! Rx Size before: %u */
#define IID0_991   DU0|991,FLDS1(TU32) /*! Rx Size after: %u */
#define IID0_992   DU0|992,FLDS2(TU32,TU32) /*! VNI ISO14230 TEST #%u [0x%0.2X] */
#define IID0_993   DU0|993,FLDSSTR /*! PHY and DL Open */
#define IID0_994   DU0|994,FLDSSTR /*! DL Closed */
#define IID0_995   DU0|995,FLDS1(TU32) /*! Rx Size before: %u */
#define IID0_996   DU0|996,FLDS1(TS32) /*! Address: 0x%0.8X */
#define IID0_997   DU0|997,FLDS1(TS32) /*! Address: 0x%0.8X */
#define IID0_998   DU0|998,FLDS2(TU32,TU32) /*! ISO15765 CALLBACK: %u [%X] */
#define IID0_999   DU0|999,FLDS2(TU32,TU32) /*! VNI ISO15765 TEST #%u [0x%0.2X] */
#define IID0_1000   DU0|1000,FLDS2(TU32,TU32) /*! VNI ISO15765 TEST #%u [0x%0.2X] */
#define IID0_1001   DU0|1001,FLDS1(TU32) /*! Add: 0x%0.8X */
#define IID0_1002   DU0|1002,FLDS1(TU32) /*! Raw Data Add: 0x%0.8X */
#define IID0_1003   DU0|1003,FLDS2(TU32,TU32) /*! J1939 CLBCK %u [%X] */
#define IID0_1004   DU0|1004,FLDSSTR /*! PHY/DL Open */
#define IID0_1005   DU0|1005,FLDSSTR /*! DL Closed */
#define IID0_1006   DU0|1006,FLDSSTR /*! PHY and DL Open */
#define IID0_1007   DU0|1007,FLDSSTR /*! PHY and DL Closed */
#define IID0_1008   DU0|1008,FLDSSTR /*! SEND TP20 Request */
#define IID0_1009   DU0|1009,FLDS1(TU32) /*! Rx Size after: %u */
#define IID0_1010   DU0|1010,FLDS3(TU32,TU32,TU32) /*! L: %u; SID: [0x%0.2X]; SUBF [0x%0.2X] */
#define IID0_1011   DU0|1011,FLDS2(TU32,TU32) /*! VNI TP2.0 TEST #%u [0x%0.2X] */
#define IID0_1012   DU0|1012,FLDSSTR /*! Button Press Accepted. Vehicle Moving */
#define IID0_1013   DU0|1013,FLDSSTR /*! Button Press Accepted. Vehicle Stationary */
#define IID0_1014   DU0|1014,FLDS1(TU32) /*! DIAL BUTTON %u */
#define IID0_1015   DU0|1015,FLDS1(TSTR) /*! Please Call Me to number %s */
#define IID0_1016   DU0|1016,FLDS1(TS32) /*!  X: %d */
#define IID0_1017   DU0|1017,FLDS1(TS32) /*!  Y: %d */
#define IID0_1018   DU0|1018,FLDS1(TS32) /*!  Z: %d */
#define IID0_1019   DU0|1019,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! STD DEV X:%d Y:%d Z:%d R:%d(%d) */
#define IID0_1020   DU0|1020,FLDS1(TS32) /*! STD Dev Init|abs_idx=%d */
#define IID0_1021   DU0|1021,FLDS2(TS32,TS32) /*! STD Dev Cal Prev Ave|abs_idx=%d|sumCount=%d */
#define IID0_1022   DU0|1022,FLDS2(TS32,TS32) /*! STD Dev Run|abs_idx=%d|sumCount=%d */
#define IID0_1023   DU0|1023,FLDS2(TS32,TS32) /*! STDDEV: Timer: %d us || Count: %d */
#define IID0_1024   DU0|1024,FLDS4(TS32,TS32,TS32,TS32) /*! ACC DATA METRIC-RAW DC: X:%d Y:%d Z:%d R:%d */
#define IID0_1025   DU0|1025,FLDS4(TS32,TS32,TS32,TS32) /*! ACC DATA METRIC-HPF DC: X:%d Y:%d Z:%d R:%d */
#define IID0_1026   DU0|1026,FLDS1(TS32) /*! Heading: %d */
#define IID0_1027   DU0|1027,FLDS4(TS32,TS32,TS32,TS32) /*! FL: %d,HC1: %d,HC2: %d,HC2+1: %d */
#define IID0_1028   DU0|1028,FLDS2(TS32,TS32) /*! GPSSpeed: %d,Lateral_GForce: %d\r\n */
#define IID0_1029   DU0|1029,FLDS2(TS32,TS32) /*! RCI: %d,RCC: %d */
#define IID0_1030   DU0|1030,FLDS2(TS32,TS32) /*! LCI: %d,LCC: %d */
#define IID0_1031   DU0|1031,FLDS3(TS32,TS32,TS32) /*! RCSM: %d,RCSS: %d,RCSC: %d */
#define IID0_1032   DU0|1032,FLDS3(TS32,TS32,TS32) /*! LCSM: %d,LCSS: %d,LCSC: %d */
#define IID0_1033   DU0|1033,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! RCI: %d,RCC: %d,RCSM: %d,RCSS: %d,RCSC: %d */
#define IID0_1034   DU0|1034,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! LCI: %d,LCC: %d,LCSM: %d,LCSS: %d,LCSC: %d */
#define IID0_1035   DU0|1035,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! RCI: %d,RCC: %d,RCSM: %d,RCSS: %d,RCSC: %d */
#define IID0_1036   DU0|1036,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! LCI: %d,LCC: %d,LCSM: %d,LCSS: %d,LCSC: %d */
#define IID0_1037   DU0|1037,FLDS1(TS32) /*! Hard Right Turn: %d */
#define IID0_1038   DU0|1038,FLDS1(TS32) /*! Hard Left Turn: %d */
#define IID0_1039   DU0|1039,FLDSSTR /*! Normal Turn */
#define IID0_1040   DU0|1040,FLDS2(TS32,TS32) /*! SpeedChange: %d,Longitudinal_GForce: %d */
#define IID0_1041   DU0|1041,FLDS2(TS32,TS32) /*! BI: %d,BC: %d */
#define IID0_1042   DU0|1042,FLDS2(TS32,TS32) /*! AI: %d,AC: %d */
#define IID0_1043   DU0|1043,FLDS3(TS32,TS32,TS32) /*! BSM: %d,BSS: %d,BSC: %d */
#define IID0_1044   DU0|1044,FLDS3(TS32,TS32,TS32) /*! ASM: %d,ASS: %d,ASC: %d */
#define IID0_1045   DU0|1045,FLDSSTR /*! Crash Flag Cleared */
#define IID0_1046   DU0|1046,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! BI: %d,BC: %d,BSM: %d,BSS: %d,BSC: %d */
#define IID0_1047   DU0|1047,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! AI: %d,AC: %d,ASM: %d,ASS: %d,ASC: %d */
#define IID0_1048   DU0|1048,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! BI: %d,BC: %d,BSM: %d,BSS: %d,BSC: %d */
#define IID0_1049   DU0|1049,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! AI: %d,AC: %d,ASM: %d,ASS: %d,ASC: %d */
#define IID0_1050   DU0|1050,FLDS1(TS32) /*! Hard Acceleration: %d */
#define IID0_1051   DU0|1051,FLDS1(TS32) /*! Crash: %d */
#define IID0_1052   DU0|1052,FLDS1(TS32) /*! Emergency Breaking: %d */
#define IID0_1053   DU0|1053,FLDS1(TS32) /*! Hard Breaking: %d */
#define IID0_1054   DU0|1054,FLDS1(TS32) /*! Crash Raised: %d */
#define IID0_1055   DU0|1055,FLDSSTR /*! Crash Timeout */
#define IID0_1056   DU0|1056,FLDS3(TS32,TS32,TS32) /*! 1HZ_ACC_AVE_MILLI: X: %d,Y: %d,Z: %d */
#define IID0_1057   DU0|1057,FLDSSTR /*! No Cal */
#define IID0_1058   DU0|1058,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! FL: %d,HC1: %d,HC2: %d,Lat_G[mg]: %d,GPSSpeed[km/h]: %d,SC[km/h]: %d,Long_G[mg]: %d */
#define IID0_1059   DU0|1059,FLDSSTR /*! An Incident occurred */
#define IID0_1060   DU0|1060,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! dVParams: %d, SR:%d S100: %d Count:%d Sum:%d,%d,%d */
#define IID0_1061   DU0|1061,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Sample: %d,%d,%d Buffer: %d,%d,%d */
#define IID0_1062   DU0|1062,FLDS1(TS32) /*! dV_Timer: %d us */
#define IID0_1063   DU0|1063,FLDSSTR /*! Z-Axis Incident */
#define IID0_1064   DU0|1064,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Accident: Dur: %d n: %d Ave: %d Max: %d THR: %d */
#define IID0_1065   DU0|1065,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! ACC: EVT %d(%d) STS: 0x%0.4X TIMEOUT: %d MSG: 0x%0.8X E:0x%0.8X(%d) */
#define IID0_1066   DU0|1066,FLDS1(TS32) /*! ACC: RAISE %d EVENTS */
#define IID0_1067   DU0|1067,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! DeltaV %d(%d) X:%d(%d) Y:%d(%d) Z:%d(%d) DIR:%d */
#define IID0_1068   DU0|1068,FLDS1(TS32) /*! RaiseEvent_Timer: %d us */
#define IID0_1069   DU0|1069,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! Acc %d(%d) X:%d(%d) Y:%d(%d) Z:%d(%d) DIR:%d */
#define IID0_1070   DU0|1070,FLDSSTR /*! HIGH */
#define IID0_1071   DU0|1071,FLDSSTR /*! LOW */
#define IID0_1072   DU0|1072,FLDS4(TS32,TS32,TS32,TS32) /*! 0x%0.2X Pitch: %d Roll: %d Yaw: %d */
#define IID0_1073   DU0|1073,FLDSSTR /*! Call STD Dev */
#define IID0_1074   DU0|1074,FLDS1(TS32) /*! Burst Data Sample Rate=%d */
#define IID0_1075   DU0|1075,FLDS3(TS32,TS32,TS32) /*! Num Processed Rec: %d || Num Processed Samp: %d || Total Num Samp: %d */
#define IID0_1076   DU0|1076,FLDSSTR /*! Call STD Dev */
#define IID0_1077   DU0|1077,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! 0x%0.2X A:%d-%d(%d) G:%d(%d) S:%d(%d) R:%d(%d) V:%d(%d) T:%d(%d) */
#define IID0_1078   DU0|1078,FLDSSTR /*! Burst Data Persist - Detected */
#define IID0_1079   DU0|1079,FLDS1(TS32) /*! Burst Data Persist - Cool down %d */
#define IID0_1080   DU0|1080,FLDS1(TS32) /*! Burst Data Persist - Unprocessed Samples: %d */
#define IID0_1081   DU0|1081,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! Burst Data Persist - Record Nr %d, Start Index: Time: %d, GPS: %d, Speed: %d, RPM: %d, Volt: %d, Acc: %d */
#define IID0_1082   DU0|1082,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! Burst Data Persist - Record Nr %d, Data Index: Time: %d, GPS: %d, Speed: %d, RPM: %d, Volt: %d, Acc: %d */
#define IID0_1083   DU0|1083,FLDS1(TS32) /*! Burst Data Timeout: %d */
#define IID0_1084   DU0|1084,FLDS1(TS32) /*! Burst Data Flash Page = %d */
#define IID0_1085   DU0|1085,FLDSSTR /*! Burst Data Flash Full - starting at beginnig */
#define IID0_1086   DU0|1086,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! IDX1: %d TS1: %d || IDX2: %d TS2: %d || IDXW: %d */
#define IID0_1087   DU0|1087,FLDS1(TS32) /*! Actual Sample Rate: %d */
#define IID0_1088   DU0|1088,FLDS3(TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1089   DU0|1089,FLDS3(TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1090   DU0|1090,FLDS3(TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1091   DU0|1091,FLDSSTR /*! ACC: 1250Hz */
#define IID0_1092   DU0|1092,FLDSSTR /*! ACC: 400Hz */
#define IID0_1093   DU0|1093,FLDSSTR /*! ACC: 200Hz */
#define IID0_1094   DU0|1094,FLDSSTR /*! ACC: 100Hz */
#define IID0_1095   DU0|1095,FLDSSTR /*! ACC: 1250Hz */
#define IID0_1096   DU0|1096,FLDS2(TS32,TS32) /*! ACC Offset: %d (%d) */
#define IID0_1097   DU0|1097,FLDS4(TS32,TS32,TS32,TS32) /*! ACC LIS3DH OFFSET OVR: %d X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1098   DU0|1098,FLDS3(TS32,TS32,TS32) /*! ACC LIS3DH X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1099   DU0|1099,FLDS3(TS32,TS32,TS32) /*! ACC MMA7455 X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1100   DU0|1100,FLDS3(TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1101   DU0|1101,FLDS2(TS32,TS32) /*! ACC IDX: %d Flag: %d */
#define IID0_1102   DU0|1102,FLDS3(TS32,TS32,TS32) /*! xyz: %0d,%0d,%0d */
#define IID0_1103   DU0|1103,FLDS1(TS32) /*! ACC Count: %d */
#define IID0_1104   DU0|1104,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS3(TS32,TS32,TS32) /*! SF: %dHz T: %dus || DSF: %dHz T: %dus || DSP: %dHz T: %dus || SA: %d MaxSA: %d MinSA: %d CheckSACount: %d */
#define IID0_1105   DU0|1105,FLDS3(TS32,TS32,TS32) /*! ACC Count: %d Samples: %d SubSamples: %d */
#define IID0_1106   DU0|1106,FLDSSTR /*! Rotate around x axis */
#define IID0_1107   DU0|1107,FLDSSTR /*! Rotate around y axis */
#define IID0_1108   DU0|1108,FLDSSTR /*! Rotate around z axis */
#define IID0_1109   DU0|1109,FLDS4(TS32,TS32,TS32,TS32) /*! ACC AUTO: %d %d %d %d */
#define IID0_1110   DU0|1110,FLDSSTR /*! Leveling... */
#define IID0_1111   DU0|1111,FLDSSTR /*! Front/Back... */
#define IID0_1112   DU0|1112,FLDSSTR /*! Back/Front... */
#define IID0_1113   DU0|1113,FLDS1(TS32) /*! Acc Calibration State = %d */
#define IID0_1114   DU0|1114,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1115   DU0|1115,FLDS1(TS32) /*! Calculated Alpha = %d */
#define IID0_1116   DU0|1116,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1117   DU0|1117,FLDS1(TS32) /*! Calculated Beta = %d */
#define IID0_1118   DU0|1118,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1119   DU0|1119,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1120   DU0|1120,FLDS1(TS32) /*! Calculated Theta = %d */
#define IID0_1121   DU0|1121,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1122   DU0|1122,FLDS3(TS32,TS32,TS32) /*! Acc: Alpha = %d, Beta = %d, Theta = %d */
#define IID0_1123   DU0|1123,FLDS1(TS32) /*! Acc Calibration State = %d */
#define IID0_1124   DU0|1124,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ACC CAL X: %d 0x%0.4X Y: %d 0x%0.4X Z: %d 0x%0.4X */
#define IID0_1125   DU0|1125,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X (0x%0.4X) Y: 0x%0.4X (0x%0.4X) Z: 0x%0.4X (0x%0.4X) */
#define IID0_1126   DU0|1126,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ACC X: %d(%d) Y: %d(%d) Z: %d(%d) */
#define IID0_1127   DU0|1127,FLDS1(TS32) /*! ACC MOT: %d */
#define IID0_1128   DU0|1128,FLDS4(TS32,TS32,TS32,TS32) /*! ACC MOT: %d X: %d Y: %d Z: %d */
#define IID0_1129   DU0|1129,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Acc Move: %d (%d) Time: %d (%d) State: %d n:%d */
#define IID0_1130   DU0|1130,FLDS1(TS32) /*! Dot Product: %d */
#define IID0_1131   DU0|1131,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! %d %d %d %d %d %d */
#define IID0_1132   DU0|1132,FLDS1(TS32) /*! ACC FILTER: %d */
#define IID0_1133   DU0|1133,FLDS1(TS32) /*! ACC MMA7455: 0x%0.2X */
#define IID0_1134   DU0|1134,FLDS2(TS32,TS32) /*! LIS3DH RESET 0x%0.2X Loop: %d */
#define IID0_1135   DU0|1135,FLDSSTR /*! LIS3DH RESET */
#define IID0_1136   DU0|1136,FLDS1(TS32) /*! LIS3DH OFFSET 0x%0.2X */
#define IID0_1137   DU0|1137,FLDSSTR /*! LIS3DH RESET */
#define IID0_1138   DU0|1138,FLDSSTR /*! An Incident occurred */
#define IID0_1139   DU0|1139,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! dVParams: %d, SR:%d S100: %d Count:%d Sum:%d,%d,%d */
#define IID0_1140   DU0|1140,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Sample: %d,%d,%d Buffer: %d,%d,%d */
#define IID0_1141   DU0|1141,FLDS1(TS32) /*! dV_Timer: %d us */
#define IID0_1142   DU0|1142,FLDSSTR /*! Z-AXIS */
#define IID0_1143   DU0|1143,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Accident: Dur: %d n: %d Ave: %d Max: %d THR: %d */
#define IID0_1144   DU0|1144,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! ACC: EVT %d(%d) STS: 0x%0.4X TIMEOUT: %d MSG: 0x%0.8X E:0x%0.8X(%d) */
#define IID0_1145   DU0|1145,FLDS1(TS32) /*! ACC: RAISE %d EVENTS */
#define IID0_1146   DU0|1146,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! DeltaV %d(%d) X:%d(%d) Y:%d(%d) Z:%d(%d) DIR:%d */
#define IID0_1147   DU0|1147,FLDS1(TS32) /*! RaiseEvent_Timer: %d us */
#define IID0_1148   DU0|1148,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! Acc %d(%d) X:%d(%d) Y:%d(%d) Z:%d(%d) DIR:%d */
#define IID0_1149   DU0|1149,FLDSSTR /*! HIGH */
#define IID0_1150   DU0|1150,FLDSSTR /*! LOW */
#define IID0_1151   DU0|1151,FLDS4(TS32,TS32,TS32,TS32) /*! 0x%0.2X Pitch: %d Roll: %d Yaw: %d */
#define IID0_1152   DU0|1152,FLDS3(TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1153   DU0|1153,FLDS3(TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1154   DU0|1154,FLDS3(TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1155   DU0|1155,FLDSSTR /*! ACC: 1250Hz */
#define IID0_1156   DU0|1156,FLDSSTR /*! ACC: 400Hz */
#define IID0_1157   DU0|1157,FLDSSTR /*! ACC: 200Hz */
#define IID0_1158   DU0|1158,FLDSSTR /*! ACC: 100Hz */
#define IID0_1159   DU0|1159,FLDSSTR /*! ACC: 1250Hz */
#define IID0_1160   DU0|1160,FLDS2(TS32,TS32) /*! ACC Offset: %d (%d) */
#define IID0_1161   DU0|1161,FLDS4(TS32,TS32,TS32,TS32) /*! ACC LIS3DH OFFSET OVR: %d X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1162   DU0|1162,FLDS3(TS32,TS32,TS32) /*! ACC LIS3DH X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1163   DU0|1163,FLDS3(TS32,TS32,TS32) /*! ACC MMA7455 X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1164   DU0|1164,FLDS3(TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X Y: 0x%0.4X Z: 0x%0.4X */
#define IID0_1165   DU0|1165,FLDS2(TS32,TS32) /*! ACC IDX: %d Flag: %d */
#define IID0_1166   DU0|1166,FLDS3(TS32,TS32,TS32) /*! xyz: %0d,%0d,%0d */
#define IID0_1167   DU0|1167,FLDS1(TS32) /*! ACC Count: %d */
#define IID0_1168   DU0|1168,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS3(TS32,TS32,TS32) /*! SF: %dHz T: %dus || DSF: %dHz T: %dus || DSP: %dHz T: %dus || SA: %d MaxSA: %d MinSA: %d CheckSACount: %d */
#define IID0_1169   DU0|1169,FLDS3(TS32,TS32,TS32) /*! ACC Count: %d Samples: %d SubSamples: %d */
#define IID0_1170   DU0|1170,FLDSSTR /*! Rotate around x axis */
#define IID0_1171   DU0|1171,FLDSSTR /*! Rotate around y axis */
#define IID0_1172   DU0|1172,FLDSSTR /*! Rotate around z axis */
#define IID0_1173   DU0|1173,FLDS4(TS32,TS32,TS32,TS32) /*! ACC AUTO: %d %d %d %d */
#define IID0_1174   DU0|1174,FLDSSTR /*! Leveling... */
#define IID0_1175   DU0|1175,FLDSSTR /*! Front/Back... */
#define IID0_1176   DU0|1176,FLDSSTR /*! Back/Front... */
#define IID0_1177   DU0|1177,FLDS1(TS32) /*! Acc Calibration State = %d */
#define IID0_1178   DU0|1178,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1179   DU0|1179,FLDS1(TS32) /*! Calculated Alpha = %d */
#define IID0_1180   DU0|1180,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1181   DU0|1181,FLDS1(TS32) /*! Calculated Beta = %d */
#define IID0_1182   DU0|1182,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1183   DU0|1183,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1184   DU0|1184,FLDS1(TS32) /*! Calculated Theta = %d */
#define IID0_1185   DU0|1185,FLDS3(TS32,TS32,TS32) /*! %d %d %d */
#define IID0_1186   DU0|1186,FLDS3(TS32,TS32,TS32) /*! Acc: Alpha = %d, Beta = %d, Theta = %d */
#define IID0_1187   DU0|1187,FLDS1(TS32) /*! Acc Calibration State = %d */
#define IID0_1188   DU0|1188,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ACC CAL X: %d 0x%0.4X Y: %d 0x%0.4X Z: %d 0x%0.4X */
#define IID0_1189   DU0|1189,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ACC OFFSET X: 0x%0.4X (0x%0.4X) Y: 0x%0.4X (0x%0.4X) Z: 0x%0.4X (0x%0.4X) */
#define IID0_1190   DU0|1190,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! ACC X: %d(%d) Y: %d(%d) Z: %d(%d) */
#define IID0_1191   DU0|1191,FLDS1(TS32) /*! ACC MOT: %d */
#define IID0_1192   DU0|1192,FLDS4(TS32,TS32,TS32,TS32) /*! ACC MOT: %d X: %d Y: %d Z: %d */
#define IID0_1193   DU0|1193,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Acc Move: %d (%d) Time: %d (%d) State: %d n:%d */
#define IID0_1194   DU0|1194,FLDS1(TS32) /*! Dot Product: %d */
#define IID0_1195   DU0|1195,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! %d %d %d %d %d %d */
#define IID0_1196   DU0|1196,FLDS1(TS32) /*! ACC FILTER: %d */
#define IID0_1197   DU0|1197,FLDS4(TS32,TS32,TS32,TS32) /*! %d D:%d S:%d T:%d */
#define IID0_1198   DU0|1198,FLDS4(TS32,TS32,TS32,TS32) /*! %d D:%d S:%d T:%d */
#define IID0_1199   DU0|1199,FLDS4(TS32,TS32,TS32,TS32) /*! ADMAINS: %dV ADVBAT: %dV MDM: %d VREF: %d */
#define IID0_1200   DU0|1200,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! ADMAINS: %dV (%d) ADBAT: %dV MDMPWR: %dV TEMP.: %d VREF: %d REG: %dV */
#define IID0_1201   DU0|1201,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! ADMAINS: %dV ADVBAT: %dV ADIBAT: %dV ADIN: %d NTC: %d MDM: %d VREF: %d */
#define IID0_1202   DU0|1202,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! ADMAINS: %dV ADVBAT: %dV ADIBAT: %dV ADIN: %d NTC: %d MDM: %d VREF: %d */
#define IID0_1203   DU0|1203,FLDS3(TS32,TS32,TS32) /*! ADMAINS: %dV Temp: %d C VREF: %d */
#define IID0_1204   DU0|1204,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! ADMAINS: %dV ADBAT: %dV ADIN: %d NTC: %d MDM: %d VREF: %d REG: %dV */
#define IID0_1205   DU0|1205,FLDS4(TS32,TS32,TS32,TS32) /*! ADMAINS: %dV ADVBAT: %dV NTC: %d VREF: %d */
#define IID0_1206   DU0|1206,FLDS4(TU32,TU32,TU32,TU32) /*! Mains LOW: RepeatTimer: %u, Total Low Time: %u, EventCount: %u, EvtCountConfig: %u */
#define IID0_1207   DU0|1207,FLDS4(TS32,TS32,TS32,TS32) /*! Main Voltage: %d Low:(%d) dbc: %d cnt: %d */
#define IID0_1208   DU0|1208,FLDSSTR /*! ADC Samples Full */
#define IID0_1209   DU0|1209,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! V_Start: %d_min (%d_10ms) %d_ave (%d_10ms) %d_stop %d_Post */
#define IID0_1210   DU0|1210,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! I2C: %d ERROR: %d CR1: 0x%0.8X SR1: 0x%0.8X SR2: 0x%0.8X */
#define IID0_1211   DU0|1211,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! BQ_VBUS: %d CHRG: %d DPM: %d PG: %d THRM: %d VSYS: %d */
#define IID0_1212   DU0|1212,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! BQ_REG: S_%d 0_0x%0.2X 1_0x%0.2X 2_0x%0.2X 3_0x%0.2X 4_0x%0.2X 5_0x%0.2X 6_0x%0.2X 7_0x%0.2X */
#define IID0_1213   DU0|1213,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! CAN %d RST: %d ABOM: %d NART:%d MODE: 0x%0.4X FLT: %d PWR: %d */
#define IID0_1214   DU0|1214,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! CAN %d RST: %d ABOM: %d NART:%d MODE: 0x%0.4X FLT: %d PWR: %d */
#define IID0_1215   DU0|1215,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! CAN 1 RST: %d ABOM: %d NART:%d MODE: 0x%0.4X FLT: %d PWR: %d */
#define IID0_1216   DU0|1216,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! CAN 2 RST: %d ABOM: %d NART:%d MODE: 0x%0.4X FLT: %d PWR: %d */
#define IID0_1217   DU0|1217,FLDSSTR /*! FILTER ACCEPT ALL */
#define IID0_1218   DU0|1218,FLDSSTR /*! FILTER ACCEPT 11Bit */
#define IID0_1219   DU0|1219,FLDSSTR /*! FILTER ACCEPT TOYOTA */
#define IID0_1220   DU0|1220,FLDSSTR /*! FILTER BLOCK ALL */
#define IID0_1221   DU0|1221,FLDSSTR /*! FILTER ACCEPT 29Bit */
#define IID0_1222   DU0|1222,FLDS1(TS32) /*! FILTER ACCEPT 0x%0.8X */
#define IID0_1223   DU0|1223,FLDSSTR /*! FILTER ACCEPT J1939 FMS */
#define IID0_1224   DU0|1224,FLDS1(TSTR) /*! SLCAN - RXCAN - %s */
#define IID0_1225   DU0|1225,FLDS1(TS32) /*! SLCAN: %d */
#define IID0_1226   DU0|1226,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! %d %d %d %d [%d] */
#define IID0_1227   DU0|1227,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! IN: 0x%0.2X OUT: 0x%0.2X POL: 0x%0.2X CFG: 0x%0.2X STS: 0x%0.2X */
#define IID0_1228   DU0|1228,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! I2C: %d ERROR: %d CR1: 0x%0.8X SR1: 0x%0.8X SR2: 0x%0.8X */
#define IID0_1229   DU0|1229,FLDSSTR /*! NCV7230 Not Implemented */
#define IID0_1230   DU0|1230,FLDSSTR /*! NCV7240 RESET */
#define IID0_1231   DU0|1231,FLDS2(TS32,TS32) /*! IN: 0x%0.4X OUT:0x%0.4X */
#define IID0_1232   DU0|1232,FLDS4(TS32,TS32,TS32,TS32) /*! IO: 0x%0.2X0x%0.2X0x%0.2X0x%0.2X */
#define IID0_1233   DU0|1233,FLDS1(TS32) /*! 0x%0.2X */
#define IID0_1234   DU0|1234,FLDS1(TS32) /*! 0x%0.2X */
#define IID0_1235   DU0|1235,FLDS1(TS32) /*! 0x%0.2X */
#define IID0_1236   DU0|1236,FLDS3(TS32,TS32,TS32) /*! MS: %d %X %d */
#define IID0_1237   DU0|1237,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! I2C: %d ERROR: %d CR1: 0x%0.8X SR1: 0x%0.8X SR2: 0x%0.8X */
#define IID0_1238   DU0|1238,FLDS4(TS32,TS32,TS32,TS32) /*! PCA OUTPUT 0: %d 1: %d 2: %d 3: %d */
#define IID0_1239   DU0|1239,FLDSSTR /*! RCC LSE CLOCK */
#define IID0_1240   DU0|1240,FLDSSTR /*! RCC LSI CLOCK */
#define IID0_1241   DU0|1241,FLDSSTR /*! RCC NO CLOCK */
#define IID0_1242   DU0|1242,FLDS2(TS32,TS32) /*! RCC: LSE:%d LSI:%d */
#define IID0_1243   DU0|1243,FLDSSTR /*! WAKE UP */
#define IID0_1244   DU0|1244,FLDSSTR /*! ALARM A */
#define IID0_1245   DU0|1245,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! RTC TIME SET: %02d/%02d/%02d,%02d:%02d:%02d */
#define IID0_1246   DU0|1246,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! Tot(us)  10ms:%06d  20ms:%06d  50ms:%06d  0.1s:%06d  0.2s:%06d  0.5s:%06d  1s:%06d */
#define IID0_1247   DU0|1247,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! Int(ms)  1ms: %06d 10ms:%06d  20ms:%06d  50ms:%06d  0.1s:%06d  0.2s:%06d  0.5s:%06d  1s:%06d */
#define IID0_1248   DU0|1248,FLDS5(TS32,TS32,TS32,TS32,TS32) /*! Int:% 6d(gps)% 6d(modem)% 6d(acc)% 6d(uart)% 6d(OBD2) */
#define IID0_1249   DU0|1249,FLDS7(TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! S:%d U2:%d U3:%d U:%d A:%d S0:%d S1:%d */
#define IID0_1250   DU0|1250,FLDS7E(TS32,TS32,TS32,TS32,TS32,TS32,TS32),FLDS2(TS32,TS32) /*! S:%d U0:%d U1:%d U2:%d U3:%d U:%d S1:%d S2:%d I:%d */
#define IID0_1251   DU0|1251,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! PR:%d T0:%d T1:%d T2:%d T3:%d PM:%d */
#define IID0_1252   DU0|1252,FLDS1(TS32) /*! USBHost OS Init: %d */
#define IID0_1253   DU0|1253,FLDS1(TS32) /*! USBHost Init: %d */
#define IID0_1254   DU0|1254,FLDS1(TS32) /*! USBHost CDC Serial Init: %d */
#define IID0_1255   DU0|1255,FLDS1(TS32) /*! USBHost CDC Serial Line Coding: %d */
#define IID0_1256   DU0|1256,FLDS1(TS32) /*! USBHost Stack Not Started: %d */
#define IID0_1257   DU0|1257,FLDS1(TS32) /*! USBHost Stack Not Stopped: %d */
#define IID0_1258   DU0|1258,FLDS1(TS32) /*! USB Port Status: 0x%0.8X */
#define IID0_1259   DU0|1259,FLDS1(TS32) /*! USB Port Status: 0x%0.8X */
#define IID0_1260   DU0|1260,FLDS1(TS32) /*! USB PMGR Stop: %d */
#define IID0_1261   DU0|1261,FLDS3(TU32,TU32,TU32) /*! ID: %u; Seq: %u; L: %u */
#define IID0_1262   DU0|1262,FLDS1(TU32) /*! %u */
#define IID0_1263   DU0|1263,FLDS1(TU32) /*! %u */
#define IID0_1264   DU0|1264,FLDS2(TU32,TU32) /*! %X; %X */
#define IID0_1265   DU0|1265,FLDSSTR /*! DataRx */
#define IID0_1266   DU0|1266,FLDSSTR /*! EncDataRx */
#define IID0_1267   DU0|1267,FLDS6(TS32,TS32,TS32,TS32,TS32,TS32) /*! Server Time: %02d/%02d/%02d,%02d:%02d:%02d */
#define IID0_1268   DU0|1268,FLDSSTR /*! Srv Time Updt */
#define IID0_1269   DU0|1269,FLDSSTR /*! Srv Time: Cal */
#define IID0_1270   DU0|1270,FLDS7E(TU32,TSTR,TSTR,TU32,TU32,TU32,TU32),FLDS3(TU32,TU32,TU32) /*! PHY STATE:%u||SKT %s,%s||LOGIN %u||Login Exp T %us||Rx T: %us||SessT %us||BlockT %us||SuspPer %us||SuspT %us */
#define IID0_1271   DU0|1271,FLDS7E(TU32,TU32,TU32,TU32,TU32,TU32,TU32),FLDS2(TU32,TU32) /*! STATUS: REP %u:%us||DATA %u:%us||NOTE %u:%us||LoginT: %us||BestT %us||LastT %us */
#define IID0_1272   DU0|1272,FLDS1(TSTR) /*! Sending : %s */
#define IID0_1273   DU0|1273,FLDS2(TU32,TU32) /*! SERIAL: In %u | Out %u || */
#define IID0_1274   DU0|1274,FLDS7E(TU32,TSTR,TSTR,TU32,TU32,TU32,TU32),FLDS5(TU32,TU32,TU32,TU32,TU32) /*! SKT STATE:%u | SOCKET %s,%s | LOGIN State %u | Login T: %u | Rx T: %u | Session Time: %u | Block Time: %u | Suspend Period: %u | Suspend Time: %u |  Login Timer: %u | Best Time: %u */
#define IID0_1275   DU0|1275,FLDS6(TU32,TSTR,TSTR,TU32,TU32,TU32) /*! SKT STATE:%u | SOCKET %s,%s | Manager State %u | Request Timer: %u | Request Start: %u |  */
#define IID0_1276   DU0|1276,FLDS1(TS32) /*! Invalid AUX state: %X */
#define IID0_1277   DU0|1277,FLDS1(TS32) /*! Invalid AUX state: %X */
#define IID0_1278   DU0|1278,FLDSSTR /*! Start Request */
#define IID0_1279   DU0|1279,FLDS1(TSTR) /*! Position Request: %s */
#define IID0_1280   DU0|1280,FLDS7E(TU32,TU32,TU32,TSTR,TSTR,TU32,TSTR),FLDS3(TSTR,TSTR,TSTR) /*! AT State [0x%X] | CMD Timeout: %u | Stack Restart: %u | GPRS: %s; APN Context %s | DCD State: %u | Close Prim: %s | Suspend Prim: %s | Close Sec: %s | Suspend Sec: %s | */
#define IID0_1281   DU0|1281,FLDS4(TU32,TSTR,TSTR,TSTR) /*! DATACALL TIMER: %u | Call Pending: %s | Call Status: %s | Call Close: %s */
#define IID0_1282   DU0|1282,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! Tot Len %u ENC Len %u Pg %u/%u %u percent */
#define IID0_1283   DU0|1283,FLDS1(TSTR) /*! %s */
#define IID0_1284   DU0|1284,FLDS1(TSTR) /*! %s */
#define IID0_1285   DU0|1285,FLDS1(TSTR) /*! %s */
#define IID0_1286   DU0|1286,FLDS1(TU32) /*! GPRS STATUS: %u */
#define IID0_1287   DU0|1287,FLDS2(TU32,TU32) /*! Socket Data Tx: %d bytes Rx: %d bytes */
#define IID0_1288   DU0|1288,FLDS5(TS32,TS32,TS32,TU32,TU32) /*! TelitPos: Resp:%d; Lat: %d; Long:%d; Alt:%u; Unc:%u */
#define IID0_1289   DU0|1289,FLDS3(TU32,TU32,TSTR) /*! Context Status: %u, %u, %s */
#define IID0_1290   DU0|1290,FLDS1(TU32) /*! MPr Cntxt Status: %u */
#define IID0_1291   DU0|1291,FLDS1(TU32) /*! Cntxt Status: %u */
#define IID0_1292   DU0|1292,FLDS1(TS32) /*! GPRS ATTACHED: %c */
#define IID0_1293   DU0|1293,FLDS1(TS32) /*! GPRS NOT ATTACHED: %c */
#define IID0_1294   DU0|1294,FLDS4(TU32,TSTR,TU32,TSTR) /*! MProfiler Details: SktStatus: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1295   DU0|1295,FLDS4(TU32,TSTR,TU32,TSTR) /*! Auxilliary Details: SktStatus: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1296   DU0|1296,FLDS4(TU32,TSTR,TU32,TSTR) /*! UDP Listen Details: Status: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1297   DU0|1297,FLDS4(TU32,TSTR,TU32,TSTR) /*! UDP Sender Details: Status: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1298   DU0|1298,FLDS2(TU32,TU32) /*! Buffer Size: %u; RX: %u */
#define IID0_1299   DU0|1299,FLDS2(TU32,TU32) /*! Length Reported: %u; Length of Buffer: %u */
#define IID0_1300   DU0|1300,FLDS1(TU32) /*! SCA Length: %u */
#define IID0_1301   DU0|1301,FLDS1(TU32) /*! MSISDN Length: %u */
#define IID0_1302   DU0|1302,FLDS2(TU32,TU32) /*! PDU Length = %u Octets or %u Bytes */
#define IID0_1303   DU0|1303,FLDS1(TU32) /*! Length of MSISDN: %u */
#define IID0_1304   DU0|1304,FLDS7(TU32,TU32,TU32,TSTR,TSTR,TSTR,TU32) /*! Modem Int St: %X; Cmd TmOut: %u, Rbt Del %u; Modem: %s %s; %s T: %u */
#define IID0_1305   DU0|1305,FLDS8(TS32,TS32,TS32,TS32,TS32,TS32,TS32,TS32) /*! Modem DTR:%d CTS:%d RTS:%d RI:%d RST:%d On:%d PWR:%d MON:%d */
#define IID0_1306   DU0|1306,FLDSSTR /*! SIM VETTING / COMMISSIONING NOT REQUIRED */
#define IID0_1307   DU0|1307,FLDS1(TS32) /*! IMSI Status: %c */
#define IID0_1308   DU0|1308,FLDS1(TSTR) /*! Perm IMSI: %s */
#define IID0_1309   DU0|1309,FLDSSTR /*! INVALID IMSI */
#define IID0_1310   DU0|1310,FLDS1(TSTR) /*! %s */
#define IID0_1311   DU0|1311,FLDS1(TSTR) /*! %s */
#define IID0_1312   DU0|1312,FLDS1(TSTR) /*! Modem Id: %s */
#define IID0_1313   DU0|1313,FLDS2(TU32,TSTR) /*! TestID: %u; %s */
#define IID0_1314   DU0|1314,FLDS2(TU32,TSTR) /*! Modem ID: %u; %s */
#define IID0_1315   DU0|1315,FLDS1(TSTR) /*! Modem Id: %s */
#define IID0_1316   DU0|1316,FLDS1(TU32) /*! Modem Identified: %u */
#define IID0_1317   DU0|1317,FLDSSTR /*! Telit Init Complete */
#define IID0_1318   DU0|1318,FLDSSTR /*! CDMA Init Complete */
#define IID0_1319   DU0|1319,FLDS2(TU32,TSTR) /*! SIMDETSTATUS: %u; %s */
#define IID0_1320   DU0|1320,FLDS2(TU32,TSTR) /*! Flow Control: %u; %s */
#define IID0_1321   DU0|1321,FLDS1(TU32) /*! New State: 0x%0.4Xh */
#define IID0_1322   DU0|1322,FLDSSTR /*! Init Fin */
#define IID0_1323   DU0|1323,FLDS2(TU32,TU32) /*! Pending Msg: %u; Max Message %u */
#define IID0_1324   DU0|1324,FLDS1(TU32) /*! 81 SMS. Length: %u */
#define IID0_1325   DU0|1325,FLDS1(TU32) /*! Text Posted. Length: %u */
#define IID0_1326   DU0|1326,FLDS1(TSTR) /*! %s */
#define IID0_1327   DU0|1327,FLDS1(TSTR) /*! %s */
#define IID0_1328   DU0|1328,FLDS1(TSTR) /*! %s */
#define IID0_1329   DU0|1329,FLDS1(TU32) /*! QSS Mode: %u */
#define IID0_1330   DU0|1330,FLDS1(TU32) /*! QSS: %u */
#define IID0_1331   DU0|1331,FLDS3(TU32,TU32,TU32) /*! Stat: %u; LAC %X; CID %X */
#define IID0_1332   DU0|1332,FLDS1(TSTR) /*! IMEI %s */
#define IID0_1333   DU0|1333,FLDS1(TU32) /*! MiStatus: 0x%0.4X */
#define IID0_1334   DU0|1334,FLDS3(TU32,TU32,TSTR) /*! Current IMEI %u; Read IMEI: %u; %s */
#define IID0_1335   DU0|1335,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! C-OPS Op Number: %u; MCC: %u, MNC: %u, Format: %u, COPS Status: %u */
#define IID0_1336   DU0|1336,FLDS2(TU32,TU32) /*! COPS text info format incorrect. Format: %u, COPS Status: %u */
#define IID0_1337   DU0|1337,FLDS1(TU32) /*! C-OPS Available: %u */
#define IID0_1338   DU0|1338,FLDS6(TU32,TU32,TU32,TU32,TU32,TU32) /*! SmsRd: %u | Update: %u | Cmd Timeout: %u | STATE: 0x%0.4Xh; RI: %u | Reset Timer: %u */
#define IID0_1339   DU0|1339,FLDS1(TU32) /*! CPAS: %u */
#define IID0_1340   DU0|1340,FLDS1(TSTR) /*! %s */
#define IID0_1341   DU0|1341,FLDS1(TSTR) /*! %s */
#define IID0_1342   DU0|1342,FLDS1(TSTR) /*! Clip ID: %s */
#define IID0_1343   DU0|1343,FLDS6(TU32,TU32,TU32,TU32,TS32,TU32) /*! %u, %X, %X, %u,%ddBm, %u */
#define IID0_1344   DU0|1344,FLDS1(TU32) /*! Batt Voltage: %u */
#define IID0_1345   DU0|1345,FLDS1(TU32) /*! Box Temp: %u */
#define IID0_1346   DU0|1346,FLDSSTR /*! Datacall Message Found */
#define IID0_1347   DU0|1347,FLDSSTR /*! Datacall Message Routed */
#define IID0_1348   DU0|1348,FLDS1(TU32) /*! From CMUX CHAN: %u */
#define IID0_1349   DU0|1349,FLDS1(TU32) /*! To CMUX CHAN: %u */
#define IID0_1350   DU0|1350,FLDSSTR /*! Direct to modem */
#define IID0_1351   DU0|1351,FLDS7E(TU32,TU32,TU32,TSTR,TSTR,TSTR,TSTR),FLDS2(TSTR,TSTR) /*! Cmd Time: %u||PowerTime: %u||SM State: %u||ControlChan %s||ModemChan %s||SocketChan %s||PSChan %s||PyDBGChan %s||Mdm Com: %s */
#define IID0_1352   DU0|1352,FLDS1(TSTR) /*! %s */
#define IID0_1353   DU0|1353,FLDS1(TSTR) /*! %s */
#define IID0_1354   DU0|1354,FLDS1(TSTR) /*! %s */
#define IID0_1355   DU0|1355,FLDS1(TU32) /*! Mode: %u */
#define IID0_1356   DU0|1356,FLDSSTR /*! Script Start Mode Correct */
#define IID0_1357   DU0|1357,FLDSSTR /*! Script Start Mode NOT Correct */
#define IID0_1358   DU0|1358,FLDSSTR /*! Script Start Mode NOT Parsed */
#define IID0_1359   DU0|1359,FLDS1(TSTR) /*! %s */
#define IID0_1360   DU0|1360,FLDS1(TSTR) /*! %s */
#define IID0_1361   DU0|1361,FLDS4(TU32,TU32,TU32,TU32) /*! Command Timeout: %u; NetInfo Timeout: %u; Current State: %X; VKLStatus: %u */
#define IID0_1362   DU0|1362,FLDS6(TU32,TSTR,TSTR,TU32,TU32,TU32) /*! Signal Quality: %u || Context Status: %s || TCP Socket Status: %s || Datagram Standoff: %u || PPP Init Standoff: %u || TxQueue: %u */
#define IID0_1363   DU0|1363,FLDS1(TSTR) /*! Status: %s  */
#define IID0_1364   DU0|1364,FLDS2(TU32,TU32) /*! RSSI: %u || BER: %u */
#define IID0_1365   DU0|1365,FLDS1(TSTR) /*! Status: %s  */
#define IID0_1366   DU0|1366,FLDS3(TU32,TU32,TU32) /*! Stat: %u; LAC %X; CID %X */
#define IID0_1367   DU0|1367,FLDS1(TSTR) /*! Status: %s  */
#define IID0_1368   DU0|1368,FLDS4(TSTR,TU32,TU32,TU32) /*! Pnt: %s; Actual Sent Length %u; Requested Length: %u, Remaining Length: %u */
#define IID0_1369   DU0|1369,FLDS7E(TU32,TU32,TU32,TSTR,TSTR,TU32,TSTR),FLDS3(TSTR,TSTR,TSTR) /*! AT State [0x%X] | CMD Timeout: %u | Stack Restart: %u | APN: %s; %s | DCD State: %u | Close Prim: %s | Suspend Prim: %s | Close Sec: %s | Suspend Sec: %s | */
#define IID0_1370   DU0|1370,FLDS4(TU32,TSTR,TSTR,TSTR) /*! DATACALL TIMER: %u | Call Pending: %s | Call Status: %s | Call Close: %s */
#define IID0_1371   DU0|1371,FLDSSTR /*!  */
#define IID0_1372   DU0|1372,FLDSSTR /*!  */
#define IID0_1373   DU0|1373,FLDSSTR /*!  */
#define IID0_1374   DU0|1374,FLDS1(TU32) /*! GPRS STATUS: %u */
#define IID0_1375   DU0|1375,FLDS2(TU32,TU32) /*! Socket Data Tx: %u bytes Rx: %u bytes */
#define IID0_1376   DU0|1376,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! TelitPos: Resp:%d; Lat: %d; Long:%d; Alt:%u; Unc:%u */
#define IID0_1377   DU0|1377,FLDS3(TU32,TU32,TSTR) /*! Context Status: %u, %u, %s */
#define IID0_1378   DU0|1378,FLDS2(TU32,TU32) /*! Context Status: %u, %u */
#define IID0_1379   DU0|1379,FLDS1(TU32) /*! GPRS ATTACHED: %c */
#define IID0_1380   DU0|1380,FLDS1(TU32) /*! GPRS NOT ATTACHED: %c */
#define IID0_1381   DU0|1381,FLDS4(TU32,TSTR,TU32,TSTR) /*! MProfiler Socket Details: SktStatus: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1382   DU0|1382,FLDS4(TU32,TSTR,TU32,TSTR) /*! Auxilliary Socket Details: SktStatus: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1383   DU0|1383,FLDS4(TU32,TSTR,TU32,TSTR) /*! MProfiler Details: SktStatus: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1384   DU0|1384,FLDS4(TU32,TSTR,TU32,TSTR) /*! Auxilliary Details: SktStatus: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1385   DU0|1385,FLDS4(TU32,TSTR,TU32,TSTR) /*! UDP Listen Details: Status: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1386   DU0|1386,FLDS4(TU32,TSTR,TU32,TSTR) /*! UDP Sender Details: Status: %u | Local IP: %s | Local Port: %u | Remote IP: %s */
#define IID0_1387   DU0|1387,FLDS2(TU32,TU32) /*! Buffer Size: %u; RX: %u */
#define IID0_1388   DU0|1388,FLDS2(TU32,TU32) /*! Length Reported: %u; Length of Buffer: %u */
#define IID0_1389   DU0|1389,FLDS3(TU32,TU32,TU32) /*! ID: %u; Seq: %u; L: %u */
#define IID0_1390   DU0|1390,FLDS1(TU32) /*! %u */
#define IID0_1391   DU0|1391,FLDS2(TU32,TU32) /*! %X; %X */
#define IID0_1392   DU0|1392,FLDSSTR /*! Data In  */
#define IID0_1393   DU0|1393,FLDSSTR /*! Enc Data Rx'd */
#define IID0_1394   DU0|1394,FLDS6(TU32,TU32,TU32,TU32,TU32,TU32) /*! Server Time: %02d/%02d/%02d,%02d:%02d:%02d */
#define IID0_1395   DU0|1395,FLDSSTR /*! Server Time: Update */
#define IID0_1396   DU0|1396,FLDSSTR /*! Server Time Cal */
#define IID0_1397   DU0|1397,FLDS7E(TU32,TSTR,TSTR,TU32,TU32,TU32,TU32),FLDS3(TU32,TU32,TU32) /*! PHY SKT STATE:%u | SOCKET %s,%s | LOGIN State %u | Login T: %u | Rx T: %u | Session Time: %u | Block Time: %u | Suspend Period: %u | Suspend Time: %u */
#define IID0_1398   DU0|1398,FLDS7E(TU32,TU32,TU32,TU32,TU32,TU32,TU32),FLDS2(TU32,TU32) /*! REP Time: %u | DATA Time: %u | NOTE Time: %u | REP Status: %u | DATA Status: %u | NOTE Status: %u |  Login Timer: %u | Best Time: %u | Time Since Last Login: %u */
#define IID0_1399   DU0|1399,FLDS2(TU32,TU32) /*! SERIAL: In %u | Out %u || */
#define IID0_1400   DU0|1400,FLDS7E(TU32,TSTR,TSTR,TU32,TU32,TU32,TU32),FLDS5(TU32,TU32,TU32,TU32,TU32) /*! SKT STATE:%u | SOCKET %s,%s | LOGIN State %u | Login T: %u | Rx T: %u | Session Time: %u | Block Time: %u | Suspend Period: %u | Suspend Time: %u |  Login Timer: %lu | Best Time: %lu */
#define IID0_1401   DU0|1401,FLDS6(TU32,TSTR,TSTR,TU32,TU32,TU32) /*! SKT STATE:%u | SOCKET %s,%s | Manager State %u | Request Timer: %u | Request Start: %u |  */
#define IID0_1402   DU0|1402,FLDS1(TU32) /*! Invalid AUX state: %X */
#define IID0_1403   DU0|1403,FLDS1(TU32) /*! Invalid AUX state: %X */
#define IID0_1404   DU0|1404,FLDSSTR /*! Start Request */
#define IID0_1405   DU0|1405,FLDS1(TSTR) /*! Position Request: %s */
#define IID0_1406   DU0|1406,FLDS1(TU32) /*! SCA Length: %u */
#define IID0_1407   DU0|1407,FLDS1(TU32) /*! MSISDN Length: %u */
#define IID0_1408   DU0|1408,FLDS2(TU32,TU32) /*! PDU Length = %u Octets or %u Bytes */
#define IID0_1409   DU0|1409,FLDS1(TU32) /*! Length of MSISDN: %u */
#define IID0_1410   DU0|1410,FLDSSTR /*! 20ms Second Call */
#define IID0_1411   DU0|1411,FLDS2(TU32,TU32) /*! UBLOX SM: %u [%02X] */
#define IID0_1412   DU0|1412,FLDS4(TU32,TU32,TU32,TU32) /*! TIMERS: Resp: %u ,NetInfoCheck: %u, PSDA: %u, WiFi Act: %u */
#define IID0_1413   DU0|1413,FLDS1(TU32) /*! Modem State Vector: 0x%04X */
#define IID0_1414   DU0|1414,FLDS1(TU32) /*! New State: %04Xh */
#define IID0_1415   DU0|1415,FLDS8(TU32,TU32,TU32,TSTR,TSTR,TSTR,TU32,TSTR) /*! Modem Int St: %X; Cmd TmOut: %u, Rbt Del %u; Modem: %s %s; %s T: %u, MdmPwr: %s */
#define IID0_1416   DU0|1416,FLDS8(TU32,TU32,TU32,TU32,TU32,TU32,TU32,TU32) /*! Modem DTR:%d CTS:%d RTS:%d RI:%d RST:%d On:%d PWR:%d MON:%d */
#define IID0_1417   DU0|1417,FLDSSTR /*!  */
#define IID0_1418   DU0|1418,FLDSSTR /*!  */
#define IID0_1419   DU0|1419,FLDS1(TSTR) /*! Modem Id: %s */
#define IID0_1420   DU0|1420,FLDS2(TU32,TSTR) /*! Modem ID: %u; %s */
#define IID0_1421   DU0|1421,FLDS1(TSTR) /*! Modem Id: %s */
#define IID0_1422   DU0|1422,FLDS1(TU32) /*! Modem Identified: %u */
#define IID0_1423   DU0|1423,FLDSSTR /*! CDMA Init Complete */
#define IID0_1424   DU0|1424,FLDS2(TU32,TSTR) /*! SIMDETSTATUS: %u; %s */
#define IID0_1425   DU0|1425,FLDS2(TU32,TSTR) /*! Flow Control: %u; %s */
#define IID0_1426   DU0|1426,FLDS3(TU32,TU32,TU32) /*! Stat: %u; LAC %X; CID %X */
#define IID0_1427   DU0|1427,FLDS1(TU32) /*! GPRS STATUS: %u */
#define IID0_1428   DU0|1428,FLDS1(TSTR) /*! IMEI: %s */
#define IID0_1429   DU0|1429,FLDS1(TU32) /*! MiStatus: %04X */
#define IID0_1430   DU0|1430,FLDS3(TU32,TU32,TSTR) /*! Current IMEI %lu; Read IMEI: %lu; %s */
#define IID0_1431   DU0|1431,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! C-OPS Op Number: %lu; MCC: %u, MNC: %u, Format: %u, COPS Status: %u */
#define IID0_1432   DU0|1432,FLDS2(TU32,TU32) /*! COPS cannot be parsed. Fmt: %u, Sts: %u */
#define IID0_1433   DU0|1433,FLDSSTR /*!  */
#define IID0_1434   DU0|1434,FLDSSTR /*!  */
#define IID0_1435   DU0|1435,FLDS1(TU32) /*! CPAS: %u */
#define IID0_1436   DU0|1436,FLDSSTR /*!  */
#define IID0_1437   DU0|1437,FLDS1(TU32) /*! GPRS ATT: %u */
#define IID0_1438   DU0|1438,FLDSSTR /*! SIM COMMISSION NOT REQUIRED */
#define IID0_1439   DU0|1439,FLDS1(TU32) /*! IMSI Status: %c */
#define IID0_1440   DU0|1440,FLDS1(TSTR) /*! Perm IMSI: %s */
#define IID0_1441   DU0|1441,FLDSSTR /*! INVALID IMSI */
#define IID0_1442   DU0|1442,FLDS1(TSTR) /*! IMEI: %s */
#define IID0_1443   DU0|1443,FLDS1(TU32) /*! MiStatus: %04X */
#define IID0_1444   DU0|1444,FLDS3(TU32,TU32,TSTR) /*! Current IMEI %lu; Read IMEI: %lu; %s */
#define IID0_1445   DU0|1445,FLDS1(TU32) /*! 81 SMS. Length: %u */
#define IID0_1446   DU0|1446,FLDS1(TU32) /*! Text Posted. Length: %u */
#define IID0_1447   DU0|1447,FLDSSTR /*!  */
#define IID0_1448   DU0|1448,FLDSSTR /*!  */
#define IID0_1449   DU0|1449,FLDSSTR /*!  */
#define IID0_1450   DU0|1450,FLDS1(TU32) /*! Extended Packet Switched Data Registration Status:  %u */
#define IID0_1451   DU0|1451,FLDS1(TU32) /*! URC Extended Packet Switched Data Registration Status:  %u */
#define IID0_1452   DU0|1452,FLDS1(TU32) /*! Aux Incoming: %u */
#define IID0_1453   DU0|1453,FLDS1(TU32) /*! Primary Incoming: %u */
#define IID0_1454   DU0|1454,FLDS1(TU32) /*! Sent: %u */
#define IID0_1455   DU0|1455,FLDS1(TU32) /*! L: %u */
#define IID0_1456   DU0|1456,FLDS1(TU32) /*! Rx: %u */
#define IID0_1457   DU0|1457,FLDS1(TU32) /*! Socket: %u */
#define IID0_1458   DU0|1458,FLDS1(TU32) /*! Cmd: %u */
#define IID0_1459   DU0|1459,FLDS1(TSTR) /*! Prim Peer IP: %s */
#define IID0_1460   DU0|1460,FLDS1(TSTR) /*! Aux Peer IP: %s */
#define IID0_1461   DU0|1461,FLDS1(TU32) /*! Max Message: %u */
#define IID0_1462   DU0|1462,FLDS1(TU32) /*! Pend Message: %u */
#define IID0_1463   DU0|1463,FLDSSTR /*! Init Fin */
#define IID0_1464   DU0|1464,FLDS2(TU32,TU32) /*! Pending Msg: %u; Max Message %u */
#define IID0_1465   DU0|1465,FLDS1(TU32) /*! 81 SMS. Length: %u */
#define IID0_1466   DU0|1466,FLDS1(TU32) /*! Text Posted. Length: %u */
#define IID0_1467   DU0|1467,FLDSSTR /*!  */
#define IID0_1468   DU0|1468,FLDSSTR /*!  */
#define IID0_1469   DU0|1469,FLDSSTR /*!  */
#define IID0_1470   DU0|1470,FLDS1(TU32) /*! QSS Mode: %u */
#define IID0_1471   DU0|1471,FLDS1(TU32) /*! QSS: %u */
#define IID0_1472   DU0|1472,FLDS5(TU32,TU32,TU32,TU32,TU32) /*! C-OPS Op Number: %lu; MCC: %u, MNC: %u, Format: %u, COPS Status: %u */
#define IID0_1473   DU0|1473,FLDS1(TU32) /*! C-OPS Available: %lu */
#define IID0_1474   DU0|1474,FLDS6(TU32,TU32,TU32,TU32,TU32,TU32) /*! SmsRd: %u | Update: %u | Cmd Timeout: %u | STATE: %04Xh; RI: %u | Reset Timer: %u */
#define IID0_1475   DU0|1475,FLDS1(TU32) /*! CPAS: %u */
#define IID0_1476   DU0|1476,FLDS1(TSTR) /*! Clip ID: %s */
#define IID0_1477   DU0|1477,FLDS6(TU32,TU32,TU32,TU32,TU32,TU32) /*! %u, %X, %X, %u,%ddBm, %u */
#define IID0_1478   DU0|1478,FLDS1(TU32) /*! Batt Voltage: %u */
#define IID0_1479   DU0|1479,FLDS1(TU32) /*! Box Temp: %u */
#define IID0_1480   DU0|1480,FLDSSTR /*! Datacall Message Found */
#define IID0_1481   DU0|1481,FLDSSTR /*! Datacall Message Routed */
#define IID0_1482   DU0|1482,FLDS1(TU32) /*! From CMUX CHAN: %u */
#define IID0_1483   DU0|1483,FLDS1(TU32) /*! To CMUX CHAN: %u */
#define IID0_1484   DU0|1484,FLDSSTR /*! Direct to modem */
#define IID0_1485   DU0|1485,FLDS9(TU32,TU32,TU32,TSTR,TSTR,TSTR,TSTR,TSTR,TSTR) /*! Cmd Time: %u||PowerTime: %u||SM State: %u||ControlChan %s||ModemChan %s||SocketChan %s||PSChan %s||PyDBGChan %s||Mdm Com: %s */
#define IID0_1486   DU0|1486,FLDS2(TSTR,TSTR) /*! USER: %s, PASS: %s */
#define IID0_1487   DU0|1487,FLDSSTR /*!  */
#define IID0_1488   DU0|1488,FLDSSTR /*!  */
#define IID0_1489   DU0|1489,FLDSSTR /*!  */
#define IID0_1490   DU0|1490,FLDS1(TU32) /*! Mode: %u */
#define IID0_1491   DU0|1491,FLDSSTR /*! Script Start Mode Correct */
#define IID0_1492   DU0|1492,FLDSSTR /*! Script Start Mode NOT Correct */
#define IID0_1493   DU0|1493,FLDSSTR /*! Script Start Mode NOT Parsed */
#define IID0_1494   DU0|1494,FLDSSTR /*!  */
#define IID0_1495   DU0|1495,FLDSSTR /*!  */
#define IID0_1496   DU0|1496,FLDS4(TU32,TU32,TU32,TU32) /*! Command Timeout: %u; NetInfo Timeout: %u; Current State: %X; VKLStatus: %u */
#define IID0_1497   DU0|1497,FLDS6(TU32,TSTR,TSTR,TU32,TU32,TU32) /*! Signal Quality: %u || Context Status: %s || TCP Socket Status: %s || Datagram Standoff: %u || PPP Init Standoff: %u || TxQueue: %u */
#define IID0_1498   DU0|1498,FLDS1(TSTR) /*! Status: %s  */
#define IID0_1499   DU0|1499,FLDS2(TU32,TU32) /*! RSSI: %u || BER: %u */
#define IID0_1500   DU0|1500,FLDS1(TSTR) /*! Status: %s  */
#define IID0_1501   DU0|1501,FLDS3(TU32,TU32,TU32) /*! Stat: %u; LAC %X; CID %X */
#define IID0_1502   DU0|1502,FLDS1(TSTR) /*! Status: %s  */
#define IID0_1503   DU0|1503,FLDS4(TSTR,TU32,TU32,TU32) /*! Pnt: %s; Actual Sent Length %u; Requested Length: %u, Remaining Length: %u */
#define IID0_1504   DU0|1504,FLDS1(TSTR) /*! %s */
#define IID0_1505   DU0|1505,FLDSSTR /*! Time Valid */
#define IID0_1506   DU0|1506,FLDS6(TU32,TU32,TU32,TU32,TU32,TU32) /*! Stack: M:%d C:%d S:%d Heap: %d TMax: %d CPU: %d  */
#define IID0_1507   DU0|1507,FLDS2(TU8,TU16) /*! OW TEMP GOOD: Sensor %u: Value: %d */
//</INFO_IDS>
 
#endif // SCP_DBGINFODEFINESDU0_H
