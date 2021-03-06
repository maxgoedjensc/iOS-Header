//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENManager, MISSING_TYPE;

@interface _TtC28HealthExposureNotificationUI16ENManagerAdapter : NSObject
{
    MISSING_TYPE *exposureNotificationStatus;
    MISSING_TYPE *isExposureLoggingDataPresent;
    MISSING_TYPE *areAvailabilityAlertsEnabled;
    MISSING_TYPE *statusChangeHandler;
    MISSING_TYPE *manager;
    MISSING_TYPE *activationGroup;
    MISSING_TYPE *statusObservation;
}

+ (void)setDefaultAdapter:(id)arg1;
+ (id)defaultAdapter;
- (void).cxx_destruct;
- (void)setUserConsent:(long long)arg1 region:(id)arg2 text:(id)arg3 version:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setWeeklySummaryEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setAvailabilityAlertsEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetAllDataAndDisableExposureNotifications:(CDUnknownBlockType)arg1;
- (void)setPreReleaseAuthorized:(_Bool)arg1 region:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isPreReleaseAuthorizedForRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setTravelStatusEnabled:(_Bool)arg1 region:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isTravelStatusEnabledForRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setShareStatisticsEnabled:(_Bool)arg1 region:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isShareStatisticsEnabledForRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)allRegionConfigurations:(CDUnknownBlockType)arg1;
- (void)getAgencyModelForRegionCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getAgencyModelForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchAllEntities:(CDUnknownBlockType)arg1;
- (void)fetchAgencyModelForRegionCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)latestExposureNotification:(CDUnknownBlockType)arg1;
- (void)setActivePhaseOneAppWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setActiveRegion:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onboardingDidStartForRegion:(id)arg1 source:(long long)arg2;
- (void)setExposureNotificationEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshStatusWithCompletion:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic, readonly) ENManager *manager; // @synthesize manager;
@property(nonatomic, copy) CDUnknownBlockType statusChangeHandler;
@property(nonatomic) _Bool areAvailabilityAlertsEnabled; // @synthesize areAvailabilityAlertsEnabled;
@property(nonatomic) _Bool isExposureLoggingDataPresent; // @synthesize isExposureLoggingDataPresent;
@property(nonatomic) long long exposureNotificationStatus; // @synthesize exposureNotificationStatus;

@end

