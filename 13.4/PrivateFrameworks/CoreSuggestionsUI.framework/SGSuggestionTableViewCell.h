//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, SGSuggestionAction, SGSuggestionTableViewController, UIButton, UIImageView, UILabel;
@protocol NSObject, SGSuggestion;

@interface SGSuggestionTableViewCell : UITableViewCell
{
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_dismissButton;
    UIButton *_primaryButton;
    SGSuggestionAction *_primaryAction;
    SGSuggestionAction *_dismissAction;
    NSLayoutConstraint *_topMarginConstraint;
    NSLayoutConstraint *_interLabelBaselineDeltaConstraint;
    NSLayoutConstraint *_interTitleAndButtonBaselineConstraint;
    NSLayoutConstraint *_interSubtitleAndButtonBaselineConstraint;
    NSLayoutConstraint *_bottomMarginConstraint;
    id <NSObject> _observerToken;
    long long _currentStyle;
    id <SGSuggestion> _suggestion;
    SGSuggestionTableViewController *_controller;
}

+ (double)bottomMarginConstant;
+ (double)interLabelAndButtonBaselineDeltaConstant;
+ (double)interLabelBaselineDeltaConstant;
+ (double)topMarginConstant;
+ (id)buttonTitleFont;
+ (id)descriptionFont;
+ (id)titleFont;
+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
@property(nonatomic) __weak SGSuggestionTableViewController *controller; // @synthesize controller=_controller;
@property(retain, nonatomic) id <SGSuggestion> suggestion; // @synthesize suggestion=_suggestion;
- (void)_updateCurrentAppearance;
- (id)_backgroundColor;
- (id)_titleColor;
- (id)_subtitleColor;
- (void)_primaryButtonTapped:(id)arg1;
- (void)_dismissButtonTapped:(id)arg1;
- (id)_setButton:(id)arg1 action:(id)arg2;
- (void)_setLabelAndButtonFonts;
- (void)_activateConstraint:(id)arg1;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)init;
- (void)dealloc;

@end

