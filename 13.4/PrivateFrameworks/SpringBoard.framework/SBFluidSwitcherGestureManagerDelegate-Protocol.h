//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSString, SBFluidSwitcherGesture, SBFluidSwitcherGestureManager;

@protocol SBFluidSwitcherGestureManagerDelegate <NSObject>
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 willEndDraggingWindowWithSceneIdentifier:(NSString *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didBeginDraggingWindowWithSceneIdentifier:(NSString *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didEndGesture:(SBFluidSwitcherGesture *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didUpdateGesture:(SBFluidSwitcherGesture *)arg2;
- (void)fluidSwitcherGestureManager:(SBFluidSwitcherGestureManager *)arg1 didBeginGesture:(SBFluidSwitcherGesture *)arg2;
@end

