//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKCalendarWeekView.h>

@class CALayer, NSArray;

@interface HKMonthWeekView : HKCalendarWeekView
{
    _Bool _displaysMonthTitle;
    _Bool _displaysTopBorderLine;
    _Bool _isRTL;
    CALayer *_topBorderLine;
    _Bool _accessoryContentsFetched;
    NSArray *_accessoryViews;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool accessoryContentsFetched; // @synthesize accessoryContentsFetched=_accessoryContentsFetched;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGRect)_frameForTopBorderLine;
- (void)layoutSubviews;
- (void)setMonthWeekStart:(id)arg1;
- (void)setTitleHighlighted:(_Bool)arg1;
- (id)cellMatchingDate:(id)arg1;
- (void)selectedCalendarDay:(id)arg1;
- (_Bool)containsMonthTitle;
- (_Bool)supportsRTL;
- (Class)monthTitleClass;
- (Class)cellClass;
- (void)clearAccessoryViews;
@property(readonly, nonatomic) NSArray *accessoryViews; // @synthesize accessoryViews=_accessoryViews;
- (id)initWithDateCache:(id)arg1 displaysMonthTitle:(_Bool)arg2 displaysTopBorderLine:(_Bool)arg3;

@end

