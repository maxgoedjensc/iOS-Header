//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer;
@protocol StatusDebouncerDelegate;

__attribute__((visibility("hidden")))
@interface FlyoverStatusDebouncer : NSObject
{
    NSTimer *_timer;
    id <StatusDebouncerDelegate> _delegate;
    unsigned long long _input;
    unsigned long long _output;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long output; // @synthesize output=_output;
@property(nonatomic) unsigned long long input; // @synthesize input=_input;
@property(nonatomic) __weak id <StatusDebouncerDelegate> delegate; // @synthesize delegate=_delegate;
- (double)minimumDurationForOutput:(unsigned long long)arg1;
- (void)timerFired:(id)arg1;
- (void)updateOutput;

@end

