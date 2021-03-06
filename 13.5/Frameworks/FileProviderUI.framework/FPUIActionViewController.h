//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <FileProviderUI/FPUIActionControllerProtocol-Protocol.h>
#import <FileProviderUI/FPUIActionRemoteContextDelegate-Protocol.h>
#import <FileProviderUI/FPUIActionRemoteViewControllerDelegate-Protocol.h>

@class NSArray, NSError, NSString, NSURL, _UIResilientRemoteViewContainerViewController;
@protocol FPUIActionExtensionViewControllerProtocol, FPUIActionViewControllerDelegate;

@interface FPUIActionViewController : UIViewController <FPUIActionRemoteViewControllerDelegate, FPUIActionRemoteContextDelegate, FPUIActionControllerProtocol>
{
    id <FPUIActionExtensionViewControllerProtocol> _extensionViewController;
    _UIResilientRemoteViewContainerViewController *_placeholderVC;
    _Bool _displayInline;
    id <FPUIActionViewControllerDelegate> _delegate;
    NSString *_actionTitle;
    NSError *_error;
    NSURL *_authenticationURL;
    unsigned long long _browserUserInterfaceStyle;
    NSString *_providerIdentifier;
    NSString *_actionIdentifier;
    NSURL *_serverConnectionURL;
    NSArray *_items;
    NSString *_domainIdentifier;
}

+ (id)actionControllerForInlineError:(id)arg1 providerIdentifier:(id)arg2;
+ (id)actionControllerForError:(id)arg1 extensionIdentifier:(id)arg2 providerDomainIdentifier:(id)arg3;
+ (id)actionControllerForError:(id)arg1 providerIdentifier:(id)arg2;
+ (id)actionControllerForConnectingToServerURL:(id)arg1 actionTitle:(id)arg2 providerIdentifier:(id)arg3;
+ (id)actionControllerForAuthenticationUsingURL:(id)arg1 providerIdentifier:(id)arg2;
+ (id)actionControllerForActionIdentifier:(id)arg1 actionTitle:(id)arg2 items:(id)arg3 providerIdentifier:(id)arg4 domainIdentifier:(id)arg5;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSURL *serverConnectionURL; // @synthesize serverConnectionURL=_serverConnectionURL;
@property(retain, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property(retain, nonatomic) NSString *providerIdentifier; // @synthesize providerIdentifier=_providerIdentifier;
@property(readonly, nonatomic) unsigned long long browserUserInterfaceStyle; // @synthesize browserUserInterfaceStyle=_browserUserInterfaceStyle;
@property(nonatomic) _Bool displayInline; // @synthesize displayInline=_displayInline;
@property(retain, nonatomic) NSURL *authenticationURL; // @synthesize authenticationURL=_authenticationURL;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(nonatomic) __weak id <FPUIActionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)remoteActionContext:(id)arg1 didEncounterError:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)remoteActionContextDidFinishAction:(id)arg1 userInfo:(id)arg2 error:(id)arg3;
- (void)remoteActionControllerDidFinishAction:(id)arg1 error:(id)arg2;
- (void)_delegateError:(id)arg1;
- (void)_delegateDidFinishWithUserInfo:(id)arg1 error:(id)arg2;
- (void)_dismissViewController;
- (id)_getExtensionWithError:(id *)arg1;
- (void)effectiveAppearanceDidChange:(id)arg1;
- (void)embedViewController:(id)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

