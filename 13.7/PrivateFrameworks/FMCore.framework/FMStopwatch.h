//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMStopwatch : NSObject
{
    NSString *_label;
    NSString *_comment;
    unsigned long long _startTime;
    unsigned long long _endTime;
}

+ (id)illegalLabelCharacterSet;
+ (void)dumpBuffer:(id)arg1;
+ (void)eventWithLabel:(id)arg1;
+ (void)eventWithLabel:(id)arg1 comment:(id)arg2;
+ (id)stopwatchWithLabel:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long endTime; // @synthesize endTime=_endTime;
@property(nonatomic) unsigned long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=_comment;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (id)descriptionAsData;
- (id)description;
- (void)stop;
- (void)stopWithComment:(id)arg1;
- (id)initWithLabel:(id)arg1;

@end

