//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLXPCProxyCreating-Protocol.h>

@class NSString, NSXPCConnection, PLConnectionDebugger;
@protocol OS_dispatch_queue;

@interface PLAssetsdClientXPCConnection : NSObject <PLXPCProxyCreating>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    PLConnectionDebugger *_connectionDebugger;
}

- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)remoteObjectProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (id)connectionWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)handleInvalidation;
- (void)handleInterruption;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

