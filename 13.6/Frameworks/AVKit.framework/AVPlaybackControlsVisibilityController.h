//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVObservationController, AVPlayerController, NSMapTable, NSTimer, UIViewPropertyAnimator;
@protocol AVPlaybackControlsVisibilityControllerDelegate;

__attribute__((visibility("hidden")))
@interface AVPlaybackControlsVisibilityController : NSObject
{
    UIViewPropertyAnimator *_visibilityAnimator;
    AVObservationController *_keyValueObservationController;
    NSMapTable *_itemsAndItemInfos;
    long long _numberOfUserInteractionsBeingTracked;
    double _animationDuration;
    _Bool _visibilityNeedsUpdate;
    _Bool _prefersRegularItemsVisible;
    double _prefersItemsVisibleTimerInterval;
    double _prefersItemsVisibleTimerIntervalForQuicklyHiding;
    double _prefersItemsVisibleTimerIntervalForFlashingControls;
    NSTimer *_prefersRegularItemsVisibleTimer;
    _Bool _prefersItemsShownForVolumeChangeVisible;
    double _prefersItemsShownForVolumeChangeVisibleTimerInterval;
    NSTimer *_prefersItemsShownForVolumeChangeVisibleTimer;
    _Bool _hidesItemQuicklyWhenPlaybackBegins;
    _Bool _popoverPresented;
    _Bool _pictureInPictureActive;
    _Bool _scrubbing;
    _Bool _transitionInProgress;
    _Bool _playbackWasPausedAndVisibilityNotToggledAfterPausing;
    _Bool _loadingIndicatorWasShownAndVisibilityNotToggledAfterLoadingIndicatorShown;
    _Bool _isFlashingControlsVisible;
    _Bool _statusBarAppearanceNeedsUpdate;
    id <AVPlaybackControlsVisibilityControllerDelegate> _delegate;
    _Bool _canHideItems;
    _Bool _showsItemsWhileWaitingToPlay;
    _Bool _showsItemsWhenPaused;
    AVPlayerController *_playerController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsItemsWhenPaused; // @synthesize showsItemsWhenPaused=_showsItemsWhenPaused;
@property(nonatomic) _Bool showsItemsWhileWaitingToPlay; // @synthesize showsItemsWhileWaitingToPlay=_showsItemsWhileWaitingToPlay;
@property(nonatomic, getter=isPopoverPresented) _Bool popoverPresented; // @synthesize popoverPresented=_popoverPresented;
@property(nonatomic, getter=isPictureInPictureActive) _Bool pictureInPictureActive; // @synthesize pictureInPictureActive=_pictureInPictureActive;
@property(nonatomic) _Bool canHideItems; // @synthesize canHideItems=_canHideItems;
@property __weak id <AVPlaybackControlsVisibilityControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVPlayerController *playerController; // @synthesize playerController=_playerController;
- (_Bool)_userIsInteractingWithItems;
- (void)_stopInitiallyHidingItemsThatAreShownForVolumeChanges;
- (void)_stopInitiallyHidingItems;
- (void)_hideRegularItems;
- (void)_stopTimerToHideRegularControls;
- (void)_startTimerToHideRegularItemsAfterDelay:(double)arg1 ifPlaying:(_Bool)arg2;
- (void)_startTimerToHideRegularItems;
- (void)_showRegularItemsAndHideAfterDelayIfPlaying:(_Bool)arg1;
- (void)_showRegularItemsAndHideAfterDelay;
- (void)_showRegularItems;
- (void)_hideItemsShownForVolumeChange;
- (void)_stopTimerToHideItemsShownForVolumeChange;
- (void)_startTimerToHideItemsShownForVolumeChange;
- (void)_showItemsShownForVolumeChangeAndHideAfterDelay;
- (void)_showItemsShownForVolumeChange;
- (_Bool)_hasItemsThatCanBeHidden;
- (_Bool)_hasItemsThatCanBeShown;
- (id)_itemsPassingTest:(CDUnknownBlockType)arg1;
- (void)_performForEachItem:(CDUnknownBlockType)arg1;
- (void)_updateControlItemVisibilityIfNeeded;
- (void)_setVisibilityNeedsUpdate;
- (void)_updateVisibilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_startControllingVisibilityIfNeeded;
- (void)didMoveOffScreen;
- (void)flashPlaybackControlsWithDuration:(double)arg1;
- (void)endTrackingUserInteraction;
- (void)beginTrackingUserInteraction;
- (long long)visibilityBehaviorOptionsOfItem:(id)arg1;
- (void)stopControllingVisibilityOfItem:(id)arg1;
- (void)startControllingVisibilityOfItem:(id)arg1 visibilityBehaviorOptions:(long long)arg2;
- (void)toggleVisibility;
- (void)endHidingItemsForTransitionAndShowImmediately:(_Bool)arg1;
- (void)endHidingItemsForTransition;
- (void)beginHidingItemsForTransition;
- (_Bool)isHidingItemsForTransition;
@property(readonly, nonatomic) _Bool showsItemPreferingStatusBarVisible;
- (void)stopHidingItemQuicklyWhenPlaybackBegins;
- (void)startHidingItemQuicklyWhenPlaybackBegins;
- (void)activeAudioRouteOrSystemVolumeDidChange;
- (void)dealloc;
- (id)init;
@property double volumeChangeHidePlaybackControlTimerInterval;
@property double hideItemsQuicklyTimerInterval;
@property double hideItemsTimerInterval;
@property double animationDuration;
- (void)endShowingItemsDueToIndirectUserInteraction;
- (void)beginShowingItemsDueToIndirectUserInteraction;

@end

