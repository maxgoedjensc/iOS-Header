//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurNoise : CIFilter
{
    CIImage *inputImage;
    NSNumber *inputLumaNoiseAmpl;
    NSNumber *inputLumaNoiseModelCoeff;
    CIVector *inputExtent;
    NSNumber *inputUseMetal;
}

@property(copy, nonatomic) NSNumber *inputUseMetal; // @synthesize inputUseMetal;
@property(copy) CIVector *inputExtent; // @synthesize inputExtent;
@property(copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff; // @synthesize inputLumaNoiseModelCoeff;
@property(copy, nonatomic) NSNumber *inputLumaNoiseAmpl; // @synthesize inputLumaNoiseAmpl;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;
- (id)_kernelMetal;
- (id)_kernel;

@end

