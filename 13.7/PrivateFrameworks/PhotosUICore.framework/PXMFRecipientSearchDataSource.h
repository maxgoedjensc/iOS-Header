//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXRecipientSearchDataSource.h>

@class NSArray;

@interface PXMFRecipientSearchDataSource : PXRecipientSearchDataSource
{
    NSArray *_searchResults;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *searchResults; // @synthesize searchResults=_searchResults;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithSearchResults:(id)arg1;

@end

