//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@class NSArray, NSString, TIInputMode;

@protocol TIAssetManaging <NSObject>
@property(copy, nonatomic) CDUnknownBlockType enabledInputModeIdentifiersProviderBlock;
- (NSArray *)topActiveRegions;
- (NSArray *)enabledInputModes;
- (void)requestAssetDownloadForLanguage:(NSString *)arg1 completion:(void (^)(long long))arg2;
- (NSArray *)ddsAssetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2 filteredWithRegion:(_Bool)arg3;
- (NSArray *)assetContentItemsWithContentType:(NSString *)arg1 inputMode:(TIInputMode *)arg2;
@end

