//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UISplitViewController.h>

@class MISSING_TYPE, NSArray;

@interface _TtC9Reminders22TTRIRootViewController : UISplitViewController
{
    MISSING_TYPE *presenter;
    MISSING_TYPE *masterNavigationController;
    MISSING_TYPE *detailNavigationController;
    MISSING_TYPE *ttrMasterViewController;
    MISSING_TYPE *pendingNavigateToRootPromise;
    MISSING_TYPE *checkingCanPerformBlock;
}

- (void).cxx_destruct;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
@property(nonatomic, readonly) _Bool canBecomeFirstResponder;
@property(nonatomic, readonly) NSArray *keyCommands;
- (id)_targetCanPerformBlock:(CDUnknownBlockType)arg1;
- (id)initWithCoder:(id)arg1;

@end

