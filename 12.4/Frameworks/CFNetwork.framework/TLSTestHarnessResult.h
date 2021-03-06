//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSHTTPURLResponse, NSMutableData, NSURLSessionTask;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TLSTestHarnessResult : NSObject
{
    NSURLSessionTask *_task;
    NSHTTPURLResponse *_response;
    NSMutableData *_data;
    NSError *_error;
    NSObject<OS_dispatch_semaphore> *_sema;
}

@property(retain) NSObject<OS_dispatch_semaphore> *sema; // @synthesize sema=_sema;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSMutableData *data; // @synthesize data=_data;
@property(retain) NSHTTPURLResponse *response; // @synthesize response=_response;
@property(retain) NSURLSessionTask *task; // @synthesize task=_task;
- (void)appendResponseData:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(id)arg1;

@end

