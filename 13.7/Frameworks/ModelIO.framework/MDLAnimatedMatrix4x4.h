//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedMatrix4x4 : MDLAnimatedValue
{
}

- (unsigned long long)getDouble4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)getFloat4x4Array:(CDStruct_14d5dc5e *)arg1 maxCount:(unsigned long long)arg2;
- (void)resetWithDouble4x4Array:(const CDStruct_14d5dc5e *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (void)resetWithFloat4x4Array:(const CDStruct_14d5dc5e *)arg1 atTimes:(const double *)arg2 count:(unsigned long long)arg3;
- (CDStruct_14d5dc5e)double4x4AtTime:(double)arg1;
- (CDStruct_14d5dc5e)float4x4AtTime:(double)arg1;
- (void)setDouble4x4:(CDStruct_14d5dc5e)arg1 atTime:(double)arg2;
- (void)setFloat4x4:(CDStruct_14d5dc5e)arg1 atTime:(double)arg2;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2 time:(double)arg3;
- (void)resetWithUsdAttribute:(const struct UsdAttribute *)arg1 timeScale:(double)arg2;
- (struct VtValue)defaultVtValue;
- (unsigned long long)precision;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

