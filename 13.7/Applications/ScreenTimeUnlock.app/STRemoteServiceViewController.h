//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBUIRemoteAlertServiceViewController.h>

#import "DevicePINControllerDelegate-Protocol.h"

@class NSString, STLockoutAppContext;

@interface STRemoteServiceViewController : SBUIRemoteAlertServiceViewController <DevicePINControllerDelegate>
{
    STLockoutAppContext *_appContext;
}

+ (void)dismissPinController;
- (void).cxx_destruct;
- (void)_restrictionsPINControllerDidDismiss:(_Bool)arg1;
- (void)devicePINControllerDidDismissPINPane:(id)arg1;
- (void)_dismissPINControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN;
- (void)showRestrictionsPINController;
- (void)handleButtonActions:(id)arg1;
- (void)configureWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_willAppearInRemoteViewController;
- (id)init;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

