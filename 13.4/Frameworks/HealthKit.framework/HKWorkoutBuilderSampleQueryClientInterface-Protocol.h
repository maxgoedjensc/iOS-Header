//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQueryClientInterface-Protocol.h>

@class NSArray, NSUUID;

@protocol HKWorkoutBuilderSampleQueryClientInterface <HKQueryClientInterface>
- (void)client_deliverSamples:(NSArray *)arg1 hasFinishedHistoricalFetch:(_Bool)arg2 queryUUID:(NSUUID *)arg3;
@end

