//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ENRegion, MISSING_TYPE, NSString, NSURL, UIImage, _TtC28HealthExposureNotificationUI21ENUIUserConsentStatus, _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader, _TtC28HealthExposureNotificationUI29ENUIPublicHealthLegalDocument;

@interface _TtC28HealthExposureNotificationUI27ENUIPublicHealthAgencyModel : NSObject
{
    MISSING_TYPE *region;
    MISSING_TYPE *name;
    MISSING_TYPE *appBundleId;
    MISSING_TYPE *introductoryText;
    MISSING_TYPE *header;
    MISSING_TYPE *legalese;
    MISSING_TYPE *consentStatus;
    MISSING_TYPE *isAuthorized;
    MISSING_TYPE *regionVersion;
    MISSING_TYPE *regionWebsiteURL;
    MISSING_TYPE *verificationIntroductoryText;
    MISSING_TYPE *verificationCodeHelpURL;
    MISSING_TYPE *verificationSymptomOnsetText;
    MISSING_TYPE *verificationTravelStatusText;
}

+ (id)regionForRegionCode:(id)arg1;
+ (id)allRegions;
+ (id)dummyRegionCountryCode;
+ (void)setAvailableRegions:(id)arg1;
+ (id)availableRegions;
+ (void)setAuthorizedRegions:(id)arg1;
+ (id)authorizedRegions;
+ (void)setActiveRegion:(id)arg1;
+ (id)activeRegion;
- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) _Bool regionIsPlaceholder;
@property(nonatomic, readonly) UIImage *installedAppIcon;
@property(nonatomic, readonly) NSString *installedAppName;
@property(nonatomic, readonly) _Bool isAppInstalled;
- (id)initWithRegion:(id)arg1 name:(id)arg2 appBundleId:(id)arg3 introductoryText:(id)arg4 header:(id)arg5 legalese:(id)arg6 consentStatus:(id)arg7 isAuthorized:(_Bool)arg8 regionVersion:(long long)arg9 regionWebsiteURL:(id)arg10 verificationIntroductoryText:(id)arg11 verificationCodeHelpURL:(id)arg12 verificationSymptomOnsetText:(id)arg13 verificationTravelStatusText:(id)arg14;
@property(nonatomic, readonly) _Bool isTravelStatusNeeded;
@property(nonatomic, readonly) _Bool isSymptomOnsetNeeded;
@property(nonatomic, readonly) NSString *verificationTravelStatusText;
@property(nonatomic, readonly) NSString *verificationSymptomOnsetText;
@property(nonatomic, readonly) NSURL *verificationCodeHelpURL;
@property(nonatomic, readonly) NSString *verificationIntroductoryText;
@property(nonatomic, readonly) NSURL *regionWebsiteURL;
@property(nonatomic, readonly) long long regionVersion; // @synthesize regionVersion;
@property(nonatomic, readonly) _Bool isAuthorized; // @synthesize isAuthorized;
@property(nonatomic, readonly) _TtC28HealthExposureNotificationUI21ENUIUserConsentStatus *consentStatus; // @synthesize consentStatus;
@property(nonatomic, readonly) _TtC28HealthExposureNotificationUI29ENUIPublicHealthLegalDocument *legalese; // @synthesize legalese;
@property(nonatomic, readonly) _TtC28HealthExposureNotificationUI22ENUIPublicHealthHeader *header; // @synthesize header;
@property(nonatomic, readonly) NSString *introductoryText;
@property(nonatomic, readonly) NSString *appBundleId;
@property(nonatomic, readonly) NSString *name;
@property(nonatomic, readonly) ENRegion *region; // @synthesize region;

@end

