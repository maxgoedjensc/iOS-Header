//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKQuantity, HKQuantityType, NSArray, NSDate;

@interface FITrailingQuantityTimeSlice : NSObject
{
    NSArray *_uncommittedSamples;
    NSArray *_committedSamples;
    NSDate *_lastCommitDate;
    _Bool _finalized;
    HKQuantityType *_quantityType;
    NSDate *_startDate;
    NSDate *_endDate;
    HKQuantity *_committedTotal;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HKQuantity *committedTotal; // @synthesize committedTotal=_committedTotal;
@property(readonly, nonatomic) _Bool finalized; // @synthesize finalized=_finalized;
@property(readonly, nonatomic) NSArray *committedSamples; // @synthesize committedSamples=_committedSamples;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) HKQuantityType *quantityType; // @synthesize quantityType=_quantityType;
- (id)settingTotalQuantityLimit:(id)arg1;
- (id)settingStartDate:(id)arg1;
- (id)settingEndDate:(id)arg1;
- (id)committingUntilDate:(id)arg1;
- (id)autoCommitDateForSamples:(id)arg1;
- (id)addingSamples:(id)arg1 error:(id *)arg2;
- (id)addingSample:(id)arg1 error:(id *)arg2;
- (double)activeDurationUntilDate:(id)arg1;
@property(readonly, nonatomic) double committedDuration;
@property(readonly, nonatomic) HKQuantity *committedAndAddedTotal;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 committedSamples:(id)arg4 uncommittedSamples:(id)arg5 lastCommitDate:(id)arg6 committedTotal:(id)arg7 finalized:(_Bool)arg8;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
- (id)initWithQuantityType:(id)arg1 startDate:(id)arg2;
- (id)description;
- (id)_commitingSamples:(id)arg1 toPreviousCommittedTotal:(id)arg2 toPreviousCommittedSamples:(id)arg3 untilDate:(id)arg4 startDate:(id)arg5 endDate:(id)arg6;
- (id)_totalByCommittingSample:(id)arg1 toPreviousTotal:(id)arg2 startDate:(id)arg3 endDate:(id)arg4;

@end

