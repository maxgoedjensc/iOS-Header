//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DADaemonSupport/DADClientDelegate.h>

#import <DADaemonSupport/DAEventsGrantedDelegatesListResponseConsumer-Protocol.h>

@class NSArray, NSString;

@interface DADClientGrantedDelegatesListResponseDelegate : DADClientDelegate <DAEventsGrantedDelegatesListResponseConsumer>
{
    id _requestID;
    NSArray *_results;
}

- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)grantedDelegatesListRequestFinishedWithResults:(id)arg1 error:(id)arg2;
- (void)performRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

