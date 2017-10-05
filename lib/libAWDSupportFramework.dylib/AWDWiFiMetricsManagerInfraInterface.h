/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDWiFiMetricsManagerInfraInterface : PBCodable <NSCopying> {
    AWDWiFiMetricsManagerStateMachine * _activityDown;
    AWDWiFiMetricsManagerStateMachine * _activityInvoluntarilyDown;
    AWDWiFiMetricsManagerStateMachine * _activityRoaming;
    AWDWiFiMetricsManagerStateMachine * _activityScanning;
    AWDWiFiMetricsManagerStateMachine * _activityUp;
    unsigned int  _avgCCA;
    AWDWiFiMetricsManagerStateMachine * _avgCCA0pct;
    AWDWiFiMetricsManagerStateMachine * _avgCCA100pct;
    AWDWiFiMetricsManagerStateMachine * _avgCCA125pct;
    AWDWiFiMetricsManagerStateMachine * _avgCCA25pct;
    AWDWiFiMetricsManagerStateMachine * _avgCCA375pct;
    AWDWiFiMetricsManagerStateMachine * _avgCCA50pct;
    AWDWiFiMetricsManagerStateMachine * _avgCCA625pct;
    AWDWiFiMetricsManagerStateMachine * _avgCCA75pct;
    AWDWiFiMetricsManagerStateMachine * _avgCCA875pct;
    unsigned int  _dataTransferRateMpbs;
    unsigned int  _effectiveDataTransferRateMpbs;
    unsigned int  _effectiveLinkRateMpbs;
    struct { 
        unsigned int rxBytes : 1; 
        unsigned int rxPackets : 1; 
        unsigned int timestamp : 1; 
        unsigned int txBytes : 1; 
        unsigned int txBytesBe : 1; 
        unsigned int txBytesBk : 1; 
        unsigned int txBytesVi : 1; 
        unsigned int txBytesVo : 1; 
        unsigned int txPackets : 1; 
        unsigned int txPacketsBe : 1; 
        unsigned int txPacketsBk : 1; 
        unsigned int txPacketsVi : 1; 
        unsigned int txPacketsVo : 1; 
        unsigned int avgCCA : 1; 
        unsigned int dataTransferRateMpbs : 1; 
        unsigned int effectiveDataTransferRateMpbs : 1; 
        unsigned int effectiveLinkRateMpbs : 1; 
        unsigned int linkLatencyMs : 1; 
        unsigned int linkOpenPct : 1; 
        unsigned int linkRateMbps : 1; 
        unsigned int lqm : 1; 
    }  _has;
    AWDWiFiMetricsManagerStateMachine * _linkLatency0ms;
    AWDWiFiMetricsManagerStateMachine * _linkLatency1024ms;
    AWDWiFiMetricsManagerStateMachine * _linkLatency128ms;
    AWDWiFiMetricsManagerStateMachine * _linkLatency256ms;
    AWDWiFiMetricsManagerStateMachine * _linkLatency512ms;
    AWDWiFiMetricsManagerStateMachine * _linkLatency64ms;
    unsigned int  _linkLatencyMs;
    AWDWiFiMetricsManagerStateMachine * _linkOpen0pct;
    AWDWiFiMetricsManagerStateMachine * _linkOpen100pct;
    AWDWiFiMetricsManagerStateMachine * _linkOpen125pct;
    AWDWiFiMetricsManagerStateMachine * _linkOpen25pct;
    AWDWiFiMetricsManagerStateMachine * _linkOpen375pct;
    AWDWiFiMetricsManagerStateMachine * _linkOpen50pct;
    AWDWiFiMetricsManagerStateMachine * _linkOpen625pct;
    AWDWiFiMetricsManagerStateMachine * _linkOpen75pct;
    AWDWiFiMetricsManagerStateMachine * _linkOpen875pct;
    unsigned int  _linkOpenPct;
    unsigned int  _linkRateMbps;
    unsigned int  _lqm;
    AWDWiFiMetricsManagerStateMachine * _lqmBad;
    AWDWiFiMetricsManagerStateMachine * _lqmGood;
    AWDWiFiMetricsManagerStateMachine * _lqmOff;
    AWDWiFiMetricsManagerStateMachine * _lqmPoor;
    AWDWiFiMetricsManagerStateMachine * _lqmUnknown;
    unsigned long long  _rxBytes;
    unsigned long long  _rxPackets;
    unsigned long long  _timestamp;
    unsigned long long  _txBytes;
    unsigned long long  _txBytesBe;
    unsigned long long  _txBytesBk;
    unsigned long long  _txBytesVi;
    unsigned long long  _txBytesVo;
    unsigned long long  _txPackets;
    unsigned long long  _txPacketsBe;
    unsigned long long  _txPacketsBk;
    unsigned long long  _txPacketsVi;
    unsigned long long  _txPacketsVo;
}

