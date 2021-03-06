//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AccountsDaemon/NSObject-Protocol.h>

@class ACAccount, ACDAccountStore, NSArray;

@protocol ACDAccountNotificationPlugin <NSObject>

@optional
- (void)account:(ACAccount *)arg1 didPerformActionsForDataclasses:(NSArray *)arg2;
- (void)account:(ACAccount *)arg1 willPerformActionsForDataclasses:(NSArray *)arg2;
- (void)account:(ACAccount *)arg1 didChangeWithType:(int)arg2 inStore:(ACDAccountStore *)arg3 oldAccount:(ACAccount *)arg4;
- (_Bool)account:(ACAccount *)arg1 willChangeWithType:(int)arg2 inStore:(ACDAccountStore *)arg3 oldAccount:(ACAccount *)arg4;
- (_Bool)canRemoveAccount:(ACAccount *)arg1 inStore:(ACDAccountStore *)arg2;
- (_Bool)canSaveAccount:(ACAccount *)arg1 inStore:(ACDAccountStore *)arg2;
@end

