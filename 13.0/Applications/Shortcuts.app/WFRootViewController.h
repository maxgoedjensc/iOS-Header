//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITabBarControllerDelegate-Protocol.h"
#import "WFWelcomeViewControllerDelegate-Protocol.h"

@class NSString, UITabBarController, UIView, WFAutomationListViewController, WFHomeViewController, WFTutorialProgressStore, _TtC9Shortcuts29GalleryFeaturedViewController;

@interface WFRootViewController : UIViewController <UITabBarControllerDelegate, WFWelcomeViewControllerDelegate>
{
    WFHomeViewController *_workflowsViewController;
    _TtC9Shortcuts29GalleryFeaturedViewController *_galleryViewController;
    WFAutomationListViewController *_automationViewController;
    WFTutorialProgressStore *_tutorialProgressStore;
    UITabBarController *_tabBarController;
    UIView *_fakeLaunchScreenView;
}

@property(nonatomic) __weak UIView *fakeLaunchScreenView; // @synthesize fakeLaunchScreenView=_fakeLaunchScreenView;
@property(nonatomic) __weak UITabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(readonly, nonatomic) WFTutorialProgressStore *tutorialProgressStore; // @synthesize tutorialProgressStore=_tutorialProgressStore;
@property(readonly, nonatomic) WFAutomationListViewController *automationViewController; // @synthesize automationViewController=_automationViewController;
@property(readonly, nonatomic) _TtC9Shortcuts29GalleryFeaturedViewController *galleryViewController; // @synthesize galleryViewController=_galleryViewController;
@property(readonly, nonatomic) WFHomeViewController *workflowsViewController; // @synthesize workflowsViewController=_workflowsViewController;
- (void).cxx_destruct;
- (_Bool)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (void)welcomeViewControllerDidFinish:(id)arg1;
- (void)switchToView:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)switchToView:(unsigned long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithTutorialProgressStore:(id)arg1 database:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

