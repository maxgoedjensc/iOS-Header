//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMAssistantCore/NSObject-Protocol.h>

@class NSArray, NSString, TUSenderIdentity;

@protocol IMAssistantCoreTelephonySubscriptionsDataSource <NSObject>
@property(readonly, nonatomic) _Bool deviceHasMultipleSubscriptions;
- (NSString *)simIDForSenderIdentity:(TUSenderIdentity *)arg1;
- (NSString *)handleIDForSenderIdentity:(TUSenderIdentity *)arg1;
- (TUSenderIdentity *)bestSenderIdentityForChatWithHandleIDs:(NSArray *)arg1;
@end

