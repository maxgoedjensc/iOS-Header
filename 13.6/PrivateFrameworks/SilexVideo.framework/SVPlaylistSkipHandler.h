//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoSkipHandling-Protocol.h>

@class NSString;
@protocol SVVideoQueueProviding, SVVideoViewControllerProviding, SVVideoVisiblePercentageManager, SVVisibilityReporting;

@interface SVPlaylistSkipHandler : NSObject <SVVideoSkipHandling>
{
    id <SVVideoQueueProviding> _queueProvider;
    id <SVVisibilityReporting> _visiblityReporter;
    id <SVVideoVisiblePercentageManager> _visiblePercentageManager;
    id <SVVideoViewControllerProviding> _videoViewControllerProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SVVideoViewControllerProviding> videoViewControllerProvider; // @synthesize videoViewControllerProvider=_videoViewControllerProvider;
@property(readonly, nonatomic) id <SVVideoVisiblePercentageManager> visiblePercentageManager; // @synthesize visiblePercentageManager=_visiblePercentageManager;
@property(readonly, nonatomic) __weak id <SVVisibilityReporting> visiblityReporter; // @synthesize visiblityReporter=_visiblityReporter;
@property(readonly, nonatomic) id <SVVideoQueueProviding> queueProvider; // @synthesize queueProvider=_queueProvider;
- (long long)contentTransitionTypeForVideo:(id)arg1;
- (void)skipToVideo:(id)arg1 animated:(_Bool)arg2;
- (id)initWithQueueProvider:(id)arg1 visibiltyReporter:(id)arg2 visiblePercentageManager:(id)arg3 videoViewControllerProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

