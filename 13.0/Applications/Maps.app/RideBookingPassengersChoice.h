//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class INPriceRange, INRidePartySizeOption, NSString;

__attribute__((visibility("hidden")))
@interface RideBookingPassengersChoice : NSObject
{
    unsigned long long _numberOfPassengers;
}

@property(nonatomic) unsigned long long numberOfPassengers; // @synthesize numberOfPassengers=_numberOfPassengers;
- (id)description;
- (id)initWithNumberOfPassengers:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) NSString *formattedPriceRange;
@property(copy, nonatomic) INRidePartySizeOption *intentsPartySizeOption;
@property(copy, nonatomic) INPriceRange *intentsPriceRange;

@end

