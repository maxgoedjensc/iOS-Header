//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VenueCardItem-Protocol.h"

@class GEOSearchCategory;
@protocol GEOVenueIdentifier;

@protocol VenueAutoCompleteCategoryCardItem <VenueCardItem>
@property(readonly, nonatomic) GEOSearchCategory *venueSearchCategory;
@property(readonly, nonatomic) id <GEOVenueIdentifier> venueIdentifier;
@end

