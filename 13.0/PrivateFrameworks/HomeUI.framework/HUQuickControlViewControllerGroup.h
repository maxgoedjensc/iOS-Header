//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HUQuickControlViewController, NSSet;

@interface HUQuickControlViewControllerGroup : NSObject
{
    HUQuickControlViewController *_primaryViewController;
    NSSet *_alternateViewControllers;
}

@property(readonly, nonatomic) NSSet *alternateViewControllers; // @synthesize alternateViewControllers=_alternateViewControllers;
@property(readonly, nonatomic) HUQuickControlViewController *primaryViewController; // @synthesize primaryViewController=_primaryViewController;
- (void).cxx_destruct;
- (id)initWithPrimaryViewController:(id)arg1 alternateViewControllers:(id)arg2;

@end

