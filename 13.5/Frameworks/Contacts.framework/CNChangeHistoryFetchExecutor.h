//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNChangeHistoryFetchRequest, CNContactStore;

__attribute__((visibility("hidden")))
@interface CNChangeHistoryFetchExecutor : NSObject
{
    CNChangeHistoryFetchRequest *_request;
    CNContactStore *_store;
}

+ (id)contactEventForChange:(id)arg1 factory:(id)arg2;
+ (id)os_log;
- (void).cxx_destruct;
@property(readonly, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(readonly, copy, nonatomic) CNChangeHistoryFetchRequest *request; // @synthesize request=_request;
- (id)groupEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2;
- (id)contactEventsFromLegacyResult:(id)arg1 eventFactory:(id)arg2;
- (id)keysToFetch;
- (id)deltaSync;
- (id)fullSync;
- (id)run:(id *)arg1;
- (id)description;
- (id)initWithRequest:(id)arg1 store:(id)arg2;

@end

