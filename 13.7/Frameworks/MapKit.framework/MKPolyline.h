//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKMultiPoint.h>

#import <MapKit/MKGeoJSONObject-Protocol.h>
#import <MapKit/MKOverlay-Protocol.h>

@class NSString;

@interface MKPolyline : MKMultiPoint <MKGeoJSONObject, MKOverlay>
{
}

+ (id)polylineWithCoordinates:(const struct CLLocationCoordinate2D *)arg1 count:(unsigned long long)arg2;
+ (id)polylineWithPoints:(const CDStruct_c3b9c2ee *)arg1 count:(unsigned long long)arg2;
@property(readonly, nonatomic) CDStruct_02837cd9 boundingMapRect;
- (_Bool)intersectsMapRect:(CDStruct_02837cd9)arg1;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (void)_calculateBounds;
- (id)_initWithGeoJSONPoints:(id)arg1 error:(id *)arg2;
- (id)_initWithGeoJSONObject:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;

@end

