//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSAttributedString, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface WDMedicalRecordMultilineTextCell : UITableViewCell
{
    NSAttributedString *_text;
    UILabel *_label;
    UIView *_background;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *background; // @synthesize background=_background;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) NSAttributedString *text; // @synthesize text=_text;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

