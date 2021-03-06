//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/NSObject-Protocol.h>

@class FCPersonalizationTreatment, NSArray, NSDictionary;
@protocol FCPersonalizationAggregate;

@protocol FCReadonlyPersonalizationAggregateStore <NSObject>
- (void)processTodayPersonalizationUpdates:(NSArray *)arg1 withConfigurableValues:(FCPersonalizationTreatment *)arg2;
- (NSDictionary *)aggregatesForFeatures:(NSArray *)arg1;
- (id <FCPersonalizationAggregate>)baselineAggregateWithConfigurableValues:(FCPersonalizationTreatment *)arg1;
@end

