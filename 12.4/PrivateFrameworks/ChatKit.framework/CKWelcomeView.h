//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIButton, UIImageView, UILabel, UIScrollView, UIVisualEffectView;
@protocol CKWelcomeViewDelegate;

@interface CKWelcomeView : UIView
{
    _Bool _isForMiC;
    _Bool _constraintsLoaded;
    id <CKWelcomeViewDelegate> _welcomeViewDelegate;
    UIView *_contentView;
    UIView *_imageContentView;
    UIScrollView *_scrollView;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UIVisualEffectView *_buttonView;
    NSLayoutConstraint *_buttonViewBottomAnchorLayoutConstraint;
    NSLayoutConstraint *_buttonViewLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_buttonViewTrailingAnchorLayoutConstraint;
    NSLayoutConstraint *_cancelButtonFirstBaselineAnchorLayoutConstraint;
    NSLayoutConstraint *_cancelButtonLastBaselineAnchorLayoutConstraint;
    NSLayoutConstraint *_cancelButtonHeightAnchorLayoutConstraint;
    NSLayoutConstraint *_cancelButtonLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_cancelButtonTrailingAnchorLayoutConstraint;
    NSLayoutConstraint *_confirmButtonBottomAnchorLayoutConstraint;
    NSLayoutConstraint *_confirmButtonHeightAnchorLayoutConstraint;
    NSLayoutConstraint *_confirmButtonLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_confirmButtonTopAnchorLayoutConstraint;
    NSLayoutConstraint *_confirmButtonTrailingAnchorLayoutConstraint;
    NSLayoutConstraint *_imageViewHeightAnchorLayoutConstraint;
    NSLayoutConstraint *_imageViewWidthAnchorLayoutConstraint;
    NSLayoutConstraint *_contentViewBottomAnchorLayoutConstraint;
    NSLayoutConstraint *_contentViewLeadingAnchorLayoutConstraint;
    NSLayoutConstraint *_contentViewTopAnchorLayoutConstraint;
    NSLayoutConstraint *_contentViewTrailingAnchorLayoutConstraint;
    NSLayoutConstraint *_titleLabelFirstBaselineAnchorLayoutConstraint;
    double _contentViewBottomAnchorLayoutConstraintConstant;
}

