//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIGestureRecognizerTransformAnalyzerInfo : NSObject
{
    double _translationMagnitude;
    double _scale;
    double _rotation;
    struct CGPoint _translation;
    struct CGPoint _absoluteTranslation;
}

@property(nonatomic, setter=_setRotation:) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic, setter=_setScale:) double scale; // @synthesize scale=_scale;
@property(nonatomic, setter=_setAbsoluteTranslation:) struct CGPoint absoluteTranslation; // @synthesize absoluteTranslation=_absoluteTranslation;
@property(nonatomic, setter=_setTranslationMagnitude:) double translationMagnitude; // @synthesize translationMagnitude=_translationMagnitude;
@property(nonatomic, setter=_setTranslation:) struct CGPoint translation; // @synthesize translation=_translation;
- (id)description;
- (void)_reset;

@end