@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *activityDown;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *activityInvoluntarilyDown;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *activityRoaming;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *activityScanning;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *activityUp;
@property (nonatomic) unsigned int avgCCA;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *avgCCA0pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *avgCCA100pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *avgCCA125pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *avgCCA25pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *avgCCA375pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *avgCCA50pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *avgCCA625pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *avgCCA75pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *avgCCA875pct;
@property (nonatomic) unsigned int dataTransferRateMpbs;
@property (nonatomic) unsigned int effectiveDataTransferRateMpbs;
@property (nonatomic) unsigned int effectiveLinkRateMpbs;
@property (nonatomic, readonly) bool hasActivityDown;
@property (nonatomic, readonly) bool hasActivityInvoluntarilyDown;
@property (nonatomic, readonly) bool hasActivityRoaming;
@property (nonatomic, readonly) bool hasActivityScanning;
@property (nonatomic, readonly) bool hasActivityUp;
@property (nonatomic) bool hasAvgCCA;
@property (nonatomic, readonly) bool hasAvgCCA0pct;
@property (nonatomic, readonly) bool hasAvgCCA100pct;
@property (nonatomic, readonly) bool hasAvgCCA125pct;
@property (nonatomic, readonly) bool hasAvgCCA25pct;
@property (nonatomic, readonly) bool hasAvgCCA375pct;
@property (nonatomic, readonly) bool hasAvgCCA50pct;
@property (nonatomic, readonly) bool hasAvgCCA625pct;
@property (nonatomic, readonly) bool hasAvgCCA75pct;
@property (nonatomic, readonly) bool hasAvgCCA875pct;
@property (nonatomic) bool hasDataTransferRateMpbs;
@property (nonatomic) bool hasEffectiveDataTransferRateMpbs;
@property (nonatomic) bool hasEffectiveLinkRateMpbs;
@property (nonatomic, readonly) bool hasLinkLatency0ms;
@property (nonatomic, readonly) bool hasLinkLatency1024ms;
@property (nonatomic, readonly) bool hasLinkLatency128ms;
@property (nonatomic, readonly) bool hasLinkLatency256ms;
@property (nonatomic, readonly) bool hasLinkLatency512ms;
@property (nonatomic, readonly) bool hasLinkLatency64ms;
@property (nonatomic) bool hasLinkLatencyMs;
@property (nonatomic, readonly) bool hasLinkOpen0pct;
@property (nonatomic, readonly) bool hasLinkOpen100pct;
@property (nonatomic, readonly) bool hasLinkOpen125pct;
@property (nonatomic, readonly) bool hasLinkOpen25pct;
@property (nonatomic, readonly) bool hasLinkOpen375pct;
@property (nonatomic, readonly) bool hasLinkOpen50pct;
@property (nonatomic, readonly) bool hasLinkOpen625pct;
@property (nonatomic, readonly) bool hasLinkOpen75pct;
@property (nonatomic, readonly) bool hasLinkOpen875pct;
@property (nonatomic) bool hasLinkOpenPct;
@property (nonatomic) bool hasLinkRateMbps;
@property (nonatomic) bool hasLqm;
@property (nonatomic, readonly) bool hasLqmBad;
@property (nonatomic, readonly) bool hasLqmGood;
@property (nonatomic, readonly) bool hasLqmOff;
@property (nonatomic, readonly) bool hasLqmPoor;
@property (nonatomic, readonly) bool hasLqmUnknown;
@property (nonatomic) bool hasRxBytes;
@property (nonatomic) bool hasRxPackets;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTxBytes;
@property (nonatomic) bool hasTxBytesBe;
@property (nonatomic) bool hasTxBytesBk;
@property (nonatomic) bool hasTxBytesVi;
@property (nonatomic) bool hasTxBytesVo;
@property (nonatomic) bool hasTxPackets;
@property (nonatomic) bool hasTxPacketsBe;
@property (nonatomic) bool hasTxPacketsBk;
@property (nonatomic) bool hasTxPacketsVi;
@property (nonatomic) bool hasTxPacketsVo;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkLatency0ms;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkLatency1024ms;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkLatency128ms;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkLatency256ms;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkLatency512ms;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkLatency64ms;
@property (nonatomic) unsigned int linkLatencyMs;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkOpen0pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkOpen100pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkOpen125pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkOpen25pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkOpen375pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkOpen50pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkOpen625pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkOpen75pct;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *linkOpen875pct;
@property (nonatomic) unsigned int linkOpenPct;
@property (nonatomic) unsigned int linkRateMbps;
@property (nonatomic) unsigned int lqm;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *lqmBad;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *lqmGood;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *lqmOff;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *lqmPoor;
@property (nonatomic, retain) AWDWiFiMetricsManagerStateMachine *lqmUnknown;
@property (nonatomic) unsigned long long rxBytes;
@property (nonatomic) unsigned long long rxPackets;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long txBytes;
@property (nonatomic) unsigned long long txBytesBe;
@property (nonatomic) unsigned long long txBytesBk;
@property (nonatomic) unsigned long long txBytesVi;
@property (nonatomic) unsigned long long txBytesVo;
@property (nonatomic) unsigned long long txPackets;
@property (nonatomic) unsigned long long txPacketsBe;
@property (nonatomic) unsigned long long txPacketsBk;
@property (nonatomic) unsigned long long txPacketsVi;
@property (nonatomic) unsigned long long txPacketsVo;

