//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import <CameraUI/CAMAccessibilityHUDImageProvider-Protocol.h>

@class NSNumberFormatter, NSString, UIImageView, UILabel;
@protocol CAMApertureButtonDelegate;

@interface CAMApertureButton : UIButton <CAMAccessibilityHUDImageProvider>
{
    _Bool _shouldShowApertureValue;
    _Bool __rightToLeftFormatting;
    id <CAMApertureButtonDelegate> _delegate;
    double _apertureValue;
    long long _expansionDirection;
    long long _layoutStyle;
    long long _orientation;
    UIImageView *__circleOutlineView;
    UILabel *__symbolLabel;
    UILabel *__valueLabel;
    UIImageView *__circleBackgroundView;
    NSNumberFormatter *__decimalFormatter;
    NSNumberFormatter *__wholeNumberFormatter;
    double __cachedSpaceWidth;
    double __cachedSymbolLabelWidth;
    double __cachedValueLabelWidth;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property(nonatomic, setter=_setCachedValueLabelWidth:) double _cachedValueLabelWidth; // @synthesize _cachedValueLabelWidth=__cachedValueLabelWidth;
@property(readonly, nonatomic) double _cachedSymbolLabelWidth; // @synthesize _cachedSymbolLabelWidth=__cachedSymbolLabelWidth;
@property(readonly, nonatomic) double _cachedSpaceWidth; // @synthesize _cachedSpaceWidth=__cachedSpaceWidth;
@property(readonly, nonatomic, getter=_isRightToLeftFormatting) _Bool _rightToLeftFormatting; // @synthesize _rightToLeftFormatting=__rightToLeftFormatting;
@property(readonly, nonatomic) NSNumberFormatter *_wholeNumberFormatter; // @synthesize _wholeNumberFormatter=__wholeNumberFormatter;
@property(readonly, nonatomic) NSNumberFormatter *_decimalFormatter; // @synthesize _decimalFormatter=__decimalFormatter;
@property(retain, nonatomic) UIImageView *_circleBackgroundView; // @synthesize _circleBackgroundView=__circleBackgroundView;
@property(readonly, nonatomic) UILabel *_valueLabel; // @synthesize _valueLabel=__valueLabel;
@property(readonly, nonatomic) UILabel *_symbolLabel; // @synthesize _symbolLabel=__symbolLabel;
@property(readonly, nonatomic) UIImageView *_circleOutlineView; // @synthesize _circleOutlineView=__circleOutlineView;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property(nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property(nonatomic) long long expansionDirection; // @synthesize expansionDirection=_expansionDirection;
@property(nonatomic) _Bool shouldShowApertureValue; // @synthesize shouldShowApertureValue=_shouldShowApertureValue;
@property(nonatomic) double apertureValue; // @synthesize apertureValue=_apertureValue;
@property(nonatomic) __weak id <CAMApertureButtonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)imageForAccessibilityHUD;
- (id)_circleImageWithColor:(id)arg1;
- (void)_updateSymbolLabelOrientationAnimated:(_Bool)arg1;
- (void)setOrientation:(long long)arg1 animated:(_Bool)arg2;
- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isActive) _Bool active;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGSize)intrinsicContentSize;
- (struct UIEdgeInsets)_expansionInsets;
- (void)_updateBackgroundView;
- (_Bool)_wantsBackgroundForLayoutStyle:(long long)arg1;
- (void)_updateColorsAnimated:(_Bool)arg1;
- (void)_updateValueLabel;
- (void)setShouldShowApertureValue:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithLayoutStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

