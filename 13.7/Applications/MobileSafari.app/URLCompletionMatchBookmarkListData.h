//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBSURLCompletionMatchData-Protocol.h"

@class NSMutableArray, NSString, WBSHistoryItem;

@interface URLCompletionMatchBookmarkListData : NSObject <WBSURLCompletionMatchData>
{
    NSMutableArray *_bookmarks;
    WBSHistoryItem *_historyItem;
}

- (void).cxx_destruct;
- (id)_historyItemAtIndex:(unsigned long long)arg1;
- (float)topSitesScoreForPageTitleAtTime:(double)arg1;
- (float)topSitesScoreForURLStringAtIndex:(unsigned long long)arg1 atTime:(double)arg2;
- (_Bool)matchesAutocompleteTrigger:(id)arg1;
- (void)enumerateUserVisibleURLsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePageTitlesUsingBlock:(CDUnknownBlockType)arg1;
- (id)matchDataByMergingWithMatchData:(id)arg1;
@property(readonly, nonatomic) _Bool lastVisitWasFailure;
@property(readonly, nonatomic) double lastVisitedTimeInterval;
@property(readonly, nonatomic) _Bool containsBookmark;
- (id)pageTitleForUserVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringAtIndex:(unsigned long long)arg1;
- (id)userVisibleURLStringForPageTitleAtIndex:(unsigned long long)arg1;
- (id)pageTitleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *originalURLString;
- (id)_historyItemUserVisibleURLString;
- (id)_bookmarkUserVisibleURLString;
- (id)bookmark;
- (id)initWithBookmark:(id)arg1 andBookmark:(id)arg2;
- (id)initWithBookmark:(id)arg1 historyItem:(id)arg2;
@property(readonly, nonatomic) _Bool shouldPreload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long visitCount;

@end

