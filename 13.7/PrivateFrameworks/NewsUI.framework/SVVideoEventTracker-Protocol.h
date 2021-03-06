//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsUI/NSObject-Protocol.h>

@class NSError;

@protocol SVVideoEventTracker <NSObject>

@optional
- (void)tappedToToggleControls;
- (void)exitedFullscreen;
- (void)enteredFullscreen;
- (void)tappedDiscoverMore;
- (void)tappedAdvance;
- (void)tappedNowPlaying;
- (void)tappedCallToAction;
- (void)muteStateChanged:(_Bool)arg1;
- (void)impressionQuartilePassed:(unsigned long long)arg1;
- (void)impressionThresholdPassed:(double)arg1;
- (void)playbackFailedWithError:(NSError *)arg1;
- (void)playbackFinished;
- (void)playbackResumed;
- (void)playbackPaused;
- (void)playbackStarted;
- (void)playbackInitiated;
- (void)didDisappear;
- (void)didAppear;
@end

