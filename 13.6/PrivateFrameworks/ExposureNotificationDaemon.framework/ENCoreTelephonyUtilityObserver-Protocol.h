//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ExposureNotificationDaemon/NSObject-Protocol.h>

@class ENCoreTelephonyUtility, NSString;

@protocol ENCoreTelephonyUtilityObserver <NSObject>
- (void)telephonyUtility:(ENCoreTelephonyUtility *)arg1 mobileCountryCodeChanged:(NSString *)arg2 andCountryCodeISO:(NSString *)arg3;
@end

