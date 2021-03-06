//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKCalendarEditItem.h>

@class NSMutableArray;

@interface EKCalendarColorEditItem : EKCalendarEditItem
{
    NSMutableArray *_cells;
    unsigned long long _checkedRow;
}

- (void).cxx_destruct;
- (_Bool)saveStateToCalendar:(id)arg1;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)headerTitle;
- (unsigned long long)numberOfSubitems;
- (void)setCalendar:(id)arg1 store:(id)arg2;
@property(readonly, nonatomic) NSMutableArray *cells; // @synthesize cells=_cells;
- (id)_cellForSymbolicColor:(id)arg1;
- (id)_cellForColor:(id)arg1;
- (id)_cellWithText:(id)arg1;
- (_Bool)configureWithCalendar:(id)arg1;
- (void)reset;

@end

