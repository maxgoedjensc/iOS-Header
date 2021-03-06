//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUBarsController.h>

#import <PhotosUI/PUAssetActionPerformerDelegate-Protocol.h>
#import <PhotosUI/PUBarButtonItemCollectionDataSource-Protocol.h>
#import <PhotosUI/PUBrowsingViewModelChangeObserver-Protocol.h>
#import <PhotosUI/PUOverOneUpPresentationSessionBarsDelegate-Protocol.h>
#import <PhotosUI/PUPhotoBrowserTitleViewControllerDelegate-Protocol.h>
#import <PhotosUI/PUPlayPauseBarItemsControllerChangeObserver-Protocol.h>
#import <PhotosUI/PUScrubberViewDelegate-Protocol.h>
#import <PhotosUI/PXChangeObserver-Protocol.h>
#import <PhotosUI/PXInfoProvider-Protocol.h>
#import <PhotosUI/PXInfoUpdaterObserver-Protocol.h>
#import <PhotosUI/UIPopoverPresentationControllerDelegate-Protocol.h>

@class NSMutableIndexSet, NSString, PUAssetActionPerformer, PUBarButtonItemCollection, PUBrowsingSession, PUPhotoBrowserTitleViewController, PUPlayPauseBarItemsController, PUScrubberView, PXImageModulationManager, PXInfoUpdater, UITapGestureRecognizer, UIView;
@protocol PUOneUpBarsControllerDelegate;

