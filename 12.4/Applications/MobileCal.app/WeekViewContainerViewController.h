//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MainViewControllerContainer.h"

@class CompactWidthWeekViewController, LargeWeekViewController;

@interface WeekViewContainerViewController : MainViewControllerContainer
{
    CompactWidthWeekViewController *_compactController;
    LargeWeekViewController *_regularController;
}

@property(retain, nonatomic) LargeWeekViewController *regularController; // @synthesize regularController=_regularController;
@property(retain, nonatomic) CompactWidthWeekViewController *compactController; // @synthesize compactController=_compactController;
- (void).cxx_destruct;
- (void)viewSwitcherSwitchedToViewWithDate:(id)arg1;
- (Class)childViewControllerClassForTraits:(id)arg1;
- (id)childViewControllerForRegularWidthRegularHeight;
- (id)childViewControllerForRegularWidthCompactHeight;
- (id)childViewControllerForCompactWidthCompactHeight;
- (id)childViewControllerForUnknownTraits;
- (id)pushedNextLevelMainViewControllerContainerAnimated:(_Bool)arg1;
- (_Bool)shouldRemoveSelfFromNavigationStackIfTraitCollectionIsUnsupported;
- (id)currentChildViewController;

@end

