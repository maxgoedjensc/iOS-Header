//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthToolbox/WDAddDataManualEntryItem.h>

@class NSDate, NSDateFormatter, UIDatePicker, WDManualDataEntryTableViewCell;

__attribute__((visibility("hidden")))
@interface _WDDateBasedAddDataManualEntryItem : WDAddDataManualEntryItem
{
    UIDatePicker *_datePicker;
    WDManualDataEntryTableViewCell *_tableViewCell;
    NSDate *_maximumDate;
    NSDate *_chosenDate;
    _Bool _highlightWhenEditing;
    NSDateFormatter *_dateFormatter;
    long long _datePickerMode;
}

- (void).cxx_destruct;
@property(nonatomic) long long datePickerMode; // @synthesize datePickerMode=_datePickerMode;
@property(retain, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
- (void)setTitle:(id)arg1;
- (void)beginEditing;
- (void)setValue:(id)arg1;
- (void)_generateValue:(CDUnknownBlockType)arg1;
- (id)generateValue;
- (void)_saveDisambiguatedDate:(id)arg1;
- (void)_datePickerDidChange:(id)arg1;
- (id)tableViewCells;
- (id)initWithMaximumDate:(id)arg1 highlightWhenEditing:(_Bool)arg2;

@end

