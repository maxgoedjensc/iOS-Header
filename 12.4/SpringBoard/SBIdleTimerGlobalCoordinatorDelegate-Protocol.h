//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBIdleTimerGlobalCoordinator;
@protocol SBIdleTimer;

@protocol SBIdleTimerGlobalCoordinatorDelegate <NSObject>
- (void)idleTimerGlobalCoordinator:(SBIdleTimerGlobalCoordinator *)arg1 didActivateIdleTimer:(id <SBIdleTimer>)arg2;
@end

