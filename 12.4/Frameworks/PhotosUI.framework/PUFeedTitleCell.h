//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUFeedCell.h>

@class PXFeedSectionInfo, PXSharedAlbumHeaderView;

__attribute__((visibility("hidden")))
@interface PUFeedTitleCell : PUFeedCell
{
    long long _collectionViewType;
    unsigned long long _tappableArea;
    PXFeedSectionInfo *_sectionInfo;
    PXSharedAlbumHeaderView *_headerView;
    struct UIEdgeInsets _contentInsets;
}

@property(readonly, nonatomic) PXSharedAlbumHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) PXFeedSectionInfo *sectionInfo; // @synthesize sectionInfo=_sectionInfo;
@property(nonatomic) unsigned long long tappableArea; // @synthesize tappableArea=_tappableArea;
@property(nonatomic) long long collectionViewType; // @synthesize collectionViewType=_collectionViewType;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void).cxx_destruct;
- (void)_handleTap:(id)arg1;
- (struct CGSize)_performLayoutInRect:(struct CGRect)arg1 updateSubviewFrames:(_Bool)arg2;
- (void)_updateHeaderTextColorStyle;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

