//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TransitVehicleAnnotation-Protocol.h"

@class NSString, UIColor;
@protocol GEOTransitLine;

__attribute__((visibility("hidden")))
@interface TransitVehicleLineAnnotation : NSObject <TransitVehicleAnnotation>
{
    id <GEOTransitLine> _transitLine;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <GEOTransitLine> transitLine; // @synthesize transitLine=_transitLine;
- (_Bool)allowsTimestampLabel;
- (_Bool)allowsAccuracyRing;
- (id)imageWithScale:(double)arg1 nightMode:(_Bool)arg2;
@property(readonly, nonatomic) UIColor *color;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithTransitLine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

