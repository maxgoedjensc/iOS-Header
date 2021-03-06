//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVPlayer;
@protocol TSKAVPlayerControllerDelegate;

@interface TSKAVPlayerController : NSObject
{
    AVPlayer *mPlayer;
    id <TSKAVPlayerControllerDelegate> mDelegate;
    long long mRepeatMode;
    float mVolume;
    float mRateBeforeScrubbing;
    unsigned long long mScrubbingCount;
    _Bool mCanPlay;
    _Bool mPlaying;
    _Bool mFastReversing;
    _Bool mFastForwarding;
    _Bool mIsObservingStatus;
    unsigned long long mAdditionalReferences;
    double _absoluteCurrentTime;
}

+ (id)keyPathsForValuesAffectingEndTime;
+ (_Bool)automaticallyNotifiesObserversOfEndTime;
+ (id)keyPathsForValuesAffectingStartTime;
+ (_Bool)automaticallyNotifiesObserversOfStartTime;
+ (id)keyPathsForValuesAffectingAbsoluteDuration;
+ (id)keyPathsForValuesAffectingDuration;
@property(nonatomic) double absoluteCurrentTime; // @synthesize absoluteCurrentTime=_absoluteCurrentTime;
@property(nonatomic, getter=isFastForwarding) _Bool fastForwarding; // @synthesize fastForwarding=mFastForwarding;
@property(nonatomic, getter=isFastReversing) _Bool fastReversing; // @synthesize fastReversing=mFastReversing;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=mPlaying;
@property(readonly, nonatomic) _Bool canPlay; // @synthesize canPlay=mCanPlay;
@property(nonatomic) float volume; // @synthesize volume=mVolume;
@property(nonatomic) long long repeatMode; // @synthesize repeatMode=mRepeatMode;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=mPlayer;
@property(readonly, nonatomic) id <TSKAVPlayerControllerDelegate> delegate; // @synthesize delegate=mDelegate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_applicationDidResignActive;
- (void)p_playbackDidFailWithError:(id)arg1;
- (void)p_playerItemDidPlayToEndTime:(id)arg1;
- (void)playerItemDidPlayToEndTimeAtRate:(float)arg1;
- (void)p_closedCaptioningStatusDidChange:(id)arg1;
- (void)p_updateClosedCaptionDisplayEnabled;
- (void)p_stopObservingClosedCaptionDisplayEnabled;
- (void)p_startObservingClosedCaptionDisplayEnabled;
- (_Bool)p_canFastForward;
- (_Bool)p_canFastReverse;
- (void)seekToEnd;
- (void)seekToBeginning;
- (void)seekBackwardByOneFrame;
- (void)seekForwardByOneFrame;
- (void)endScrubbing;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)scrubToTime:(double)arg1 withTolerance:(double)arg2;
- (void)beginScrubbing;
@property(readonly, nonatomic, getter=isScrubbing) _Bool scrubbing;
@property(readonly, nonatomic) double remainingTime;
@property(readonly, nonatomic) double currentTime;
- (void)p_applyVolumeToPlayerItem;
@property(nonatomic) double endTime;
@property(nonatomic) double startTime;
@property(readonly, nonatomic) double absoluteDuration;
@property(readonly, nonatomic) double duration;
- (void)teardown;
- (void)addAdditionalReference;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1 delegate:(id)arg2;

@end

