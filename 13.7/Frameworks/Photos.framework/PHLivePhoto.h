//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSSecureCoding-Protocol.h>

@class AVAsset, AVVideoComposition, NSString, NSURL, PHAsset, PHImageManager, PHSandboxExtensionWrapper;

@interface PHLivePhoto : NSObject <NSCopying, NSSecureCoding>
{
    PHAsset *_asset;
    NSObject *_plImage;
    float _audioVolume;
    NSString *_uniqueIdentifier;
    NSString *_assetUUID;
    AVAsset *_videoAsset;
    unsigned long long _options;
    AVVideoComposition *_videoComposition;
    NSString *_assetLocalIdentifier;
    NSURL *_imageURL;
    PHSandboxExtensionWrapper *_imageURLSandboxExtensionWrapper;
    NSURL *_videoURL;
    PHSandboxExtensionWrapper *_videoURLSandboxExtensionWrapper;
    long long _contentMode;
    PHImageManager *_imageManager;
    struct CGSize _size;
    struct CGSize _targetSize;
    CDStruct_1b6d18a9 _photoTime;
}

+ (_Bool)supportsSecureCoding;
+ (CDStruct_1b6d18a9)_photoTimeForLivePhotoWithImageURL:(id)arg1 videoURL:(id)arg2;
+ (_Bool)_validateFileURLs:(id)arg1 withValidationOptions:(unsigned long long)arg2 outError:(id *)arg3;
+ (_Bool)_canCreateLoopingLivePhotoWithURLs:(id)arg1 outError:(id *)arg2;
+ (_Bool)_canCreateLivePhotoWithURLs:(id)arg1 outError:(id *)arg2;
+ (_Bool)_identifyResourceURLs:(id)arg1 outImageURL:(id *)arg2 outVideoURL:(id *)arg3 error:(id *)arg4;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 skipValidation:(_Bool)arg4 isLooping:(_Bool)arg5 error:(id *)arg6;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 skipValidation:(_Bool)arg4 error:(id *)arg5;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 error:(id *)arg4;
+ (id)loopingLivePhotoWithResourceFileURLs:(id)arg1 error:(id *)arg2;
+ (id)livePhotoWithResourceFileURLs:(id)arg1 error:(id *)arg2;
+ (void)cancelLivePhotoRequestWithRequestID:(int)arg1;
+ (int)requestLivePhotoWithResourceFileURLs:(id)arg1 placeholderImage:(id)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(nonatomic) __weak PHImageManager *imageManager; // @synthesize imageManager=_imageManager;
@property(nonatomic) float audioVolume; // @synthesize audioVolume=_audioVolume;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property(readonly, nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(readonly, nonatomic) PHSandboxExtensionWrapper *videoURLSandboxExtensionWrapper; // @synthesize videoURLSandboxExtensionWrapper=_videoURLSandboxExtensionWrapper;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(readonly, nonatomic) PHSandboxExtensionWrapper *imageURLSandboxExtensionWrapper; // @synthesize imageURLSandboxExtensionWrapper=_imageURLSandboxExtensionWrapper;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, copy, nonatomic) NSString *assetLocalIdentifier; // @synthesize assetLocalIdentifier=_assetLocalIdentifier;
@property(readonly, copy, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property(readonly, nonatomic) AVAsset *videoAsset; // @synthesize videoAsset=_videoAsset;
@property(readonly, copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
@property(readonly, nonatomic) struct CGSize size; // @synthesize size=_size;
- (void)saveToPhotoLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)videoComplement;
- (void)_loadConstituentURLsWithNetworkAccessAllowed:(_Bool)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)_imageManager;
@property(readonly, nonatomic) PHAsset *asset;
@property(readonly, copy, nonatomic) CDUnknownBlockType videoFileLoader;
@property(readonly, copy, nonatomic) CDUnknownBlockType imageFileLoader;
@property(readonly, nonatomic) NSString *videoTypeIdentifier;
@property(readonly, nonatomic) NSString *imageTypeIdentifier;
@property(readonly, nonatomic) NSString *originalFilename;
- (_Bool)hasPhotoColorAdjustments;
@property(readonly) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
- (void)_ensureConstituentData;
- (id)image;
- (_Bool)_synchronouslyLoadImageURL:(id *)arg1 videoURL:(id *)arg2 error:(id *)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 asset:(id)arg5 assetUUID:(id)arg6 options:(unsigned long long)arg7 videoComposition:(id)arg8;
- (id)initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 assetUUID:(id)arg5 options:(unsigned long long)arg6 videoComposition:(id)arg7;
- (id)initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 asset:(id)arg5 options:(unsigned long long)arg6 videoComposition:(id)arg7;
- (id)_initWithImageURL:(id)arg1 videoURL:(id)arg2 targetSize:(struct CGSize)arg3 contentMode:(long long)arg4;
- (id)initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 asset:(id)arg5;
- (id)initWithImage:(struct CGImage *)arg1 uiOrientation:(long long)arg2 videoAsset:(id)arg3 photoTime:(CDStruct_1b6d18a9)arg4 asset:(id)arg5 options:(unsigned long long)arg6;
- (id)initWithBundleAtURL:(id)arg1;

@end

