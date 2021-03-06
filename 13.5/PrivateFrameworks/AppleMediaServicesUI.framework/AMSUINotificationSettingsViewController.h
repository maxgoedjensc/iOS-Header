//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <AppleMediaServicesUI/AMSBagConsumer-Protocol.h>
#import <AppleMediaServicesUI/AMSUINotificationSettingsViewModelDelegate-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSUILoadingView, AMSUINotificationSettingsViewModel, NSString, UITableView, _UIContentUnavailableView;
@protocol AMSBagProtocol;

@interface AMSUINotificationSettingsViewController : UIViewController <AMSUINotificationSettingsViewModelDelegate, AMSBagConsumer>
{
    ACAccount *_account;
    id <AMSBagProtocol> _bag;
    AMSProcessInfo *_clientInfo;
    NSString *_identifier;
    _UIContentUnavailableView *_errorView;
    AMSUILoadingView *_loadingView;
    AMSUINotificationSettingsViewModel *_model;
    UITableView *_tableView;
}

+ (id)bagSubProfileVersion;
+ (id)bagSubProfile;
+ (id)bagKeySet;
- (void).cxx_destruct;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AMSUINotificationSettingsViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AMSUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) _UIContentUnavailableView *errorView; // @synthesize errorView=_errorView;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(readonly, nonatomic) id <AMSBagProtocol> bag; // @synthesize bag=_bag;
@property(readonly, nonatomic) ACAccount *account; // @synthesize account=_account;
- (void)viewModel:(id)arg1 didReceiveValueChange:(id)arg2 forItem:(id)arg3;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)_loadData;
- (void)commonSetup;
- (id)initWithIdentifier:(id)arg1 account:(id)arg2 bag:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

