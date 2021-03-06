//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface _SSSPDFPageMiniMapVisibleRegionView : UIView
{
    UIView *_highlightView;
    UIView *_shadowView;
    CAShapeLayer *_shadowMask;
    struct CGRect _visibleRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CAShapeLayer *shadowMask; // @synthesize shadowMask=_shadowMask;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
- (void)updateHiddenRegionViewWithVisibleRect:(struct CGRect)arg1;
- (void)updateVisibleRegionViewWithVisibleRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

