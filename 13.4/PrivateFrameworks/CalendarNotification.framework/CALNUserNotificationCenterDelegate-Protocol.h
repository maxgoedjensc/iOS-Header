//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CALNNotification, CALNNotificationResponse;
@protocol CALNUserNotificationCenter;

@protocol CALNUserNotificationCenterDelegate
- (void)userNotificationCenter:(id <CALNUserNotificationCenter>)arg1 didReceiveNotificationResponse:(CALNNotificationResponse *)arg2 withCompletionHandler:(void (^)(void))arg3;
- (void)userNotificationCenter:(id <CALNUserNotificationCenter>)arg1 willPresentNotification:(CALNNotification *)arg2 withCompletionHandler:(void (^)(unsigned long long))arg3;
@end

