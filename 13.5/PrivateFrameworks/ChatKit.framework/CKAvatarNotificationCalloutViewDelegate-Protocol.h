//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/NSObject-Protocol.h>

@class CKAvatarNotificationCalloutView;

@protocol CKAvatarNotificationCalloutViewDelegate <NSObject>
- (void)avatarNotificationCalloutViewWillFadeIn:(CKAvatarNotificationCalloutView *)arg1;
- (void)avatarNotificationCalloutViewDidFinishFadeOut:(CKAvatarNotificationCalloutView *)arg1;

@optional
- (void)avatarNotificationCalloutViewReceivedTouch:(CKAvatarNotificationCalloutView *)arg1;
@end

