//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore;

@interface FIUIWeeklyGoalModel : NSObject
{
    HKHealthStore *_healthStore;
}

- (void).cxx_destruct;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)saveNewWeeklyGoal:(id)arg1 forDate:(id)arg2;
- (void)fetchMostRecentWeeklyGoalWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHealthStore:(id)arg1;
- (id)init;

@end

