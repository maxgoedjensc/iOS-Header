//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PASDeviceInfo : NSObject
{
    int _batterySaverModeToken;
}

+ (_Bool)shouldIncludePredictionLogs;
+ (_Bool)isDNUEnabled;
+ (_Bool)isAudioAccessory;
+ (_Bool)isBetaBuild;
+ (_Bool)isInternalBuild;
+ (_Bool)isDemoModeEnabled;
+ (_Bool)isBatterySaverEnabled;
+ (_Bool)isLowEndHardware;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;

@end

