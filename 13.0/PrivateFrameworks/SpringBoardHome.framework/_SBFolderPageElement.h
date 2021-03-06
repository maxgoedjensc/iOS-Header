//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SBFolderIcon, SBIconGridImage;

@interface _SBFolderPageElement : NSObject
{
    _Bool _gridImagePossible;
    SBIconGridImage *_gridImage;
    unsigned long long _visibleRow;
    unsigned long long _pageIndex;
    SBFolderIcon *_folderIcon;
}

@property(nonatomic) __weak SBFolderIcon *folderIcon; // @synthesize folderIcon=_folderIcon;
@property(nonatomic) unsigned long long pageIndex; // @synthesize pageIndex=_pageIndex;
@property(nonatomic) unsigned long long visibleRow; // @synthesize visibleRow=_visibleRow;
@property(nonatomic, getter=isGridImagePossible) _Bool gridImagePossible; // @synthesize gridImagePossible=_gridImagePossible;
@property(retain, nonatomic) SBIconGridImage *gridImage; // @synthesize gridImage=_gridImage;
- (void).cxx_destruct;
- (unsigned long long)firstVisibleRowForGap;
- (unsigned long long)firstVisibleMiniIconIndex;

@end

