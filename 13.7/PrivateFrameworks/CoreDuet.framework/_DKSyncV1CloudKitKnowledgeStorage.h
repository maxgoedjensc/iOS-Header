//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, NSOperationQueue, _DKKnowledgeStorage;
@protocol OS_dispatch_group, OS_dispatch_queue, _DKKeyValueStore;

@interface _DKSyncV1CloudKitKnowledgeStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    CKContainer *_container;
    id <_DKKeyValueStore> _keyValueStore;
    _DKKnowledgeStorage *_storage;
    NSObject<OS_dispatch_group> *_group;
    NSOperationQueue *_operationQueue;
}

+ (void)setupWithStorage:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain) NSObject<OS_dispatch_group> *group; // @synthesize group=_group;
@property __weak _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
@property(retain) id <_DKKeyValueStore> keyValueStore; // @synthesize keyValueStore=_keyValueStore;
@property(retain) CKContainer *container; // @synthesize container=_container;
@property(retain) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (_Bool)_enqueueDatabaseOperation:(id)arg1;
- (id)_previousServerChangeTokenForRecordZoneID:(id)arg1;
- (id)_previousServerChangeTokenKeyForRecordZoneID:(id)arg1;
- (void)_resetPreviousServerChangeTokenForRecordZoneID:(id)arg1;
- (void)_setPreviousServerChangeToken:(id)arg1 forRecordZoneID:(id)arg2;
- (void)syncDown;
- (id)getLegacySyncToken;
- (id)initWithStorage:(id)arg1;

@end

