//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRAWTemperatureAdjust : CIFilter
{
    CIImage *inputImage;
    CIVector *inputWhitePoint;
    NSNumber *inputEV;
    NSNumber *inputVersion;
}

- (id)outputImage;

@end

