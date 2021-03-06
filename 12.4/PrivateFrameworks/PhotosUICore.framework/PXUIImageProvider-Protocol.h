//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PHImageRequestOptions;
@protocol PXDisplayAsset;

@protocol PXUIImageProvider <NSObject>
- (void)cancelImageRequest:(long long)arg1;
- (long long)requestImageForAsset:(id <PXDisplayAsset>)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(PHImageRequestOptions *)arg4 resultHandler:(void (^)(UIImage *, NSDictionary *))arg5;
@end

