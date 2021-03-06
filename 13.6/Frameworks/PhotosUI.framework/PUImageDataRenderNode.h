//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRunNode.h>

#import <PhotosUI/PUImageDataRenderNode-Protocol.h>

@class NSArray, NSData, NSString, PICompositionController;
@protocol PUImageInfoNode, PUVideoURLNode, PXRunNodeDelegate;

__attribute__((visibility("hidden")))
@interface PUImageDataRenderNode : PXRunNode <PUImageDataRenderNode>
{
    NSData *_imageData;
    id <PUImageInfoNode> _imageDataNode;
    id <PUVideoURLNode> _videoURLNode;
    PICompositionController *_compositionController;
    double _jpegCompression;
    NSString *_livePhotoPairingIdentifier;
    struct CGSize _baseImageSize;
    struct CGSize _renderedImageSize;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *livePhotoPairingIdentifier; // @synthesize livePhotoPairingIdentifier=_livePhotoPairingIdentifier;
@property(readonly, nonatomic) double jpegCompression; // @synthesize jpegCompression=_jpegCompression;
@property(readonly, copy, nonatomic) PICompositionController *compositionController; // @synthesize compositionController=_compositionController;
@property(readonly, nonatomic) id <PUVideoURLNode> videoURLNode; // @synthesize videoURLNode=_videoURLNode;
@property(readonly, nonatomic) id <PUImageInfoNode> imageDataNode; // @synthesize imageDataNode=_imageDataNode;
@property(readonly, nonatomic) struct CGSize renderedImageSize; // @synthesize renderedImageSize=_renderedImageSize;
@property(readonly, nonatomic) struct CGSize baseImageSize; // @synthesize baseImageSize=_baseImageSize;
@property(readonly, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (void)_handleRenderCompletedWithJpegData:(id)arg1 baseSize:(struct CGSize)arg2 editedSize:(struct CGSize)arg3;
- (void)run;
- (id)_editSource;
- (_Bool)_isInputValid;
- (id)initWithImageInfoNode:(id)arg1 videoURLNode:(id)arg2 compositionController:(id)arg3 livePhotoPairingIdentifier:(id)arg4 jpegCompression:(double)arg5;

// Remaining properties
@property(readonly, getter=isCanceled) _Bool canceled;
@property(readonly, getter=isComplete) _Bool complete;
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <PXRunNodeDelegate> delegate;
@property(readonly, copy, nonatomic) NSArray *dependencies;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, getter=isRunning) _Bool running;
@property(readonly) unsigned long long state;
@property(readonly) Class superclass;
@property(readonly, getter=isWaiting) _Bool waiting;

@end

