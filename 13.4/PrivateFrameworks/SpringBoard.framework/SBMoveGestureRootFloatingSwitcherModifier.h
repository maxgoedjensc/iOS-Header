//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/SBGestureRootSwitcherModifier.h>

@interface SBMoveGestureRootFloatingSwitcherModifier : SBGestureRootSwitcherModifier
{
    long long _currentFloatingConfiguration;
    long long _interfaceOrientation;
}

@property(nonatomic) long long interfaceOrientation; // @synthesize interfaceOrientation=_interfaceOrientation;
@property(nonatomic) long long currentFloatingConfiguration; // @synthesize currentFloatingConfiguration=_currentFloatingConfiguration;
- (_Bool)shouldPerformCrossfadeForReduceMotion;
- (id)transitionChildModifierForMainTransitionEvent:(id)arg1 activeGestureModifier:(id)arg2;
- (id)gestureChildModifierForGestureEvent:(id)arg1 activeTransitionModifier:(id)arg2;
- (long long)gestureType;
- (id)handleMainTransitionEvent:(id)arg1;
- (id)initWithInitialFloatingConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2;

@end

