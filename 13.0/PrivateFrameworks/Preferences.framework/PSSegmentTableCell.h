//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSControlTableCell.h>

@class NSArray, NSDictionary;

@interface PSSegmentTableCell : PSControlTableCell
{
    NSArray *_values;
    NSDictionary *_titleDict;
}

- (void).cxx_destruct;
- (void)setValue:(id)arg1;
- (id)controlValue;
- (void)layoutSubviews;
- (void)setValues:(id)arg1 titleDictionary:(id)arg2;
- (_Bool)canReload;
- (id)titleLabel;
- (id)newControl;
- (void)prepareForReuse;
- (void)refreshCellContentsWithSpecifier:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;

@end

