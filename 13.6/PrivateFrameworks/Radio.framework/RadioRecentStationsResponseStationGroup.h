//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface RadioRecentStationsResponseStationGroup : NSObject
{
    NSDictionary *_responseDictionary;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *stationDictionaries;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithResponseDictionary:(id)arg1;

@end

