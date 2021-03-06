//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SCRCIndexMap;

@interface SCROBrailleDisplayManagedQueue : NSObject
{
    SCRCIndexMap *_stateQueueMap;
    struct __CFDictionary *_queueStateDict;
    struct __CFDictionary *_displayQueueDict;
    SCRCIndexMap *_tokenDisplayMap;
    unsigned long long _maxActiveQueueSize;
}

- (void).cxx_destruct;
- (id)loadingDisplays;
- (id)disconnectedDisplays;
- (id)sleepingDisplays;
- (id)activePendingDisplays;
- (id)activeDisplays;
- (void)setActiveQueueMaximumSize:(unsigned long long)arg1;
- (unsigned long long)activeQueueMaximumSize;
- (void)setPrimaryDisplay:(id)arg1;
- (id)primaryDisplay;
- (unsigned long long)displayCountIncludingDisconnectedDisplays:(_Bool)arg1;
- (id)displayForToken:(int)arg1;
- (int)stateForDisplay:(id)arg1;
- (void)setState:(int)arg1 forDisplay:(id)arg2;
- (void)_fillActiveBrailleDisplayQueue;
- (void)removeDisplay:(id)arg1;
- (void)addDisplay:(id)arg1 withState:(int)arg2;
- (id)_queueForState:(int)arg1 createQueue:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

