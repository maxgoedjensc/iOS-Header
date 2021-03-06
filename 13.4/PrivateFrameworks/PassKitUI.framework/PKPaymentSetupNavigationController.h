//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKNavigationController.h>

#import <PassKitUI/PKPaymentSetupViewControllerDelegate-Protocol.h>
#import <PassKitUI/PKViewControllerPreflightable-Protocol.h>

@class NSString, PKPaymentProvisioningController;
@protocol PKPaymentSetupDelegate;

@interface PKPaymentSetupNavigationController : PKNavigationController <PKPaymentSetupViewControllerDelegate, PKViewControllerPreflightable>
{
    long long _context;
    _Bool _rootViewControllerNeedsConfiguration;
    _Bool _showsWelcomeViewController;
    _Bool _allowsManualEntry;
    PKPaymentProvisioningController *_provisioningController;
    id <PKPaymentSetupDelegate> _setupDelegate;
    long long _paymentSetupMode;
}

+ (id)viewControllerForPresentingPaymentError:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long paymentSetupMode; // @synthesize paymentSetupMode=_paymentSetupMode;
@property(nonatomic) _Bool allowsManualEntry; // @synthesize allowsManualEntry=_allowsManualEntry;
@property(nonatomic) _Bool showsWelcomeViewController; // @synthesize showsWelcomeViewController=_showsWelcomeViewController;
@property(nonatomic) id <PKPaymentSetupDelegate> setupDelegate; // @synthesize setupDelegate=_setupDelegate;
@property(readonly, retain, nonatomic) PKPaymentProvisioningController *provisioningController; // @synthesize provisioningController=_provisioningController;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewController:(id)arg1 didExitPasscodeUpgradeWithShouldContinue:(_Bool)arg2 error:(id)arg3;
- (void)viewController:(id)arg1 requestPasscodeUpgradeWithCompletion:(CDUnknownBlockType)arg2;
- (void)viewController:(id)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 withShouldContinue:(_Bool)arg3 error:(id)arg4;
- (void)viewController:(id)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewControllerDidShowEligibilityIssue:(id)arg1;
- (void)viewController:(id)arg1 didShowProvisioningError:(id)arg2;
- (void)viewControllerDidCancelSetupFlow:(id)arg1;
- (void)viewControllerDidTerminateSetupFlow:(id)arg1;
- (void)cancel:(id)arg1;
- (void)_dirtyConfigurationAndReloadIfNeeded;
- (void)setCustomFormSheetPresentationStyleForiPad;
- (void)preflightWithCompletion:(CDUnknownBlockType)arg1;
- (void)_reconfigureRootViewController;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewDidLoad;
- (long long)_preferredModalPresentationStyle;
- (void)loadView;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

