//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDUserDataController, HMDUserSettingsBackingStoreController, NSUUID;

@protocol HMDUserDataControllerDelegate <NSObject>
@property(readonly) _Bool isUserSettingsPrefEnabled;
- (HMDUserSettingsBackingStoreController *)privateZoneControllerForUserDataController:(HMDUserDataController *)arg1;
- (HMDUserSettingsBackingStoreController *)sharedZoneControllerForUserDataController:(HMDUserDataController *)arg1;
- (void)userDataControllerDidUpdateMediaContentProfile:(HMDUserDataController *)arg1;
- (void)userDataControllerDidUpdateAssistantAccessControl:(HMDUserDataController *)arg1;
- (_Bool)userDataController:(HMDUserDataController *)arg1 isPersonalRequestCapableAccessoryID:(NSUUID *)arg2;
- (_Bool)userDataController:(HMDUserDataController *)arg1 isMediaContentProfileCapableAccessoryID:(NSUUID *)arg2;
@end

