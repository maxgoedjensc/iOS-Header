//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "SearchResult.h"

@class ParkedCar;

__attribute__((visibility("hidden")))
@interface ParkedCarSearchResult : SearchResult
{
    ParkedCar *_parkedCar;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ParkedCar *parkedCar; // @synthesize parkedCar=_parkedCar;
- (id)title;
- (id)personalizedItemKey;
- (id)initWithParkedCar:(id)arg1;

@end

