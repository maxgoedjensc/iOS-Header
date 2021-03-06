//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASDRepairServiceProtocol-Protocol.h"

@protocol OS_dispatch_queue;

@interface RepairService : NSObject <ASDRepairServiceProtocol>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)defaultService;
- (void).cxx_destruct;
- (id)_currentClient;
- (void)repairAppWithOptions:(id)arg1 replyHandler:(CDUnknownBlockType)arg2;
- (id)init;

@end

