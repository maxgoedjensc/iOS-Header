//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface WLKRottenTomatoesRating : NSObject
{
    unsigned long long _freshness;
    NSNumber *_freshnessPercentage;
}

+ (unsigned long long)freshnessForString:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSNumber *freshnessPercentage; // @synthesize freshnessPercentage=_freshnessPercentage;
@property(readonly, nonatomic) unsigned long long freshness; // @synthesize freshness=_freshness;
- (id)init;
- (id)initWithFreshness:(unsigned long long)arg1 freshnessPercentage:(id)arg2;

@end

