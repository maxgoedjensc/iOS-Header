//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CFNetwork/NSURLSessionTaskDelegate-Protocol.h>

@class NSString;

@interface UnitTestSessionTask_publishingURL_BasicTest_Delegate : NSObject <NSURLSessionTaskDelegate>
{
    SmartBlockWithArgs_343a5e9e _didDidCompleteWithErrorCompletionBlock;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic) SmartBlockWithArgs_343a5e9e didDidCompleteWithErrorCompletionBlock; // @synthesize didDidCompleteWithErrorCompletionBlock=_didDidCompleteWithErrorCompletionBlock;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

