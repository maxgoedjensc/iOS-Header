//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ReminderKit/REMXPCDaemonControllerPerformerResolver.h>

@class REMStoreContainerToken;

@interface REMXPCDaemonControllerPerformerResolver_store : REMXPCDaemonControllerPerformerResolver
{
    REMStoreContainerToken *_storeContainerToken;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) REMStoreContainerToken *storeContainerToken; // @synthesize storeContainerToken=_storeContainerToken;
- (void)resolveWithDaemon:(id)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)name;
- (id)initWithStoreContainerToken:(id)arg1;

@end

