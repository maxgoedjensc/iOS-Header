//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraKit/CMKFocusView.h>

@interface CMKFaceTrackingView : CMKFocusView
{
    _Bool _isInFrame;
}

@property(nonatomic) _Bool isInFrame; // @synthesize isInFrame=_isInFrame;
- (void)animateToFrame:(struct CGRect)arg1;
- (void)fadeOut;
- (void)fadeIn;
- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (double)fadeOutDuration;
- (void)_loadImagesWithColor:(id)arg1 imageSize:(struct CGSize *)arg2;
- (id)init;

@end

