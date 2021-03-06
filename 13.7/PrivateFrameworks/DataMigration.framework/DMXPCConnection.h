//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_xpc_object;

@interface DMXPCConnection : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_replyQueue;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
}

- (void).cxx_destruct;
@property(copy) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(copy) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
- (_Bool)hasEntitlement:(id)arg1;
- (void)sendMessage:(id)arg1 syncReplyHandler:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (void)handleMessage:(id)arg1;
- (void)_handleMessage:(id)arg1;
- (void)invalidate;
- (void)resume;
- (id)initWithServiceName:(id)arg1;
- (id)initWithConnection:(id)arg1;

@end