- (id)activityDown;
- (id)activityInvoluntarilyDown;
- (id)activityRoaming;
- (id)activityScanning;
- (id)activityUp;
- (unsigned int)avgCCA;
- (id)avgCCA0pct;
- (id)avgCCA100pct;
- (id)avgCCA125pct;
- (id)avgCCA25pct;
- (id)avgCCA375pct;
- (id)avgCCA50pct;
- (id)avgCCA625pct;
- (id)avgCCA75pct;
- (id)avgCCA875pct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)dataTransferRateMpbs;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)effectiveDataTransferRateMpbs;
- (unsigned int)effectiveLinkRateMpbs;
- (bool)hasActivityDown;
- (bool)hasActivityInvoluntarilyDown;
- (bool)hasActivityRoaming;
- (bool)hasActivityScanning;
- (bool)hasActivityUp;
- (bool)hasAvgCCA;
- (bool)hasAvgCCA0pct;
- (bool)hasAvgCCA100pct;
- (bool)hasAvgCCA125pct;
- (bool)hasAvgCCA25pct;
- (bool)hasAvgCCA375pct;
- (bool)hasAvgCCA50pct;
- (bool)hasAvgCCA625pct;
- (bool)hasAvgCCA75pct;
- (bool)hasAvgCCA875pct;
- (bool)hasDataTransferRateMpbs;
- (bool)hasEffectiveDataTransferRateMpbs;
- (bool)hasEffectiveLinkRateMpbs;
- (bool)hasLinkLatency0ms;
- (bool)hasLinkLatency1024ms;
- (bool)hasLinkLatency128ms;
- (bool)hasLinkLatency256ms;
- (bool)hasLinkLatency512ms;
- (bool)hasLinkLatency64ms;
- (bool)hasLinkLatencyMs;
- (bool)hasLinkOpen0pct;
- (bool)hasLinkOpen100pct;
- (bool)hasLinkOpen125pct;
- (bool)hasLinkOpen25pct;
- (bool)hasLinkOpen375pct;
- (bool)hasLinkOpen50pct;
- (bool)hasLinkOpen625pct;
- (bool)hasLinkOpen75pct;
- (bool)hasLinkOpen875pct;
- (bool)hasLinkOpenPct;
- (bool)hasLinkRateMbps;
- (bool)hasLqm;
- (bool)hasLqmBad;
- (bool)hasLqmGood;
- (bool)hasLqmOff;
- (bool)hasLqmPoor;
- (bool)hasLqmUnknown;
- (bool)hasRxBytes;
- (bool)hasRxPackets;
- (bool)hasTimestamp;
- (bool)hasTxBytes;
- (bool)hasTxBytesBe;
- (bool)hasTxBytesBk;
- (bool)hasTxBytesVi;
- (bool)hasTxBytesVo;
- (bool)hasTxPackets;
- (bool)hasTxPacketsBe;
- (bool)hasTxPacketsBk;
- (bool)hasTxPacketsVi;
- (bool)hasTxPacketsVo;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)linkLatency0ms;
- (id)linkLatency1024ms;
- (id)linkLatency128ms;
- (id)linkLatency256ms;
- (id)linkLatency512ms;
- (id)linkLatency64ms;
- (unsigned int)linkLatencyMs;
- (id)linkOpen0pct;
- (id)linkOpen100pct;
- (id)linkOpen125pct;
- (id)linkOpen25pct;
- (id)linkOpen375pct;
- (id)linkOpen50pct;
- (id)linkOpen625pct;
- (id)linkOpen75pct;
- (id)linkOpen875pct;
- (unsigned int)linkOpenPct;
- (unsigned int)linkRateMbps;
- (unsigned int)lqm;
- (id)lqmBad;
- (id)lqmGood;
- (id)lqmOff;
- (id)lqmPoor;
- (id)lqmUnknown;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned long long)rxBytes;
- (unsigned long long)rxPackets;
- (void)setActivityDown:(id)arg1;
- (void)setActivityInvoluntarilyDown:(id)arg1;
- (void)setActivityRoaming:(id)arg1;
- (void)setActivityScanning:(id)arg1;
- (void)setActivityUp:(id)arg1;
- (void)setAvgCCA0pct:(id)arg1;
- (void)setAvgCCA100pct:(id)arg1;
- (void)setAvgCCA125pct:(id)arg1;
- (void)setAvgCCA25pct:(id)arg1;
- (void)setAvgCCA375pct:(id)arg1;
- (void)setAvgCCA50pct:(id)arg1;
- (void)setAvgCCA625pct:(id)arg1;
- (void)setAvgCCA75pct:(id)arg1;
- (void)setAvgCCA875pct:(id)arg1;
- (void)setAvgCCA:(unsigned int)arg1;
- (void)setDataTransferRateMpbs:(unsigned int)arg1;
- (void)setEffectiveDataTransferRateMpbs:(unsigned int)arg1;
- (void)setEffectiveLinkRateMpbs:(unsigned int)arg1;
- (void)setHasAvgCCA:(bool)arg1;
- (void)setHasDataTransferRateMpbs:(bool)arg1;
- (void)setHasEffectiveDataTransferRateMpbs:(bool)arg1;
- (void)setHasEffectiveLinkRateMpbs:(bool)arg1;
- (void)setHasLinkLatencyMs:(bool)arg1;
- (void)setHasLinkOpenPct:(bool)arg1;
- (void)setHasLinkRateMbps:(bool)arg1;
- (void)setHasLqm:(bool)arg1;
- (void)setHasRxBytes:(bool)arg1;
- (void)setHasRxPackets:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTxBytes:(bool)arg1;
- (void)setHasTxBytesBe:(bool)arg1;
- (void)setHasTxBytesBk:(bool)arg1;
- (void)setHasTxBytesVi:(bool)arg1;
- (void)setHasTxBytesVo:(bool)arg1;
- (void)setHasTxPackets:(bool)arg1;
- (void)setHasTxPacketsBe:(bool)arg1;
- (void)setHasTxPacketsBk:(bool)arg1;
- (void)setHasTxPacketsVi:(bool)arg1;
- (void)setHasTxPacketsVo:(bool)arg1;
- (void)setLinkLatency0ms:(id)arg1;
- (void)setLinkLatency1024ms:(id)arg1;
- (void)setLinkLatency128ms:(id)arg1;
- (void)setLinkLatency256ms:(id)arg1;
- (void)setLinkLatency512ms:(id)arg1;
- (void)setLinkLatency64ms:(id)arg1;
- (void)setLinkLatencyMs:(unsigned int)arg1;
- (void)setLinkOpen0pct:(id)arg1;
- (void)setLinkOpen100pct:(id)arg1;
- (void)setLinkOpen125pct:(id)arg1;
- (void)setLinkOpen25pct:(id)arg1;
- (void)setLinkOpen375pct:(id)arg1;
- (void)setLinkOpen50pct:(id)arg1;
- (void)setLinkOpen625pct:(id)arg1;
- (void)setLinkOpen75pct:(id)arg1;
- (void)setLinkOpen875pct:(id)arg1;
- (void)setLinkOpenPct:(unsigned int)arg1;
- (void)setLinkRateMbps:(unsigned int)arg1;
- (void)setLqm:(unsigned int)arg1;
- (void)setLqmBad:(id)arg1;
- (void)setLqmGood:(id)arg1;
- (void)setLqmOff:(id)arg1;
- (void)setLqmPoor:(id)arg1;
- (void)setLqmUnknown:(id)arg1;
- (void)setRxBytes:(unsigned long long)arg1;
- (void)setRxPackets:(unsigned long long)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTxBytes:(unsigned long long)arg1;
- (void)setTxBytesBe:(unsigned long long)arg1;
- (void)setTxBytesBk:(unsigned long long)arg1;
- (void)setTxBytesVi:(unsigned long long)arg1;
- (void)setTxBytesVo:(unsigned long long)arg1;
- (void)setTxPackets:(unsigned long long)arg1;
- (void)setTxPacketsBe:(unsigned long long)arg1;
- (void)setTxPacketsBk:(unsigned long long)arg1;
- (void)setTxPacketsVi:(unsigned long long)arg1;
- (void)setTxPacketsVo:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)txBytes;
- (unsigned long long)txBytesBe;
- (unsigned long long)txBytesBk;
- (unsigned long long)txBytesVi;
- (unsigned long long)txBytesVo;
- (unsigned long long)txPackets;
- (unsigned long long)txPacketsBe;
- (unsigned long long)txPacketsBk;
- (unsigned long long)txPacketsVi;
- (unsigned long long)txPacketsVo;
- (void)writeTo:(id)arg1;

@end
