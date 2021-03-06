//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MapsThemeView.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "_UICursorInteractionDelegate-Protocol.h"

@class NSArray, NSLayoutConstraint, NSMutableArray, NSString, RefineSearchSession, UIButton, UIScrollView, UIVisualEffectView;
@protocol FilterCategoriesViewDelegate;

__attribute__((visibility("hidden")))
@interface FilterCategoriesView : MapsThemeView <_UICursorInteractionDelegate, UIScrollViewDelegate>
{
    UIVisualEffectView *_blurView;
    UIScrollView *_scrollView;
    NSMutableArray *_subCategoriesViews;
    UIButton *_selected;
    RefineSearchSession *_refineSearchSession;
    struct CGPoint _lastScrollViewContentOffset;
    NSLayoutConstraint *_lastButtonTrailingConstraint;
    double _lastButtonTrailingPadding;
    unsigned long long _selectedIndex;
    NSArray *_subCategories;
    id <FilterCategoriesViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FilterCategoriesViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *subCategories; // @synthesize subCategories=_subCategories;
@property(readonly, nonatomic) unsigned long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void)sendCurrentRefineSession;
- (void)initCurrentListSession;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (void)setLastButtonTrailingPadding:(double)arg1;
- (void)resetOffset;
- (void)setBackgroundAndTitleColorToButton:(id)arg1;
- (void)loadSubCategories;
- (void)updateSelectedVisibility;
@property(readonly, nonatomic) NSArray *visibleSuggestions;
- (void)setSelectedIndex:(unsigned long long)arg1;
- (void)touchedAction:(id)arg1;
- (void)resetData;
- (void)setSubCategories:(id)arg1 selectedIndex:(unsigned long long)arg2;
- (void)setSubCategories:(id)arg1;
- (void)layoutSubviews;
- (void)safeAreaInsetsDidChange;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)updateTheme;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

