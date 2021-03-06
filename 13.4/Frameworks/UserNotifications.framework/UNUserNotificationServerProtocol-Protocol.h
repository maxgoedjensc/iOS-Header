//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotifications/NSObject-Protocol.h>

@class NSArray, NSNumber, NSSet, NSString, UNNotificationContent, UNNotificationRequest;

@protocol UNUserNotificationServerProtocol <NSObject>
- (void)getNotificationSettingsForTopicsWithBundleIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(NSDictionary *))arg2;
- (void)getNotificationTopicsForBundleIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(NSSet *))arg2;
- (void)setNotificationTopics:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)setBadgeString:(NSString *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)setBadgeNumber:(NSNumber *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)getBadgeNumberForBundleIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(NSNumber *))arg2;
- (void)removeAllDeliveredNotificationsForBundleIdentifier:(NSString *)arg1;
- (void)removeDeliveredNotificationsWithIdentifiers:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)getDeliveredNotificationsForBundleIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(NSArray *))arg2;
- (void)removeAllPendingNotificationRequestsForBundleIdentifier:(NSString *)arg1;
- (void)removeSimilarNotificationRequests:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)removePendingNotificationRequestsWithIdentifiers:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)getPendingNotificationRequestsForBundleIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(NSArray *))arg2;
- (void)setNotificationRequests:(NSArray *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)replaceContentForRequestWithIdentifier:(NSString *)arg1 bundleIdentifier:(NSString *)arg2 replacementContent:(UNNotificationContent *)arg3 completionHandler:(void (^)(NSError *))arg4;
- (void)addNotificationRequest:(UNNotificationRequest *)arg1 forBundleIdentifier:(NSString *)arg2 withCompletionHandler:(void (^)(NSError *))arg3;
- (void)setNotificationCategories:(NSSet *)arg1 forBundleIdentifier:(NSString *)arg2;
- (void)getNotificationCategoriesForBundleIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(NSSet *))arg2;
- (void)getNotificationSettingsForBundleIdentifier:(NSString *)arg1 withCompletionHandler:(void (^)(UNNotificationSettings *))arg2;
- (void)requestAuthorizationWithOptions:(unsigned long long)arg1 forBundleIdentifier:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)setObservingUserNotifications:(_Bool)arg1 forBundleIdentifier:(NSString *)arg2;
@end

