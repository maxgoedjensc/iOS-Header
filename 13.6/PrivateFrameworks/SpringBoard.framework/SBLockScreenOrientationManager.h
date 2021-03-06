//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBAssistantObserver-Protocol.h>

@class NSDate, NSString;

@interface SBLockScreenOrientationManager : NSObject <SBAssistantObserver>
{
    NSDate *_updateForAmbiguousOrientationsAfterDate;
    _Bool _wasUILocked;
}

- (void).cxx_destruct;
- (void)_updateDeviceOrientationIfNeededForPhoneUnlockToOrientation:(long long)arg1;
- (void)_lockStateChanged:(id)arg1;
- (void)updateInterfaceOrientationWithRequestedOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)assistantDidAppear:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

