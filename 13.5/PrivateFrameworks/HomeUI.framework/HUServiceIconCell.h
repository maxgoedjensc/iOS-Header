//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class HUIconView;
@protocol HFIconDescriptor;

@interface HUServiceIconCell : UICollectionViewCell
{
    _Bool _hasConfiguredConstraints;
    id <HFIconDescriptor> _iconDescriptor;
    HUIconView *_iconView;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasConfiguredConstraints; // @synthesize hasConfiguredConstraints=_hasConfiguredConstraints;
@property(readonly, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) id <HFIconDescriptor> iconDescriptor; // @synthesize iconDescriptor=_iconDescriptor;
- (void)_updateBackgroundColor;
- (void)updateConstraints;
- (void)setSelected:(_Bool)arg1;
- (void)tintColorDidChange;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