+ (double)welcomeLayoutConstraintFeatureInnerForMiC;
+ (double)welcomeLayoutConstraintFeatureLeadingTrailingForMiC;
+ (double)welcomeLayoutConstraintLeadingTrailingForMiC;
+ (_Bool)requiresConstraintBasedLayout;
@property(readonly, nonatomic) double contentViewBottomAnchorLayoutConstraintConstant; // @synthesize contentViewBottomAnchorLayoutConstraintConstant=_contentViewBottomAnchorLayoutConstraintConstant;
@property(nonatomic) NSLayoutConstraint *titleLabelFirstBaselineAnchorLayoutConstraint; // @synthesize titleLabelFirstBaselineAnchorLayoutConstraint=_titleLabelFirstBaselineAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *contentViewTrailingAnchorLayoutConstraint; // @synthesize contentViewTrailingAnchorLayoutConstraint=_contentViewTrailingAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *contentViewTopAnchorLayoutConstraint; // @synthesize contentViewTopAnchorLayoutConstraint=_contentViewTopAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *contentViewLeadingAnchorLayoutConstraint; // @synthesize contentViewLeadingAnchorLayoutConstraint=_contentViewLeadingAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *contentViewBottomAnchorLayoutConstraint; // @synthesize contentViewBottomAnchorLayoutConstraint=_contentViewBottomAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *imageViewWidthAnchorLayoutConstraint; // @synthesize imageViewWidthAnchorLayoutConstraint=_imageViewWidthAnchorLayoutConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageViewHeightAnchorLayoutConstraint; // @synthesize imageViewHeightAnchorLayoutConstraint=_imageViewHeightAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *confirmButtonTrailingAnchorLayoutConstraint; // @synthesize confirmButtonTrailingAnchorLayoutConstraint=_confirmButtonTrailingAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *confirmButtonTopAnchorLayoutConstraint; // @synthesize confirmButtonTopAnchorLayoutConstraint=_confirmButtonTopAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *confirmButtonLeadingAnchorLayoutConstraint; // @synthesize confirmButtonLeadingAnchorLayoutConstraint=_confirmButtonLeadingAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *confirmButtonHeightAnchorLayoutConstraint; // @synthesize confirmButtonHeightAnchorLayoutConstraint=_confirmButtonHeightAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *confirmButtonBottomAnchorLayoutConstraint; // @synthesize confirmButtonBottomAnchorLayoutConstraint=_confirmButtonBottomAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *cancelButtonTrailingAnchorLayoutConstraint; // @synthesize cancelButtonTrailingAnchorLayoutConstraint=_cancelButtonTrailingAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *cancelButtonLeadingAnchorLayoutConstraint; // @synthesize cancelButtonLeadingAnchorLayoutConstraint=_cancelButtonLeadingAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *cancelButtonHeightAnchorLayoutConstraint; // @synthesize cancelButtonHeightAnchorLayoutConstraint=_cancelButtonHeightAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *cancelButtonLastBaselineAnchorLayoutConstraint; // @synthesize cancelButtonLastBaselineAnchorLayoutConstraint=_cancelButtonLastBaselineAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *cancelButtonFirstBaselineAnchorLayoutConstraint; // @synthesize cancelButtonFirstBaselineAnchorLayoutConstraint=_cancelButtonFirstBaselineAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *buttonViewTrailingAnchorLayoutConstraint; // @synthesize buttonViewTrailingAnchorLayoutConstraint=_buttonViewTrailingAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *buttonViewLeadingAnchorLayoutConstraint; // @synthesize buttonViewLeadingAnchorLayoutConstraint=_buttonViewLeadingAnchorLayoutConstraint;
@property(nonatomic) NSLayoutConstraint *buttonViewBottomAnchorLayoutConstraint; // @synthesize buttonViewBottomAnchorLayoutConstraint=_buttonViewBottomAnchorLayoutConstraint;
@property(nonatomic, getter=isConstraintsLoaded) _Bool constraintsLoaded; // @synthesize constraintsLoaded=_constraintsLoaded;
@property(readonly, nonatomic) UIVisualEffectView *buttonView; // @synthesize buttonView=_buttonView;
@property(nonatomic) _Bool isForMiC; // @synthesize isForMiC=_isForMiC;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(readonly, nonatomic) UIView *imageContentView; // @synthesize imageContentView=_imageContentView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak id <CKWelcomeViewDelegate> welcomeViewDelegate; // @synthesize welcomeViewDelegate=_welcomeViewDelegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) double titleLabelFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double imageViewWidthAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double imageViewHeightAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double contentViewTrailingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double contentViewTopAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double contentViewLeadingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double confirmButtonTrailingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double confirmButtonTopAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double confirmButtonLeadingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double confirmButtonHeightAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double confirmButtonBottomAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double cancelButtonTrailingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double cancelButtonLeadingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double cancelButtonHeightAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double cancelButtonLastBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double cancelButtonFirstBaselineAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double buttonViewBottomAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double buttonViewTrailingAnchorLayoutConstraintConstant;
@property(readonly, nonatomic) double buttonViewLeadingAnchorLayoutConstraintConstant;
- (void)handleConfirmButtonAction:(id)arg1;
- (void)handleCancelButtonAction:(id)arg1;
@property(nonatomic, getter=isCancelButtonHidden) _Bool cancelButtonHidden;
- (void)layoutSubviews;
- (void)updateFonts;
- (void)updateConstraintConstants;
- (void)updateConstraints;
- (void)loadConstraints;
- (void)commonInit;
- (void)updateLayoutForMiC;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

