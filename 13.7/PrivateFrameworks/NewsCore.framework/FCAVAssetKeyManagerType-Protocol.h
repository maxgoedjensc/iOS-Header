//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class AVURLAsset, NSArray;

@protocol FCAVAssetKeyManagerType
- (void)refreshKeysIfNearExpiration:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)fetchKeysWithIdentifiers:(NSArray *)arg1 completionHandler:(void (^)(NSError *))arg2;
- (void)registerAVURLAssetForAutomaticKeyManagement:(AVURLAsset *)arg1;
@end

