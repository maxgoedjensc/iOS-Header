//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDAWDHealthKitCloudSyncEvent;

@interface HDAWDHealthKitCloudSyncStatusEvent : PBCodable <NSCopying>
{
    unsigned long long _baselineEpoch;
    unsigned long long _emptyZoneCount;
    unsigned long long _timeSinceDownloadSuccess;
    unsigned long long _timeSinceLastUploadForwardProgress;
    unsigned long long _timeSinceUploadSuccess;
    unsigned long long _timeUntilRebaseRequired;
    unsigned long long _timestamp;
    HDAWDHealthKitCloudSyncEvent *_event;
    _Bool _hasEncounteredGapInCurrentEpoch;
    struct {
        unsigned int baselineEpoch:1;
        unsigned int emptyZoneCount:1;
        unsigned int timeSinceDownloadSuccess:1;
        unsigned int timeSinceLastUploadForwardProgress:1;
        unsigned int timeSinceUploadSuccess:1;
        unsigned int timeUntilRebaseRequired:1;
        unsigned int timestamp:1;
        unsigned int hasEncounteredGapInCurrentEpoch:1;
    } _has;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long emptyZoneCount; // @synthesize emptyZoneCount=_emptyZoneCount;
@property(nonatomic) _Bool hasEncounteredGapInCurrentEpoch; // @synthesize hasEncounteredGapInCurrentEpoch=_hasEncounteredGapInCurrentEpoch;
@property(nonatomic) unsigned long long baselineEpoch; // @synthesize baselineEpoch=_baselineEpoch;
@property(nonatomic) unsigned long long timeSinceLastUploadForwardProgress; // @synthesize timeSinceLastUploadForwardProgress=_timeSinceLastUploadForwardProgress;
@property(nonatomic) unsigned long long timeUntilRebaseRequired; // @synthesize timeUntilRebaseRequired=_timeUntilRebaseRequired;
@property(nonatomic) unsigned long long timeSinceDownloadSuccess; // @synthesize timeSinceDownloadSuccess=_timeSinceDownloadSuccess;
@property(nonatomic) unsigned long long timeSinceUploadSuccess; // @synthesize timeSinceUploadSuccess=_timeSinceUploadSuccess;
@property(retain, nonatomic) HDAWDHealthKitCloudSyncEvent *event; // @synthesize event=_event;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasEmptyZoneCount;
@property(nonatomic) _Bool hasHasEncounteredGapInCurrentEpoch;
@property(nonatomic) _Bool hasBaselineEpoch;
@property(nonatomic) _Bool hasTimeSinceLastUploadForwardProgress;
@property(nonatomic) _Bool hasTimeUntilRebaseRequired;
@property(nonatomic) _Bool hasTimeSinceDownloadSuccess;
@property(nonatomic) _Bool hasTimeSinceUploadSuccess;
@property(readonly, nonatomic) _Bool hasEvent;
@property(nonatomic) _Bool hasTimestamp;

@end

