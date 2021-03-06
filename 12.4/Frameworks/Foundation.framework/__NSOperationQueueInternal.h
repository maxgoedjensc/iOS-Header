//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation, NSPointerArray, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface __NSOperationQueueInternal : NSObject
{
    struct os_unfair_lock_s __queueLock;
    NSOperation *__firstOperation;
    NSOperation *__lastOperation;
    NSOperation *__pendingFirstOperation;
    NSOperation *__pendingLastOperation;
    NSOperation *__firstPriOperation[5];
    NSOperation *__lastPriOperation[5];
    _Atomic unsigned long long __operationCount;
    NSPointerArray *__activeThreads;
    long long __maxNumOps;
    int __actualMaxNumOps;
    int __numExecOps;
    unsigned char __mainQ;
    _Atomic _Bool __suspended;
    _Atomic _Bool __overcommit;
    _Atomic unsigned char __propertyQoS;
    NSObject<OS_dispatch_queue> *__dispatch_queue;
    NSObject<OS_dispatch_queue> *__backingQueue;
    NSString *__name;
    char __nameBuffer[320];
    _Atomic unsigned char __operationsObserverCount;
    _Atomic unsigned char __operationCountObserverCount;
    _Atomic unsigned char __suspendedObserverCount;
}

- (void)dealloc;
- (id)init;

@end

