//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISlider.h>

@class NSTimer, UIView;
@protocol CAMZoomSliderDelegate;

@interface CAMZoomSlider : UISlider
{
    _Bool _minimumAutozooming;
    _Bool _maximumAutozooming;
    _Bool _visibilityTimerSuspended;
    _Bool __autozooming;
    long long _layoutStyle;
    id <CAMZoomSliderDelegate> _delegate;
    long long _orientation;
    NSTimer *__visibilityTimer;
    UIView *__minTrackMaskView;
    UIView *__maxTrackMaskView;
    struct UIEdgeInsets _alignmentRectInsets;
}

+ (_Bool)shouldFadeOutZoomSliderForLayoutStyle:(long long)arg1;
@property(readonly, nonatomic) UIView *_maxTrackMaskView; // @synthesize _maxTrackMaskView=__maxTrackMaskView;
@property(readonly, nonatomic) UIView *_minTrackMaskView; // @synthesize _minTrackMaskView=__minTrackMaskView;
@property(nonatomic, getter=_isAutozooming, setter=_setAutozooming:) _Bool _autozooming; // @synthesize _autozooming=__autozooming;
@property(readonly, nonatomic) NSTimer *_visibilityTimer; // @synthesize _visibilityTimer=__visibilityTimer;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isVisibilityTimerSuspended) _Bool visibilityTimerSuspended; // @synthesize visibilityTimerSuspended=_visibilityTimerSuspended;
@property(nonatomic, getter=isMaximumAutozooming, setter=_setMaximumAutozooming:) _Bool maximumAutozooming; // @synthesize maximumAutozooming=_maximumAutozooming;
@property(nonatomic, getter=isMinimumAutozooming, setter=_setMinimumAutozooming:) _Bool minimumAutozooming; // @synthesize minimumAutozooming=_minimumAutozooming;
@property(nonatomic) struct UIEdgeInsets alignmentRectInsets; // @synthesize alignmentRectInsets=_alignmentRectInsets;
@property(nonatomic) __weak id <CAMZoomSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
- (void).cxx_destruct;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)_updateForLayoutStyle;
- (void)_handleTouchUpInside:(id)arg1;
- (void)_hideZoomSlider:(id)arg1;
- (void)_makeInvisibleAnimationDuration:(double)arg1;
- (void)makeInvisibleAnimated:(_Bool)arg1;
- (void)makeVisibleAnimated:(_Bool)arg1;
- (void)_stopVisibilityTimer;
- (void)_startVisibilityTimer;
- (_Bool)shouldHideForExpiredVisibilityTimer;
- (void)_endAutozooming;
- (void)_updateAutozooming;
- (void)_beginAutozooming;
@property(readonly, nonatomic, getter=isAutozooming) _Bool autozooming;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (long long)locationOfTouch:(id)arg1;
- (double)_thumbCenterMaximumXForTrackRect:(struct CGRect)arg1;
- (double)_thumbCenterMinimumXForTrackRect:(struct CGRect)arg1;
- (float)_valueForThumbCenterX:(double)arg1 trackRect:(struct CGRect)arg2;
- (double)_thumbCenterXForValue:(float)arg1 trackRect:(struct CGRect)arg2;
- (struct CGRect)thumbRectForBounds:(struct CGRect)arg1 trackRect:(struct CGRect)arg2 value:(float)arg3;
- (struct CGRect)trackRectForBounds:(struct CGRect)arg1;
- (struct CGRect)maximumValueImageRectForBounds:(struct CGRect)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithLayoutStyle:(long long)arg1;
- (void)_commonCAMZoomSliderInitializationWithLayoutStyle:(long long)arg1;

@end

