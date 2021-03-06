//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUServiceGridItemManager.h>

@class HFMediaSystemBuilder, NSSet;

@interface HUMediaSystemEditorGridItemManager : HUServiceGridItemManager
{
    HFMediaSystemBuilder *_mediaSystemBuilder;
    NSSet *_prioritizedRooms;
}

+ (CDUnknownBlockType)defaultItemProviderCreatorForMediaSystemBuilder:(id)arg1 options:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *prioritizedRooms; // @synthesize prioritizedRooms=_prioritizedRooms;
@property(readonly, nonatomic) HFMediaSystemBuilder *mediaSystemBuilder; // @synthesize mediaSystemBuilder=_mediaSystemBuilder;
- (CDUnknownBlockType)_roomComparator;
- (id)_sortedItems:(id)arg1 forSectionIdentifier:(id)arg2;
- (id)_itemsToHideInSet:(id)arg1;
- (id)initWithMediaSystemBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithDelegate:(id)arg1 shouldGroupByRoom:(_Bool)arg2 itemProvidersCreator:(CDUnknownBlockType)arg3;

@end

