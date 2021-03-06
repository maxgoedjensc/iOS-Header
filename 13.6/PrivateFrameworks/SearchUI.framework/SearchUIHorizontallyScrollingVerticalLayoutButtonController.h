//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIHorizontallyScrollingContainerButtonController.h>

@class SearchUIImageView, SearchUILabel;

@interface SearchUIHorizontallyScrollingVerticalLayoutButtonController : SearchUIHorizontallyScrollingContainerButtonController
{
    SearchUIImageView *thumbnailView;
    SearchUILabel *_titleLabel;
    SearchUILabel *_footnoteLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SearchUILabel *footnoteLabel; // @synthesize footnoteLabel=_footnoteLabel;
@property(retain, nonatomic) SearchUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)setThumbnailView:(id)arg1;
- (id)thumbnailView;
- (void)setCardSectionRowModel:(id)arg1;
- (id)setupContentView;
- (double)spacing;

@end