@interface PUOneUpBarsController : PUBarsController <PUBrowsingViewModelChangeObserver, PUAssetActionPerformerDelegate, UIPopoverPresentationControllerDelegate, PUPlayPauseBarItemsControllerChangeObserver, PUBarButtonItemCollectionDataSource, PUScrubberViewDelegate, PUPhotoBrowserTitleViewControllerDelegate, PXInfoUpdaterObserver, PXInfoProvider, PXChangeObserver, PUOverOneUpPresentationSessionBarsDelegate>
{
    struct {
        _Bool respondsToDidChangeShowingPlayPauseButton;
        _Bool respondsToDidTapPlayPauseButton;
        _Bool respondsToDidTapTitle;
        _Bool respondsToToggleDetailsVisibility;
        _Bool respondsToToggleCommentsVisibility;
        _Bool respondsToCanShowCommentsForAsset;
        _Bool respondsToShouldTapBeginAtLocationFromProvider;
        _Bool respondsToShouldHideToolbarWhenShowingAccessoryViewForAssetReference;
        _Bool respondsToWillExecuteActionPerformer;
        _Bool respondsToCanShowOriginal;
        _Bool respondsToDidBeginShowingOriginal;
        _Bool respondsToDidEndShowingOriginal;
        _Bool respondsToShouldEnableShowingOriginal;
        _Bool respondsToCanViewInLibrary;
    } _delegateFlags;
    _Bool _shouldPlaceButtonsInNavigationBar;
    _Bool _shouldUseCompactTitleView;
    _Bool _shouldUseCompactCommentsTitle;
    _Bool _shouldShowDoneButton;
    _Bool _shouldShowAirPlayButton;
    _Bool _shouldShowScrubber;
    _Bool _shouldShowTitleView;
    _Bool _allowTapOnTitle;
    _Bool _allowShowingPlayPauseButton;
    _Bool _disableShowingNavigationBars;
    _Bool _shouldPlaceScrubberInScrubberBar;
    _Bool _isShowingPlayPauseButton;
    _Bool __needsUpdateTitle;
    _Bool __needsUpdateCommentsTitle;
    _Bool __nextCommentsActionShouldBeginEditing;
    _Bool __needsUpdateChromeVisibility;
    _Bool __lastChromeVisibility;
    PUBrowsingSession *_browsingSession;
    double _maximumToolbarHeight;
    double _maximumAccessoryToolbarHeight;
    NSString *__scrubbingIdentifier;
    PUAssetActionPerformer *__activeActionPerformer;
    PUScrubberView *__scrubberView;
    NSString *__title;
    PUPhotoBrowserTitleViewController *__titleViewController;
    PXInfoUpdater *__currentAssetDisplayInfoUpdater;
    UITapGestureRecognizer *__tapGestureRecognizer;
    long long __nextChromeVisibilityUpdateAnimationType;
    PUPlayPauseBarItemsController *__playPauseBarItemsController;
    PUBarButtonItemCollection *__toolbarButtonItemCollection;
    NSMutableIndexSet *__toolbarButtonIdentifiers;
    PUBarButtonItemCollection *__rightNavBarButtonItemCollection;
    NSMutableIndexSet *__rightNavBarButtonIdentifiers;
    PUBarButtonItemCollection *__leftNavBarButtonItemCollection;
    NSMutableIndexSet *__leftNavBarButtonIdentifiers;
    PUAssetActionPerformer *_sharingPreheatedPerformer;
    PXImageModulationManager *_debuggingObservedImageModulationManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXImageModulationManager *debuggingObservedImageModulationManager; // @synthesize debuggingObservedImageModulationManager=_debuggingObservedImageModulationManager;
@property(retain, nonatomic) PUAssetActionPerformer *sharingPreheatedPerformer; // @synthesize sharingPreheatedPerformer=_sharingPreheatedPerformer;
@property(retain, nonatomic, setter=_setLeftNavBarButtonIdentifiers:) NSMutableIndexSet *_leftNavBarButtonIdentifiers; // @synthesize _leftNavBarButtonIdentifiers=__leftNavBarButtonIdentifiers;
@property(retain, nonatomic, setter=_setLeftNavBarButtonItemCollection:) PUBarButtonItemCollection *_leftNavBarButtonItemCollection; // @synthesize _leftNavBarButtonItemCollection=__leftNavBarButtonItemCollection;
@property(retain, nonatomic, setter=_setRightNavBarButtonIdentifiers:) NSMutableIndexSet *_rightNavBarButtonIdentifiers; // @synthesize _rightNavBarButtonIdentifiers=__rightNavBarButtonIdentifiers;
@property(retain, nonatomic, setter=_setRightNavBarButtonItemCollection:) PUBarButtonItemCollection *_rightNavBarButtonItemCollection; // @synthesize _rightNavBarButtonItemCollection=__rightNavBarButtonItemCollection;
@property(retain, nonatomic, setter=_setToolbarButtonIdentifiers:) NSMutableIndexSet *_toolbarButtonIdentifiers; // @synthesize _toolbarButtonIdentifiers=__toolbarButtonIdentifiers;
@property(retain, nonatomic, setter=_setToolbarButtonItemCollection:) PUBarButtonItemCollection *_toolbarButtonItemCollection; // @synthesize _toolbarButtonItemCollection=__toolbarButtonItemCollection;
@property(readonly, nonatomic) PUPlayPauseBarItemsController *_playPauseBarItemsController; // @synthesize _playPauseBarItemsController=__playPauseBarItemsController;
@property(nonatomic, setter=_setLastChromeVisibility:) _Bool _lastChromeVisibility; // @synthesize _lastChromeVisibility=__lastChromeVisibility;
@property(nonatomic, setter=_setNextChromeVisibilityUpdateAnimationType:) long long _nextChromeVisibilityUpdateAnimationType; // @synthesize _nextChromeVisibilityUpdateAnimationType=__nextChromeVisibilityUpdateAnimationType;
@property(nonatomic, setter=_setNeedsUpdateChromeVisibility:) _Bool _needsUpdateChromeVisibility; // @synthesize _needsUpdateChromeVisibility=__needsUpdateChromeVisibility;
@property(retain, nonatomic, setter=_setTapGestureRecognizer:) UITapGestureRecognizer *_tapGestureRecognizer; // @synthesize _tapGestureRecognizer=__tapGestureRecognizer;
@property(readonly, nonatomic) PXInfoUpdater *_currentAssetDisplayInfoUpdater; // @synthesize _currentAssetDisplayInfoUpdater=__currentAssetDisplayInfoUpdater;
@property(nonatomic, setter=_setNextCommentsActionShouldBeginEditing:) _Bool _nextCommentsActionShouldBeginEditing; // @synthesize _nextCommentsActionShouldBeginEditing=__nextCommentsActionShouldBeginEditing;
@property(nonatomic, setter=_setNeedsUpdateCommentsTitle:) _Bool _needsUpdateCommentsTitle; // @synthesize _needsUpdateCommentsTitle=__needsUpdateCommentsTitle;
@property(readonly, nonatomic) PUPhotoBrowserTitleViewController *_titleViewController; // @synthesize _titleViewController=__titleViewController;
@property(copy, nonatomic, setter=_setTitle:) NSString *_title; // @synthesize _title=__title;
@property(nonatomic, setter=_setNeedsUpdateTitle:) _Bool _needsUpdateTitle; // @synthesize _needsUpdateTitle=__needsUpdateTitle;
@property(readonly, nonatomic) PUScrubberView *_scrubberView; // @synthesize _scrubberView=__scrubberView;
@property(retain, nonatomic, setter=_setActiveActionPerformer:) PUAssetActionPerformer *_activeActionPerformer; // @synthesize _activeActionPerformer=__activeActionPerformer;
@property(readonly, nonatomic) NSString *_scrubbingIdentifier; // @synthesize _scrubbingIdentifier=__scrubbingIdentifier;
@property(nonatomic, setter=_setShowingPlayPauseButton:) _Bool isShowingPlayPauseButton; // @synthesize isShowingPlayPauseButton=_isShowingPlayPauseButton;
@property(nonatomic) _Bool shouldPlaceScrubberInScrubberBar; // @synthesize shouldPlaceScrubberInScrubberBar=_shouldPlaceScrubberInScrubberBar;
@property(nonatomic) _Bool disableShowingNavigationBars; // @synthesize disableShowingNavigationBars=_disableShowingNavigationBars;
@property(nonatomic) _Bool allowShowingPlayPauseButton; // @synthesize allowShowingPlayPauseButton=_allowShowingPlayPauseButton;
@property(nonatomic) _Bool allowTapOnTitle; // @synthesize allowTapOnTitle=_allowTapOnTitle;
@property(nonatomic) _Bool shouldShowTitleView; // @synthesize shouldShowTitleView=_shouldShowTitleView;
@property(nonatomic) _Bool shouldShowScrubber; // @synthesize shouldShowScrubber=_shouldShowScrubber;
@property(nonatomic) _Bool shouldShowAirPlayButton; // @synthesize shouldShowAirPlayButton=_shouldShowAirPlayButton;
@property(nonatomic) _Bool shouldShowDoneButton; // @synthesize shouldShowDoneButton=_shouldShowDoneButton;
@property(nonatomic) double maximumAccessoryToolbarHeight; // @synthesize maximumAccessoryToolbarHeight=_maximumAccessoryToolbarHeight;
@property(nonatomic) double maximumToolbarHeight; // @synthesize maximumToolbarHeight=_maximumToolbarHeight;
@property(nonatomic) _Bool shouldUseCompactCommentsTitle; // @synthesize shouldUseCompactCommentsTitle=_shouldUseCompactCommentsTitle;
@property(nonatomic) _Bool shouldUseCompactTitleView; // @synthesize shouldUseCompactTitleView=_shouldUseCompactTitleView;
@property(nonatomic) _Bool shouldPlaceButtonsInNavigationBar; // @synthesize shouldPlaceButtonsInNavigationBar=_shouldPlaceButtonsInNavigationBar;
@property(retain, nonatomic) PUBrowsingSession *browsingSession; // @synthesize browsingSession=_browsingSession;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (id)requestInfoOfKind:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)infoUpdaterDidUpdate:(id)arg1;
- (void)photoBrowserTitleViewControllerTapped:(id)arg1;
- (_Bool)scrubberView:(id)arg1 shouldIgnoreHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)ppt_performAction:(unsigned long long)arg1;
@property(readonly, nonatomic) UIView *ppt_scrubberView;
- (void)overOneUpPresentationSession:(id)arg1 didAppendReviewScreenAction:(unsigned long long)arg2;
- (id)overOneUpPresentationSession:(id)arg1 barButtonItemForActivityType:(id)arg2;
- (void)overOneUpPresentationSession:(id)arg1 didCompleteWithActivityType:(id)arg2 assetsByAssetCollection:(id)arg3 success:(_Bool)arg4;
- (void)playPauseBarItemsController:(id)arg1 didChange:(id)arg2;
- (long long)_identifierForButton:(id)arg1;
- (id)_activeBarButtonItemForIdentifier:(long long)arg1;
- (id)_barButtonItemForIdentifier:(long long)arg1 location:(long long)arg2;
- (long long)_locationForBarButtonItemCollection:(id)arg1;
- (id)_barButtonItemCollectionForLocation:(long long)arg1;
- (id)barButtonItemCollection:(id)arg1 newBarButtonItemForIdentifier:(long long)arg2;
- (void)presentationControllerDidDismiss:(id)arg1;
- (void)prepareForPopoverPresentation:(id)arg1;
- (id)_barButtonItemForActionType:(unsigned long long)arg1;
- (_Bool)assetActionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)assetActionPerformer:(id)arg1 presentViewController:(id)arg2;
- (void)assetActionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (void)_toolbarViewModel:(id)arg1 didChange:(id)arg2;
- (void)_browsingViewModel:(id)arg1 didChange:(id)arg2;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_handleTapGestureRecognizer:(id)arg1;
- (void)executeActionPerformer:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_executeActionPerformer:(id)arg1;
- (void)_performAddToLibraryAction;
- (void)_performAssetExplorerReviewScreenActionType:(unsigned long long)arg1;
- (void)_performAllPhotosAction;
- (void)_performDuplicateActivityWithAssetsByAssetCollection:(id)arg1;
- (void)_performHideActivityWithAssetsByAssetCollection:(id)arg1;
- (void)_performAirPlayAction;
- (void)_performSlideShowAction;
- (void)_performSuggestionViewInLibraryAction;
- (void)_peformSuggestionRevertAction;
- (void)_peformSuggestionSaveAction;
- (void)_performCancelAction;
- (void)_performReviewAction;
- (void)_performShareAction;
- (void)_performEditAction;
- (void)_performLikeAction:(_Bool)arg1;
- (void)_handleAssetViewModelBeginEditingTimer:(id)arg1;
- (void)_performToggleCommentsAction;
- (void)_performMuteAction:(_Bool)arg1;
- (void)_performPlayPauseAction:(long long)arg1;
- (void)_performChangesWithCurrentVideoPlayer:(CDUnknownBlockType)arg1;
- (void)_toggleCTM;
- (void)_performToggleFavoriteAction;
- (void)_performRestoreAction;
- (void)_performTrashAction;
- (void)toggleOriginalButtonTouched:(id)arg1;
- (void)barButtonItemTapped:(id)arg1;
- (void)_handleSharingPreheat;
- (void)_updateShowingPlayPauseButton;
- (void)_updateChromeVisibilityIfNeeded;
- (void)_invalidateChromeVisibilityWithAnimationType:(long long)arg1;
- (void)_updateCommentsTitleIfNeeded;
- (void)_invalidateCommentsTitle;
- (void)_updateTitleIfNeeded;
- (void)_invalidateTitle;
- (void)_invalidateScrubber;
- (void)_updateScrubberViewIfNeeded;
- (id)_newBarButtonItemWithIdentifier:(long long)arg1 location:(long long)arg2;
- (long long)_locationForBarButtonItemWithIdentifier:(long long)arg1;
- (long long)_scrubberType;
- (_Bool)_canShowCommentsForCurrentAsset;
- (_Bool)_wantsChromeVisible;
@property(readonly, nonatomic) NSString *subtitle;
@property(readonly, nonatomic) NSString *title;
- (long long)preferredBarStyle;
- (_Bool)wantsToolbarVisible;
- (_Bool)wantsNavigationBarVisible;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldTapBeginAtLocationFromProvider:(id)arg1;
@property(readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
- (void)updateContentGuideInsets;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;
- (void)_updateFavoriteBarButtonItem;
- (void)updateBars;
- (void)_updateIdentifiersIndexesWithIdentifier:(long long)arg1 location:(long long)arg2 shouldEnable:(_Bool)arg3;
- (void)_resetIdentifierIndexes;
- (void)invalidateViewControllerView;
- (void)setViewController:(id)arg1;
@property(nonatomic) __weak id <PUOneUpBarsControllerDelegate> delegate;
- (void)dealloc;
- (void)_initializeBarButtonItemCollections;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

