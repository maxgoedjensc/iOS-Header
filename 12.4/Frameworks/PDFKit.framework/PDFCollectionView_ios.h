//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFCollectionView.h>

@class NSObject, PDFPage, PDFThumbnailItem_ios, UITouch;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PDFCollectionView_ios : PDFCollectionView
{
    _Bool _isInScrubbingGesture;
    _Bool _inDelayedUpdate;
    _Bool _isUpdatingScrollPosition;
    UITouch *_currentTouch;
    PDFThumbnailItem_ios *_scrubbingItemView;
    PDFPage *_lastScrubbedToPage;
    NSObject<OS_dispatch_queue> *_thumbnailQueue;
    struct CGRect _lastFrame;
}

+ (id)layoutForPlatform;
+ (struct CGSize)defaultThumbnailSize;
@property(retain) NSObject<OS_dispatch_queue> *thumbnailQueue; // @synthesize thumbnailQueue=_thumbnailQueue;
@property _Bool isUpdatingScrollPosition; // @synthesize isUpdatingScrollPosition=_isUpdatingScrollPosition;
@property _Bool inDelayedUpdate; // @synthesize inDelayedUpdate=_inDelayedUpdate;
@property struct CGRect lastFrame; // @synthesize lastFrame=_lastFrame;
@property _Bool isInScrubbingGesture; // @synthesize isInScrubbingGesture=_isInScrubbingGesture;
@property __weak PDFPage *lastScrubbedToPage; // @synthesize lastScrubbedToPage=_lastScrubbedToPage;
@property(retain) PDFThumbnailItem_ios *scrubbingItemView; // @synthesize scrubbingItemView=_scrubbingItemView;
@property(retain) UITouch *currentTouch; // @synthesize currentTouch=_currentTouch;
- (void).cxx_destruct;
- (void)_hideScrubber;
- (void)_showScrubberForPage:(id)arg1 withCenter:(struct CGPoint)arg2;
- (void)_showScrubberForLocation:(struct CGPoint)arg1;
- (void)_updateScrubberToShowCurrentPage;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)annotationDidChangeNotification:(id)arg1;
- (void)pageDidChangeNotification:(id)arg1;
- (void)layoutSubviews;
- (void)_reloadDataForFrameChangeAfterDelay:(id)arg1;
- (void)reloadDataAndRecenter;
- (unsigned long long)maxFittingItems;
- (void)dealloc;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1 collectionViewLayout:(id)arg2;

@end

