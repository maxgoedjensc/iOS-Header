//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "FontControllable-Protocol.h"

@class NSString, UIFont;

@interface UILabel (UIKitExtras) <FontControllable>
+ (double)_maps_maximumHeightWithFont:(id)arg1 numberOfLines:(long long)arg2 displayScale:(double)arg3;
+ (id)newStandardTextLabelWithFont:(id)arg1;
+ (double)labelSpacingDerivedFromHIBaselineOffset:(double)arg1 fromFont:(id)arg2;
+ (double)labelSpacingDerivedFromHIBaselineOffset:(double)arg1 fromBottomLineBaselineOfFont:(id)arg2 toTopLineBaselineOfFont:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) UIFont *font;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

