//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSnapshotLocal, HMDCameraSnapshotSessionID, HMDSnapshotFile, NSError;

@protocol HMDCameraSnapshotLocalDelegate <NSObject>
- (void)snapshotLocal:(HMDCameraSnapshotLocal *)arg1 didSaveSnapshotFile:(HMDSnapshotFile *)arg2 error:(NSError *)arg3 sessionID:(HMDCameraSnapshotSessionID *)arg4;
@end

