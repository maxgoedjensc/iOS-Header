//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SigX : NSObject
{
    void *_mySigX;
}

+ (basic_string_a1f69cfb)getVersion;
@property(nonatomic) void *mySigX; // @synthesize mySigX=_mySigX;
- (void)dealloc;
- (_Bool)getSignature:(struct vector<char, std::__1::allocator<char>> *)arg1 error:(id *)arg2;
- (_Bool)resetWithError:(id *)arg1;
- (_Bool)flowFloatSamples:(float *)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id *)arg4;
- (_Bool)flowIntSamples:(short *)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id *)arg4;
- (_Bool)flowFloatSamples:(float *)arg1 sampleCount:(int)arg2 error:(id *)arg3;
- (_Bool)flowIntSamples:(const short *)arg1 sampleCount:(int)arg2 error:(id *)arg3;
- (id)initWithSignatureType:(int)arg1 sampleRate:(unsigned int)arg2 error:(id *)arg3;
- (id)initWithSignatureType:(int)arg1 sampleRate:(unsigned int)arg2 signatureOptions:(int)arg3 error:(id *)arg4;
- (void)FillUnknownError:(id *)arg1;
- (void)ConvertException:(const struct exception *)arg1 toError:(id *)arg2;
- (void)ConvertSystemError:(const struct system_error *)arg1 toError:(id *)arg2;
- (_Bool)flowBuffer:(id)arg1 error:(id *)arg2;

@end

