//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MTLCommandQueue, MTLComputePipelineState, MTLDevice;

@interface ARGPUCubemapConverter : NSObject
{
    id <MTLDevice> _device;
    id <MTLCommandQueue> _commandQueue;
    id <MTLComputePipelineState> _cubemapToLatLongPipelineState;
    id <MTLComputePipelineState> _latLongToCubemapPipelineState;
    _Bool _gpuFamilyAtleast4;
}

- (void).cxx_destruct;
- (id)cubemapTextureFromEquirectangularTexture:(id)arg1 rotation:(CDStruct_8e0628e6)arg2 size:(unsigned long long)arg3;
- (id)equirectangularTextureFromCubemapTexture:(id)arg1 rotation:(CDStruct_8e0628e6)arg2 width:(unsigned long long)arg3 height:(unsigned long long)arg4;
- (id)init;

@end

