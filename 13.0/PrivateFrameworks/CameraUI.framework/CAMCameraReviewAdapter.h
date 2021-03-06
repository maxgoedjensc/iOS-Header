//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMCameraCaptureDelegate-Protocol.h>

@class NSMutableArray, NSString, UIViewController;
@protocol CAMCameraReviewViewController;

@interface CAMCameraReviewAdapter : NSObject <CAMCameraCaptureDelegate>
{
    NSMutableArray *__pendingAssetsForReview;
    UIViewController<CAMCameraReviewViewController> *_cachedReviewViewController;
}

+ (id)reviewAssetForAVAsset:(id)arg1 audioMix:(id)arg2 properties:(id)arg3;
+ (id)reviewAssetForLivePhoto:(id)arg1 withProperties:(id)arg2;
+ (id)reviewAssetForPhoto:(id)arg1 withProperties:(id)arg2;
+ (Class)cameraReviewViewControllerClass;
@property(retain, nonatomic, getter=_cachedReviewViewController, setter=_setCachedReviewViewController:) UIViewController<CAMCameraReviewViewController> *cachedReviewViewController; // @synthesize cachedReviewViewController=_cachedReviewViewController;
@property(readonly, nonatomic) NSMutableArray *_pendingAssetsForReview; // @synthesize _pendingAssetsForReview=__pendingAssetsForReview;
- (void).cxx_destruct;
- (void)cameraViewController:(id)arg1 didCaptureAVAsset:(id)arg2 andAudioMix:(id)arg3 withProperties:(id)arg4 error:(id)arg5;
- (void)cameraViewController:(id)arg1 didCaptureLivePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
- (void)cameraViewController:(id)arg1 didCapturePhoto:(id)arg2 withProperties:(id)arg3 error:(id)arg4;
@property(readonly, nonatomic) UIViewController<CAMCameraReviewViewController> *cameraReviewViewController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

