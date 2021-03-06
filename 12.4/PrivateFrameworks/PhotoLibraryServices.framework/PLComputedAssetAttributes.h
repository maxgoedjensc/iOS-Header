//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLManagedObject.h>

@class PLManagedAsset;

@interface PLComputedAssetAttributes : PLManagedObject
{
}

+ (id)entityName;
+ (id)fetchRequest;

// Remaining properties
@property(retain, nonatomic) PLManagedAsset *asset; // @dynamic asset;
@property(nonatomic) float failureScore; // @dynamic failureScore;
@property(nonatomic) float harmoniousColorScore; // @dynamic harmoniousColorScore;
@property(nonatomic) float immersivenessScore; // @dynamic immersivenessScore;
@property(nonatomic) float interestingSubjectScore; // @dynamic interestingSubjectScore;
@property(nonatomic) float intrusiveObjectPresenceScore; // @dynamic intrusiveObjectPresenceScore;
@property(nonatomic) float livelyColorScore; // @dynamic livelyColorScore;
@property(nonatomic) float lowLight; // @dynamic lowLight;
@property(nonatomic) float noiseScore; // @dynamic noiseScore;
@property(nonatomic) float pleasantCameraTiltScore; // @dynamic pleasantCameraTiltScore;
@property(nonatomic) float pleasantCompositionScore; // @dynamic pleasantCompositionScore;
@property(nonatomic) float pleasantLightingScore; // @dynamic pleasantLightingScore;
@property(nonatomic) float pleasantPatternScore; // @dynamic pleasantPatternScore;
@property(nonatomic) float pleasantPerspectiveScore; // @dynamic pleasantPerspectiveScore;
@property(nonatomic) float pleasantPostProcessingScore; // @dynamic pleasantPostProcessingScore;
@property(nonatomic) float pleasantReflectionsScore; // @dynamic pleasantReflectionsScore;
@property(nonatomic) float pleasantSymmetryScore; // @dynamic pleasantSymmetryScore;
@property(nonatomic) float sharplyFocusedSubjectScore; // @dynamic sharplyFocusedSubjectScore;
@property(nonatomic) float tastefullyBlurredScore; // @dynamic tastefullyBlurredScore;
@property(nonatomic) float wellChosenSubjectScore; // @dynamic wellChosenSubjectScore;
@property(nonatomic) float wellFramedSubjectScore; // @dynamic wellFramedSubjectScore;
@property(nonatomic) float wellTimedShotScore; // @dynamic wellTimedShotScore;

@end

