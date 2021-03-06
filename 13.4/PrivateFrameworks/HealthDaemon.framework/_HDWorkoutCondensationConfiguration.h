//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDProfile, HDSQLitePredicate, _HDWorkoutCondenserAnalyticsAccumulator;

@interface _HDWorkoutCondensationConfiguration : NSObject
{
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    double _minimumWorkoutDuration;
    long long _minimumSeriesSize;
    long long _maximumSeriesSize;
    long long _deletedSampleThreshold;
    _HDWorkoutCondenserAnalyticsAccumulator *_analyticsAccumulator;
}

+ (id)configurationWithProfile:(id)arg1 minimumSeriesSize:(long long)arg2 maximumSeriesSize:(long long)arg3 deletedSampleThreshold:(long long)arg4 analyticsAccumulator:(id)arg5 error:(id *)arg6;
- (void).cxx_destruct;
@property(readonly, nonatomic) _HDWorkoutCondenserAnalyticsAccumulator *analyticsAccumulator; // @synthesize analyticsAccumulator=_analyticsAccumulator;
@property(readonly, nonatomic) long long deletedSampleThreshold; // @synthesize deletedSampleThreshold=_deletedSampleThreshold;
@property(readonly, nonatomic) long long maximumSeriesSize; // @synthesize maximumSeriesSize=_maximumSeriesSize;
@property(readonly, nonatomic) long long minimumSeriesSize; // @synthesize minimumSeriesSize=_minimumSeriesSize;
@property(readonly, nonatomic) double minimumWorkoutDuration; // @synthesize minimumWorkoutDuration=_minimumWorkoutDuration;
@property(readonly, nonatomic) HDSQLitePredicate *predicate; // @synthesize predicate=_predicate;
@property(readonly, nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
- (id)initWithProfile:(id)arg1 predicate:(id)arg2 minimumWorkoutDuration:(double)arg3 minimumSeriesSize:(long long)arg4 maximumSeriesSize:(long long)arg5 deletedSampleThreshold:(long long)arg6 analyticsAccumulator:(id)arg7;

@end

