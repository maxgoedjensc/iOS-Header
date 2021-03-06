//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BTAManager : NSObject
{
    NSMutableDictionary *_jobs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // @synthesize isolationQueue=_isolationQueue;
@property(retain, nonatomic) NSMutableDictionary *jobs; // @synthesize jobs=_jobs;
- (void).cxx_destruct;
- (void)_jobEvent:(id)arg1 name:(id)arg2;
- (void)removeJob:(id)arg1;
- (void)addJob:(id)arg1;
- (void)dealloc;
- (id)init;

@end

