//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIStatusBar;

@interface SBZoomView : UIView
{
    UIView *_contentView;
    UIStatusBar *_statusBar;
}

+ (id)_chromeStatusBarImageForInterfaceOrientation:(long long)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) __weak UIStatusBar *statusBar; // @synthesize statusBar=_statusBar;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)dealloc;
- (id)_initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

