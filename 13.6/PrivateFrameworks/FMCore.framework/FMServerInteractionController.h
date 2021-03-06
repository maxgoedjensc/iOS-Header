//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/NSURLSessionDelegate-Protocol.h>

@class NSMutableSet, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface FMServerInteractionController : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *dq_inFlightCommands;
    NSMutableSet *inFlightCommands;
    NSOperationQueue *_queue;
    NSURLSession *_session;
    NSURLSessionConfiguration *_sessionConfiguration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)processResponseForCommand:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)networkActivityStatus:(_Bool)arg1;
- (void)invalidate;
- (void)cancelAllCommands;
- (void)cancelCommand:(id)arg1;
- (void)sendCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (double)_simulatedLatency;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

