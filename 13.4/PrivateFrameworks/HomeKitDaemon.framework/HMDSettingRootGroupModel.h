//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDSettingGroupModel.h>

#import <HomeKitDaemon/HMDConflictResolutionModel-Protocol.h>

@class NSUUID;

@interface HMDSettingRootGroupModel : HMDSettingGroupModel <HMDConflictResolutionModel>
{
}

+ (id)hmbProperties;
- (id)copyWithNewParentModelID:(id)arg1;
- (id)nameForKeyPath;
- (id)initWithModelID:(id)arg1 parentModelID:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSUUID *conflictResolutionToken; // @dynamic conflictResolutionToken;

@end

