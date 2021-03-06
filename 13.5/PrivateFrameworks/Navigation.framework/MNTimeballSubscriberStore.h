//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSLock, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNTimeballSubscriberStore : NSObject
{
    NSMutableArray *_subscriptions;
    NSLock *_subscriptionsLock;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *subscriptions;
- (void)unsubscribeFromDestination:(id)arg1;
- (void)unsubscribe:(id)arg1;
- (void)subscribe:(id)arg1;
- (id)init;

@end

