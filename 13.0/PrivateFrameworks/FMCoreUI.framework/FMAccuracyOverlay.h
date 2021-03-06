//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKit/MKCircle.h>

@protocol MKAnnotation;

@interface FMAccuracyOverlay : MKCircle
{
    id <MKAnnotation> _parentAnnotation;
    double _horizontalAccuracy;
}

@property(nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(nonatomic) __weak id <MKAnnotation> parentAnnotation; // @synthesize parentAnnotation=_parentAnnotation;
- (void).cxx_destruct;
- (id)description;

@end

