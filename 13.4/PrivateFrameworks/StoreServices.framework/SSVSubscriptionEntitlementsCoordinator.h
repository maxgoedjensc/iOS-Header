//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSVSubscriptionEntitlements, SSXPCConnection;
@protocol OS_dispatch_queue;

@interface SSVSubscriptionEntitlementsCoordinator : NSObject
{
    SSVSubscriptionEntitlements *_cachedEntitlements;
    SSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)_setCachedSubscriptionEntitlements:(id)arg1;
- (id)_loadSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 error:(id *)arg2;
- (id)_connection;
- (id)_cachedSubscriptionEntitlements;
- (void)getSubscriptionEntitlementsIgnoreCaches:(_Bool)arg1 entitlementsBlock:(CDUnknownBlockType)arg2;
- (void)getSubscriptionEntitlements:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

