//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, _DKEvent;

@interface _DKEventDateRef : NSObject
{
    NSDate *_date;
    unsigned long long _type;
    _DKEvent *_event;
}

@property(retain) _DKEvent *event; // @synthesize event=_event;
@property unsigned long long type; // @synthesize type=_type;
@property(retain) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (id)initWithDate:(id)arg1 type:(unsigned long long)arg2 event:(id)arg3;

@end

