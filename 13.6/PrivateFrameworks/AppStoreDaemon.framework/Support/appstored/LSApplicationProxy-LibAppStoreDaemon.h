//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/LSApplicationProxy.h>

@class MIStoreMetadata, NSNumber, PurchaseOwner;

@interface LSApplicationProxy (LibAppStoreDaemon)
- (_Bool)_lib_isValidDSID:(id)arg1;
- (id)lib_storeMetadataError:(id *)arg1;
- (id)lib_extensionType:(long long)arg1;
@property(readonly) MIStoreMetadata *lib_storeMetadata;
@property(readonly) PurchaseOwner *lib_purchaseOwner;
@property(readonly) NSNumber *lib_purchaserDSID;
@property(readonly) _Bool lib_isOcelot;
@property(readonly) _Bool lib_isOpenable;
@property(readonly) _Bool lib_isFamilyShared;
@property(readonly) _Bool lib_isArcadeOpenable;
@property(readonly) long long lib_extensionTypes;
@property(readonly) NSNumber *lib_downloaderDSID;
@end

