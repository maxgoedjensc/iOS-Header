//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <UserNotificationsUI/_UNNotificationExtensionHostInterface-Protocol.h>

@class NSExtension, NSString, UIColor;
@protocol NSCopying, _UNNotificationExtensionHostDelegate;

@interface _UNNotificationExtensionHostViewController : _UIRemoteViewController <_UNNotificationExtensionHostInterface>
{
    _Bool _wantsToBecomeFirstResponder;
    _Bool _wantsToReceiveActionResponses;
    id <_UNNotificationExtensionHostDelegate> _delegate;
    NSExtension *_extension;
    id <NSCopying> _extensionRequestIdentifier;
    NSString *_notificationRequestIdentifier;
    unsigned long long _playPauseMediaButtonType;
    UIColor *_playPauseMediaButtonColor;
    struct CGRect _playPauseMediaButtonFrame;
}

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *playPauseMediaButtonColor; // @synthesize playPauseMediaButtonColor=_playPauseMediaButtonColor;
@property(nonatomic) struct CGRect playPauseMediaButtonFrame; // @synthesize playPauseMediaButtonFrame=_playPauseMediaButtonFrame;
@property(nonatomic) unsigned long long playPauseMediaButtonType; // @synthesize playPauseMediaButtonType=_playPauseMediaButtonType;
@property(nonatomic) _Bool wantsToReceiveActionResponses; // @synthesize wantsToReceiveActionResponses=_wantsToReceiveActionResponses;
@property(nonatomic) _Bool wantsToBecomeFirstResponder; // @synthesize wantsToBecomeFirstResponder=_wantsToBecomeFirstResponder;
@property(copy, nonatomic) NSString *notificationRequestIdentifier; // @synthesize notificationRequestIdentifier=_notificationRequestIdentifier;
@property(copy, nonatomic) id <NSCopying> extensionRequestIdentifier; // @synthesize extensionRequestIdentifier=_extensionRequestIdentifier;
@property(nonatomic) __weak NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <_UNNotificationExtensionHostDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_extensionSetUserNotificationActions:(id)arg1;
- (void)_extensionSetTitle:(id)arg1;
- (void)_extensionRequestsDismiss;
- (void)_extensionRequestsDefaultAction;
- (void)_extensionMediaPlayingPaused;
- (void)_extensionMediaPlayingStarted;
- (void)_extensionSetPlayPauseMediaButtonColor:(id)arg1;
- (void)_extensionSetPlayPauseMediaButtonFrame:(struct CGRect)arg1;
- (void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1;
- (void)_extensionWantsToBecomeFirstResponder:(_Bool)arg1;
- (void)_extensionWantsToReceiveActionResponses:(_Bool)arg1;
- (void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2;
- (void)_extensionDidUpdateControls;
- (_Bool)_canShowWhileLocked;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)__shouldRemoteViewControllerFenceOperations;

@end

