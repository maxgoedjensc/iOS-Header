//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@interface TVContainerCollectionViewCell : UICollectionViewCell
{
    _Bool _pressIsAnimating;
    _Bool _unpressOnEndAnimating;
    _Bool _allowsFocus;
    _Bool _selectSubviews;
}

@property(nonatomic) _Bool selectSubviews; // @synthesize selectSubviews=_selectSubviews;
@property(nonatomic) _Bool allowsFocus; // @synthesize allowsFocus=_allowsFocus;
- (void)_showPressState;
- (void)_clearPressState;
- (void)prepareForReuse;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFocused:(_Bool)arg1 animated:(_Bool)arg2 context:(id)arg3 coordinator:(id)arg4;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (_Bool)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;

@end

