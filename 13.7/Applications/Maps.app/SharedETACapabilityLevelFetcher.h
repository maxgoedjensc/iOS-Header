//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "IDSBatchIDQueryControllerDelegate-Protocol.h"

@class GEOObserverHashTable, IDSBatchIDQueryController, NSMutableDictionary, NSMutableSet, NSString, NSTimer;

__attribute__((visibility("hidden")))
@interface SharedETACapabilityLevelFetcher : NSObject <IDSBatchIDQueryControllerDelegate>
{
    GEOObserverHashTable *_observers;
    NSMutableDictionary *_identifierToShareETAStatus;
    NSMutableDictionary *_identifierToMessagesStatus;
    IDSBatchIDQueryController *_messagesBatchController;
    IDSBatchIDQueryController *_etaBatchController;
    NSMutableSet *_etaFetchQueue;
    NSMutableSet *_messagesFetchQueue;
    NSTimer *_retryAfterBackoffTimer;
}

+ (id)sharedFetcher;
- (void).cxx_destruct;
- (void)capabilityLevelNoLongerNeededForContact:(id)arg1;
- (void)fetchCapabilityLevelForContact:(id)arg1;
- (void)fetchCapabilityLevelForContacts:(id)arg1;
- (void)batchQueryController:(id)arg1 updatedDestinationsStatus:(id)arg2 onService:(id)arg3 error:(id)arg4;
- (void)fetchQueueDidUpdate;
- (_Bool)processMessagesDictionary:(id)arg1;
- (_Bool)processEtaDictionary:(id)arg1;
- (unsigned long long)capabilityLevelForContact:(id)arg1;
- (void)notifyObservers;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

