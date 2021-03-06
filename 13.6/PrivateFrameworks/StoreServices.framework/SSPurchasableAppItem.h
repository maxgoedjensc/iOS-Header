//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSPurchasableItem.h>

@interface SSPurchasableAppItem : SSPurchasableItem
{
}

+ (id)allPropertyKeys;
+ (id)sortByNameKey;
+ (id)databaseTable;
+ (id)itemsFromDatabase:(id)arg1 forAccount:(long long)arg2 matching:(id)arg3 sortedBy:(id)arg4 sortAscending:(_Bool)arg5;
+ (id)allItemsFromDatabase:(id)arg1 forAccount:(long long)arg2 sortedBy:(id)arg3 sortAscending:(_Bool)arg4;
- (id)description;
- (id)requiredCapabilitiesString;
- (_Bool)isPreorder;
- (long long)iTunesVersion;
- (id)humanReadableVersion;
- (id)redownloadParams;
- (_Bool)supportsIPhone;
- (_Bool)supportsIPad;
- (_Bool)is32BitOnly;
- (id)ovalIconURLString;
- (unsigned int)minimumOS;
- (id)longTitle;
- (_Bool)isNewsstand;
- (_Bool)isHiddenFromSpringBoard;
- (_Bool)isFamilyShareable;
- (id)iconURL;
- (id)iconTitle;
- (_Bool)hasMessagesExtension;
- (id)bundleID;
- (long long)contentRatingFlags;
- (id)companyName;
- (id)category;
- (id)accountIdentifier;

@end

