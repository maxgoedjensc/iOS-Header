//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AnalyticsEventObserverDelegate, OS_dispatch_queue;

@interface AnalyticsEventObserver : NSObject
{
    struct shared_ptr<(anonymous namespace)::EventObserverImpl> observer;
    NSObject<OS_dispatch_queue> *_queue;
    id <AnalyticsEventObserverDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <AnalyticsEventObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)stopObserving;
- (_Bool)startObservingEventList:(id)arg1;
- (void)setEventObserverDelegate:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)init;

@end

