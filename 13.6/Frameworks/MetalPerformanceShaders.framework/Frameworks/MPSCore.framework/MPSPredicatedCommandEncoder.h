//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MPSCore/MTLComputeCommandEncoder-Protocol.h>

@class MPSCommandBuffer, NSString;
@protocol MTLComputeCommandEncoder, MTLComputePipelineState, MTLDevice;

@interface MPSPredicatedCommandEncoder : NSObject <MTLComputeCommandEncoder>
{
    MPSCommandBuffer *_owningMPSCommandBuffer;
    id <MTLComputeCommandEncoder> _originalCommandEncoder;
    struct MPSDevice *_mpsDevice;
    id <MTLComputePipelineState> _userBoundPipelineState;
    struct UserBufferBindingData_s _userBinding1;
    struct UserBufferBindingData_s _userBinding2;
    struct UserBufferBindingData_s _userBinding3;
}

+ (id)predicatedEncoderWithMPSCommandBuffer:(id)arg1 commandEncoder:(id)arg2 mpsDevice:(struct MPSDevice *)arg3;
@property(readonly, nonatomic) id <MTLComputeCommandEncoder> computeCommandEncoder; // @synthesize computeCommandEncoder=_originalCommandEncoder;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)setComputePipelineState:(id)arg1;
- (void)setBytes:(const void *)arg1 length:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)setBufferOffset:(unsigned long long)arg1 atIndex:(unsigned long long)arg2;
- (void)setBuffers:(const id *)arg1 offsets:(const unsigned long long *)arg2 withRange:(struct _NSRange)arg3;
- (void)setBuffer:(id)arg1 offset:(unsigned long long)arg2 atIndex:(unsigned long long)arg3;
- (void)dispatchThreadgroups:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)dispatchThreads:(CDStruct_14f26992)arg1 threadsPerThreadgroup:(CDStruct_14f26992)arg2;
- (void)dealloc;
- (id)initWithMPSCommandBuffer:(id)arg1 commandEncoder:(id)arg2 mpsDevice:(struct MPSDevice *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) id <MTLDevice> device;
@property(readonly) unsigned long long dispatchType;
@property(readonly) unsigned long long hash;
@property(copy) NSString *label;
@property(readonly) Class superclass;

@end

