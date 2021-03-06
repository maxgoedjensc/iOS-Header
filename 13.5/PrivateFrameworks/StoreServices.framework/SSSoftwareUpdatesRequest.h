//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

@class SSSoftwareUpdatesContext;
@protocol SSSoftwareUpdatesRequestDelegate;

@interface SSSoftwareUpdatesRequest : SSRequest
{
    SSSoftwareUpdatesContext *_context;
}

- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
- (_Bool)start;
@property(readonly) SSSoftwareUpdatesContext *updateQueueContext;
- (void)startWithUpdatesResponseBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithUpdateQueueContext:(id)arg1;

// Remaining properties
@property(nonatomic) id <SSSoftwareUpdatesRequestDelegate> delegate; // @dynamic delegate;

@end

