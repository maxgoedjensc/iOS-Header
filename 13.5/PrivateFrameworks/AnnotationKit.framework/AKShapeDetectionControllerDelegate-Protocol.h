//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AnnotationKit/NSObject-Protocol.h>

@class AKAnnotation, AKShapeDetectionController, UIView;

@protocol AKShapeDetectionControllerDelegate <NSObject>
- (_Bool)shapeDetectionController:(AKShapeDetectionController *)arg1 shouldSelectCandidateAnnotation:(AKAnnotation *)arg2;
- (_Bool)isWaitingToCoalesceStrokes;
- (_Bool)isIgnoringAnnotationAndSelectionKVO:(AKShapeDetectionController *)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(AKShapeDetectionController *)arg1;
- (void)beginIgnoringAnnotationSelectionObservation:(AKShapeDetectionController *)arg1;
- (UIView *)overlayView:(AKShapeDetectionController *)arg1;

@optional
- (struct CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(AKShapeDetectionController *)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(AKShapeDetectionController *)arg1 isInk:(_Bool)arg2;
@end

