//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SignpostSupport/NSObject-Protocol.h>

@protocol SignpostSupportTimeInterval <NSObject>
- (double)durationMs;
- (double)endMs;
- (double)startMs;
- (unsigned long long)durationNanoseconds;
- (unsigned long long)endNanoseconds;
- (unsigned long long)startNanoseconds;
- (float)durationSeconds;
- (double)endSeconds;
- (double)startSeconds;
- (double)timebaseRatio;
- (unsigned long long)durationMachContinuousTime;
- (unsigned long long)endMachContinuousTime;
- (unsigned long long)startMachContinuousTime;
@end

