//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class PKPaymentSetupRequest, PKRemotePaymentSetupViewController, UIActivityIndicatorView, UIButton, UILabel, _UIAsyncInvocation;

@interface PKPaymentSetupViewController : UIViewController
{
    PKRemotePaymentSetupViewController *_remoteVC;
    PKPaymentSetupRequest *_paymentSetupRequest;
    _UIAsyncInvocation *_remoteVCRequest;
    UIActivityIndicatorView *_spinner;
    UILabel *_loadingLabel;
    UIButton *_cancelButton;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (void)paymentSetupFeaturesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)paymentSetupDidFinish;
- (void)_cancelTapped;
- (void)_hideLoadingContent;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (long long)modalPresentationStyle;
- (long long)modalTransitionStyle;
- (void)_setRemoteVC:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithPaymentSetupRequest:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end

