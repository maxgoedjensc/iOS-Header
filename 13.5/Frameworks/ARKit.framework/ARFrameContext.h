//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ARKit/ARResultDataContext-Protocol.h>

@class ARDeviceOrientationData, ARImageData, ARLocationData, ARWorldMap, NSMutableArray, NSMutableSet, NSString;

@interface ARFrameContext : NSObject <ARResultDataContext>
{
    NSMutableArray *_anchorsToAdd;
    NSMutableArray *_anchorsToRemove;
    _Bool _didRelocalize;
    _Bool _sessionTransformUpdated;
    _Bool _sessionTransformReset;
    _Bool _sessionTransformShouldResumeCameraHeading;
    _Bool _sessionTransformShouldResumeCameraPosition;
    _Bool _shouldRemoveExistingAnchors;
    ARImageData *_imageData;
    ARDeviceOrientationData *_orientationData;
    ARLocationData *_locationData;
    long long _worldAlignment;
    ARWorldMap *_worldMap;
    unsigned long long _frameDebugOptions;
    NSMutableSet *_collaborationData;
    CDStruct_14d5dc5e _relocalizationDeltaTransform;
    CDStruct_14d5dc5e _sessionTransform;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *collaborationData; // @synthesize collaborationData=_collaborationData;
@property(readonly, nonatomic) _Bool shouldRemoveExistingAnchors; // @synthesize shouldRemoveExistingAnchors=_shouldRemoveExistingAnchors;
@property(readonly, nonatomic) _Bool sessionTransformShouldResumeCameraPosition; // @synthesize sessionTransformShouldResumeCameraPosition=_sessionTransformShouldResumeCameraPosition;
@property(readonly, nonatomic) _Bool sessionTransformShouldResumeCameraHeading; // @synthesize sessionTransformShouldResumeCameraHeading=_sessionTransformShouldResumeCameraHeading;
@property(readonly, nonatomic) _Bool sessionTransformReset; // @synthesize sessionTransformReset=_sessionTransformReset;
@property(readonly, nonatomic) _Bool sessionTransformUpdated; // @synthesize sessionTransformUpdated=_sessionTransformUpdated;
@property(nonatomic) CDStruct_14d5dc5e sessionTransform; // @synthesize sessionTransform=_sessionTransform;
@property(nonatomic) CDStruct_14d5dc5e relocalizationDeltaTransform; // @synthesize relocalizationDeltaTransform=_relocalizationDeltaTransform;
@property(nonatomic) _Bool didRelocalize; // @synthesize didRelocalize=_didRelocalize;
@property(nonatomic) unsigned long long frameDebugOptions; // @synthesize frameDebugOptions=_frameDebugOptions;
@property(retain, nonatomic) ARWorldMap *worldMap; // @synthesize worldMap=_worldMap;
@property(nonatomic) long long worldAlignment; // @synthesize worldAlignment=_worldAlignment;
@property(retain, nonatomic) ARLocationData *locationData; // @synthesize locationData=_locationData;
@property(retain, nonatomic) ARDeviceOrientationData *orientationData; // @synthesize orientationData=_orientationData;
@property(retain, nonatomic) ARImageData *imageData; // @synthesize imageData=_imageData;
@property(readonly, copy) NSString *description;
- (id)resultDataOfClass:(Class)arg1;
- (long long)cameraPosition;
- (void)removeAnchor:(id)arg1;
- (void)clearAddedAnchors;
- (void)addAnchor:(id)arg1;
- (id)anchorsToRemove;
- (id)anchorsToAdd;
- (void)resumeSessionCameraPositionAndHeading;
- (void)resumeSessionCameraPosition;
- (void)resetSessionTransform;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

