//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIMovieCardSectionBuyButtonView.h>

@class SearchUIWatchListUtilities;

@interface SearchUIMovieCardSectionUpNextButtonView : SearchUIMovieCardSectionBuyButtonView
{
    SearchUIWatchListUtilities *_watchListUtility;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SearchUIWatchListUtilities *watchListUtility; // @synthesize watchListUtility=_watchListUtility;
- (void)buttonPressed;
- (void)updateUpNextStatus;
- (id)initIsInUpNext:(_Bool)arg1 cardSectionView:(id)arg2;

@end

