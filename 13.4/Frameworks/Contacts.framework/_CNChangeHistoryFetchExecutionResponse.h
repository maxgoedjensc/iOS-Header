//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface _CNChangeHistoryFetchExecutionResponse : NSObject
{
    NSArray *_events;
    NSData *_token;
}

- (void).cxx_destruct;
@property(readonly, copy) NSData *token; // @synthesize token=_token;
@property(readonly, copy) NSArray *events; // @synthesize events=_events;
- (id)initWithEvents:(id)arg1 token:(id)arg2;

@end

