//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKRichComplicationCornerView.h>

@class NTKCurvedColoringLabel, NTKRichComplicationCurvedProgressView;

@interface NTKRichComplicationCornerBaseGaugeView : NTKRichComplicationCornerView
{
    NTKCurvedColoringLabel *_leftLabel;
    NTKRichComplicationCurvedProgressView *_progressView;
    NTKCurvedColoringLabel *_rightLabel;
}

- (void).cxx_destruct;
- (void)_updateLabelMaxWidths;
- (void)_layoutSubviewsWithoutAnimation;
- (double)_layoutLabel:(id)arg1 withLabelCenter:(struct CGPoint)arg2 labelWidthInRadius:(double)arg3 leftInRadius:(double)arg4;
- (double)_calculateProgressWidthWithLeftLabelWidth:(double)arg1 rightLabelWidth:(double)arg2;
- (void)_calculateLabel:(id)arg1 center:(struct CGPoint *)arg2 widthInRadius:(double *)arg3;
- (double)_layoutProgressViewWithBeginAngle:(double)arg1 widthInRadius:(double)arg2 bottomPadding:(double)arg3;
- (void)handleGaugeProvider:(id)arg1 leftTextProvider:(id)arg2 rightTextProvider:(id)arg3;
- (id)rightLabel;
- (id)leftLabel;
- (id)progressView;
- (void)setPosition:(long long)arg1;
- (void)layoutSubviews;
- (id)init;

@end

