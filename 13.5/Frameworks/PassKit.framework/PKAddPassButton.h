//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAFilter, CAShapeLayer, PKShapeView, UIImageView, UILabel;

@interface PKAddPassButton : UIButton
{
    CAShapeLayer *_layer;
    struct CGSize _boundsSize;
    PKShapeView *_maskView;
    UIImageView *_iconView;
    UILabel *_singleLineLabel;
    UILabel *_multiLineLabel;
    CAFilter *_highlightFilter;
    _Bool _highlighted;
    struct CGSize _iconSize;
    struct CGSize _singleLineSize;
    struct UIEdgeInsets _singleLineAlignmentInset;
    struct CGSize _multiLineSize;
    struct UIEdgeInsets _multiLineAlignmentInset;
    _Bool _useLayoutMargins;
    long long _addPassButtonStyle;
}

+ (id)addPassButtonWithStyle:(long long)arg1;
+ (Class)layerClass;
- (void).cxx_destruct;
@property(nonatomic) long long addPassButtonStyle; // @synthesize addPassButtonStyle=_addPassButtonStyle;
- (void)_applyStyle;
- (void)setHighlighted:(_Bool)arg1;
- (void)_createHighlightFilterIfNecessary;
- (_Bool)_singleLineFitsSize:(struct CGSize)arg1;
- (void)_adjustVisibleLabelWithBounds:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGSize)_intrinsicMultiLineSize;
- (struct CGSize)_intrinsicSingleLineSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)_sharedInit;
- (id)initWithAddPassButtonStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

