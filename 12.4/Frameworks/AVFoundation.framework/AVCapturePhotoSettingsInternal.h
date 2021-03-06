//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, NSURL;

@interface AVCapturePhotoSettingsInternal : NSObject
{
    NSDictionary *format;
    NSString *processedFileType;
    unsigned int rawPhotoPixelFormatType;
    NSString *rawFileType;
    long long uniqueID;
    long long flashMode;
    _Bool autoRedEyeReductionEnabled;
    long long HDRMode;
    _Bool EV0PhotoDeliveryEnabled;
    _Bool autoStillImageStabilizationEnabled;
    _Bool autoDualCameraFusionEnabled;
    _Bool dualCameraDualPhotoDeliveryEnabled;
    _Bool highResolutionPhotoEnabled;
    _Bool depthDataDeliveryEnabled;
    _Bool embedsDepthDataInPhoto;
    _Bool depthDataFiltered;
    _Bool cameraCalibrationDataDeliveryEnabled;
    _Bool portraitEffectsMatteDeliveryEnabled;
    _Bool embedsPortraitEffectsMatteInPhoto;
    NSDictionary *metadata;
    NSURL *livePhotoMovieFileURL;
    NSURL *livePhotoMovieFileURLForOriginalPhoto;
    NSString *livePhotoVideoCodecType;
    NSArray *livePhotoMovieMetadata;
    NSArray *livePhotoMovieMetadataForOriginalPhoto;
    NSDictionary *previewPhotoFormat;
    NSDictionary *embeddedThumbnailPhotoFormat;
    NSDictionary *rawEmbeddedThumbnailPhotoFormat;
    _Bool squareCropEnabled;
    _Bool turboModeEnabled;
    _Bool burstQualityCaptureEnabled;
    NSArray *photoFilters;
    NSArray *adjustedPhotoFilters;
    unsigned int shutterSound;
    unsigned long long userInitiatedPhotoRequestTime;
    NSString *livePhotoContentIdentifier;
    NSString *livePhotoContentIdentifierForOriginalPhoto;
}

@end

