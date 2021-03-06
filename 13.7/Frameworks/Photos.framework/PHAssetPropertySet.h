//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHAssetPropertySet-Protocol.h>

@class NSString, PHAsset;

@interface PHAssetPropertySet : NSObject <PHAssetPropertySet>
{
    PHAsset *_asset;
}

+ (id)propertiesToPrefetch;
+ (_Bool)isToMany;
+ (id)keyPathToPrimaryObject;
+ (id)keyPathFromPrimaryObject;
+ (id)entityName;
+ (id)propertiesToFetch;
+ (id)propertySetName;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak PHAsset *asset; // @synthesize asset=_asset;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

