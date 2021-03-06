//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSDServiceBrokerProtocol-Protocol.h>

@class NSMutableArray, NSMutableSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSDaemonConnection : NSObject <AMSDServiceBrokerProtocol>
{
    NSXPCConnection *_sharedConnection;
    NSObject<OS_dispatch_queue> *_sharedConnectionAccessQueue;
    NSMutableSet *_activePromises;
    NSMutableArray *_interruptionHandlers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSMutableArray *interruptionHandlers; // @synthesize interruptionHandlers=_interruptionHandlers;
@property(readonly, nonatomic) NSMutableSet *activePromises; // @synthesize activePromises=_activePromises;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedConnectionAccessQueue; // @synthesize sharedConnectionAccessQueue=_sharedConnectionAccessQueue;
@property(retain, nonatomic) NSXPCConnection *sharedConnection; // @synthesize sharedConnection=_sharedConnection;
- (void)_handleInvalidation;
- (void)_handleInterruption;
- (id)_connectionProxyForAsync:(_Bool)arg1 accessBlock:(CDUnknownBlockType)arg2;
- (id)securityServiceProxyWithDelegate:(id)arg1;
- (id)pushNotificationService;
- (id)deviceMessengerProxyWithDelegate:(id)arg1;
- (void)addInterruptionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

