//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class IKViewElement, UIButton, VUICollectionHeaderViewLayout, VUILabel, VUISeparatorView, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUICollectionHeaderView : UICollectionReusableView
{
    CDUnknownBlockType _selectionHandler;
    IKViewElement *_viewElement;
    IKViewElement *_buttonViewElement;
    IKViewElement *_imageViewElement;
    VUICollectionHeaderViewLayout *_layout;
    VUILabel *_titleTextView;
    VUILabel *_subtitleTextView;
    _TVImageView *_imageView;
    UIButton *_headerButton;
    VUISeparatorView *_separatorView;
    struct UIEdgeInsets _padding;
}

+ (id)configureCollectionHeaderViewWithTitle:(id)arg1 subtitle:(id)arg2 buttonString:(id)arg3 existingView:(id)arg4;
+ (id)configureCollectionHeaderViewWithElement:(id)arg1 existingView:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) VUISeparatorView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) UIButton *headerButton; // @synthesize headerButton=_headerButton;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) VUILabel *subtitleTextView; // @synthesize subtitleTextView=_subtitleTextView;
@property(retain, nonatomic) VUILabel *titleTextView; // @synthesize titleTextView=_titleTextView;
@property(retain, nonatomic) VUICollectionHeaderViewLayout *layout; // @synthesize layout=_layout;
@property(retain, nonatomic) IKViewElement *imageViewElement; // @synthesize imageViewElement=_imageViewElement;
@property(retain, nonatomic) IKViewElement *buttonViewElement; // @synthesize buttonViewElement=_buttonViewElement;
@property(retain, nonatomic) IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(copy, nonatomic) CDUnknownBlockType selectionHandler; // @synthesize selectionHandler=_selectionHandler;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
- (void)_selectButtonAction:(id)arg1;
- (id)_buttonWithString:(id)arg1 existingButton:(id)arg2;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

