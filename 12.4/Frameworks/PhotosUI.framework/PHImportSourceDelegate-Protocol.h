//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, PHAsset, PHImportAsset, PHImportSource;

@protocol PHImportSourceDelegate
- (void)userHasTrustedHostForImportSource:(PHImportSource *)arg1;
- (void)userRequiredToTrustHostForImportSource:(PHImportSource *)arg1;
- (_Bool)shouldImportAsset:(PHImportAsset *)arg1 asDuplicateOfLibraryAsset:(PHAsset *)arg2 applyToAll:(_Bool *)arg3;
- (void)importSource:(PHImportSource *)arg1 didDeleteAsset:(PHImportAsset *)arg2;
- (void)importSource:(PHImportSource *)arg1 didUpdateAsset:(PHImportAsset *)arg2 propertyMask:(unsigned short)arg3;
- (void)importSource:(PHImportSource *)arg1 didRemoveAssets:(NSArray *)arg2;
- (void)importSource:(PHImportSource *)arg1 didAddAssets:(NSArray *)arg2;
@end

