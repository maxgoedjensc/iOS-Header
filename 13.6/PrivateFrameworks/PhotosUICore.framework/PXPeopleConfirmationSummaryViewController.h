//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UILabel;
@protocol PXPeopleSummaryDelegate;

@interface PXPeopleConfirmationSummaryViewController : UIViewController
{
    id <PXPeopleSummaryDelegate> _delegate;
    NSLayoutConstraint *_labelSpacingConstraint;
    UILabel *_summaryLabel;
}

- (void).cxx_destruct;
@property(retain) UILabel *summaryLabel; // @synthesize summaryLabel=_summaryLabel;
@property(retain) NSLayoutConstraint *labelSpacingConstraint; // @synthesize labelSpacingConstraint=_labelSpacingConstraint;
@property __weak id <PXPeopleSummaryDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateDynamicTypeSpacing;
- (void)traitCollectionDidChange:(id)arg1;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

