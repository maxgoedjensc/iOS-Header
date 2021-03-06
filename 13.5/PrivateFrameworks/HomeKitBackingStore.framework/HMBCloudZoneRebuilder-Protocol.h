//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMBCloudZoneRebuilderStatus, NAFuture;

@protocol HMBCloudZoneRebuilder
@property(readonly, nonatomic, getter=isZoneRebuildInProgress) _Bool zoneRebuildInProgress;
@property(readonly, copy) HMBCloudZoneRebuilderStatus *rebuilderStatus;
@property(readonly, nonatomic) NAFuture *rebuildCompleteFuture;
- (void)handleZoneChanged;
- (void)handleIdentityLost;
- (NAFuture *)zoneStartUp;
- (void)rebuild;
@end

