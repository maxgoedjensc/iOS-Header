//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AVPlayer, AVPlayerViewController;

@protocol AVPlayerViewControllerContentTransitioning_NewsOnly
- (void)playerViewControllerDidCompleteContentTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillCompleteContentTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerDidCancelContentTransition:(AVPlayerViewController *)arg1;
- (void)playerViewControllerWillCancelContentTransition:(AVPlayerViewController *)arg1;
- (void)playerViewController:(AVPlayerViewController *)arg1 didUpdateContentTransitionProgress:(double)arg2;
- (void)playerViewControllerWillBeginContentTransition:(AVPlayerViewController *)arg1;
- (AVPlayer *)playerViewController:(AVPlayerViewController *)arg1 playerForContentTransitionType:(long long)arg2;
@end

