//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/NSObject-Protocol.h>

@protocol VKTrackableAnnotation;

@protocol VKAnnotationTrackingCameraController <NSObject>
@property(readonly, nonatomic) _Bool isTrackingHeading;
@property(readonly, nonatomic) _Bool isAnimatingToTrackAnnotation;
@property(readonly, nonatomic) id <VKTrackableAnnotation> trackingAnnotation;
@property(nonatomic) long long annotationTrackingHeadingAnimationDisplayRate;
@property(nonatomic) long long annotationTrackingZoomStyle;
- (void)stopTrackingAnnotation;
- (void)startTrackingAnnotation:(id <VKTrackableAnnotation>)arg1 trackHeading:(_Bool)arg2 animated:(_Bool)arg3;
@end

