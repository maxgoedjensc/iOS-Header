//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBAuthenticationFeedback, SBLockScreenBiometricAuthenticationCoordinator;

@protocol SBLockScreenBiometricAuthenticationCoordinatorDelegate <NSObject>
- (_Bool)biometricAuthenticationCoordinator:(SBLockScreenBiometricAuthenticationCoordinator *)arg1 requestsUnlockWithIntent:(int)arg2;
- (_Bool)biometricAuthenticationCoordinator:(SBLockScreenBiometricAuthenticationCoordinator *)arg1 requestsAuthenticationFeedback:(SBAuthenticationFeedback *)arg2;
@end

