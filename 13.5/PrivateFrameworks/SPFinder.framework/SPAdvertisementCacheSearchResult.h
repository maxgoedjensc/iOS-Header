//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPFinder/NSSecureCoding-Protocol.h>

@class NSArray, NSError, SPSearchResultMarker;

@interface SPAdvertisementCacheSearchResult : NSObject <NSSecureCoding>
{
    NSError *_error;
    NSArray *_beaconAdvertisements;
    SPSearchResultMarker *_searchResultMarker;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) SPSearchResultMarker *searchResultMarker; // @synthesize searchResultMarker=_searchResultMarker;
@property(retain, nonatomic) NSArray *beaconAdvertisements; // @synthesize beaconAdvertisements=_beaconAdvertisements;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBeaconAdvertisements:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3;

@end

