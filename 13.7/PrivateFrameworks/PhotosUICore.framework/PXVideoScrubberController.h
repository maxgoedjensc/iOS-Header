//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

@class AVPlayerItem, PXScrubberSeekRequest;
@protocol PXVideoScrubberControllerDelegate, PXVideoScrubberControllerTarget;

@interface PXVideoScrubberController : PXObservable
{
    id _playerObserver;
    _Bool _needsUpdate;
    _Bool _avPlayerCurrentTimeNeedsUpdate;
    _Bool _avPlayerDurationNeedsUpdate;
    struct {
        _Bool respondsToDidUpdate;
        _Bool respondsToLengthForDuration;
        _Bool respondsToDesiredSeekTime;
    } _videoScrubberDelegateFlags;
    struct {
        _Bool respondsToWillBeginSeeking;
        _Bool respondsToDidEndSeeking;
    } _targetFlags;
    id <PXVideoScrubberControllerDelegate> _delegate;
    id <PXVideoScrubberControllerTarget> _target;
    double _estimatedDuration;
    double __playheadTime;
    PXScrubberSeekRequest *__pendingSeekRequest;
    PXScrubberSeekRequest *__activeSeekRequest;
    CDStruct_1b6d18a9 __avPlayerCurrentTime;
    CDStruct_1b6d18a9 __avPlayerDuration;
}

- (void).cxx_destruct;
@property(nonatomic, setter=_setAvPlayerDuration:) CDStruct_1b6d18a9 _avPlayerDuration; // @synthesize _avPlayerDuration=__avPlayerDuration;
@property(nonatomic, setter=_setAvPlayerCurrentTime:) CDStruct_1b6d18a9 _avPlayerCurrentTime; // @synthesize _avPlayerCurrentTime=__avPlayerCurrentTime;
@property(retain, nonatomic, setter=_setActiveSeekRequest:) PXScrubberSeekRequest *_activeSeekRequest; // @synthesize _activeSeekRequest=__activeSeekRequest;
@property(retain, nonatomic, setter=_setPendingSeekRequest:) PXScrubberSeekRequest *_pendingSeekRequest; // @synthesize _pendingSeekRequest=__pendingSeekRequest;
@property(nonatomic, setter=_setPlayheadTime:) double _playheadTime; // @synthesize _playheadTime=__playheadTime;
@property(readonly, nonatomic) double estimatedDuration; // @synthesize estimatedDuration=_estimatedDuration;
@property(readonly, nonatomic) id <PXVideoScrubberControllerTarget> target; // @synthesize target=_target;
@property(nonatomic) __weak id <PXVideoScrubberControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateAvPlayerDurationIfNeeded;
- (void)_invalidateAvPlayerDuration;
- (void)_updateAvPlayerCurrentTimeIfNeeded;
- (void)_invalidateAvPlayerCurrentTime;
- (void)_updateIfNeeded;
- (void)_invalidate;
- (double)_lengthForDuration:(double)arg1;
- (double)_progressForTime:(double)arg1;
- (double)_timeForProgress:(double)arg1;
- (double)_duration;
- (void)_playerStatusDidChange;
- (void)_playerItemDidChange;
- (void)_playerItemDurationDidChange;
- (void)_playerDidChange:(id)arg1;
- (void)_removeObservers;
- (void)_addObservers;
- (void)_handleTimeoutCallbackForSeekRequest:(id)arg1;
- (void)_seekRequest:(id)arg1 didFinish:(_Bool)arg2;
- (void)_updateSeeking;
- (void)_seekToTime:(double)arg1;
@property(readonly, nonatomic) float playRate;
@property(readonly, nonatomic) AVPlayerItem *currentPlayerItem;
- (void)endSeeking;
- (void)beginSeeking;
- (void)_setPlayheadProgress:(double)arg1 andSeekVideoPlayer:(_Bool)arg2;
@property(nonatomic) double playheadProgress;
@property(readonly, nonatomic) double length;
- (id)mutableChangeObject;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 estimatedDuration:(double)arg2;
- (id)init;

@end

