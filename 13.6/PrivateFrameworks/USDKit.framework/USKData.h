//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSData, NSString;

@interface USKData : NSObject
{
    struct VtValue _value;
    NSString *_type;
    unsigned long long _arraySize;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long arraySize; // @synthesize arraySize=_arraySize;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDouble4x4Array:(CDStruct_f1db2b5e *)arg1 count:(unsigned long long)arg2;
- (id)initWithDouble4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithDouble3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithDouble2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithDoubleArray:(double *)arg1 count:(unsigned long long)arg2;
- (id)initWithFloat4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithFloat3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithFloat2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (id)initWithFloatArray:(float *)arg1 count:(unsigned long long)arg2;
- (id)initWithResourcePathArray:(id)arg1;
- (id)initWithTokenArray:(id)arg1;
- (id)initWithStringArray:(id)arg1;
- (id)initWithQuatfArray:(struct *)arg1 count:(unsigned long long)arg2;
- (id)initWithUIntArray:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (id)initWithIntArray:(int *)arg1 count:(unsigned long long)arg2;
- (id)initWithQuatf:(struct)arg1;
- (id)initWithDouble4x4:(CDStruct_f1db2b5e)arg1;
- (id)initWithDouble4: /* Error: Ran out of types for this method. */;
- (id)initWithDouble3: /* Error: Ran out of types for this method. */;
- (id)initWithDouble2: /* Error: Ran out of types for this method. */;
- (id)initWithDouble:(double)arg1;
- (id)initWithFloat4: /* Error: Ran out of types for this method. */;
- (id)initWithFloat3: /* Error: Ran out of types for this method. */;
- (id)initWithFloat2: /* Error: Ran out of types for this method. */;
- (id)initWithFloat:(float)arg1;
- (id)initWithResourcePath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithObjectPath:(id)arg1;
- (id)initWithUInt:(unsigned int)arg1;
- (id)initWithInt:(int)arg1;
- (id)initWithBool:(_Bool)arg1;
- (id)initWithTimeCode:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithToken:(id)arg1;
- (void)setDouble4x4Array:(CDStruct_f1db2b5e *)arg1 count:(unsigned long long)arg2;
- (void)setDouble4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setDouble3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setDouble2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setDoubleArray:(double *)arg1 count:(unsigned long long)arg2;
- (void)setFloat4Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setFloat3Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setFloat2Array:(MISSING_TYPE **)arg1 count:(unsigned long long)arg2;
- (void)setFloatArray:(float *)arg1 count:(unsigned long long)arg2;
- (void)setResourcePathArray:(id)arg1;
- (void)setTokenArray:(id)arg1;
- (void)setStringArray:(id)arg1;
- (void)setQuatfArray:(struct *)arg1 count:(unsigned long long)arg2;
- (void)setUIntArray:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setIntArray:(int *)arg1 count:(unsigned long long)arg2;
- (void)setQuatfValue:(struct)arg1;
- (void)setDouble4x4Value:(CDStruct_f1db2b5e)arg1;
- (void)setDouble4Value: /* Error: Ran out of types for this method. */;
- (void)setDouble3Value: /* Error: Ran out of types for this method. */;
- (void)setDouble2Value: /* Error: Ran out of types for this method. */;
- (void)setDoubleValue:(double)arg1;
- (void)setFloat4Value: /* Error: Ran out of types for this method. */;
- (void)setFloat3Value: /* Error: Ran out of types for this method. */;
- (void)setFloat2Value: /* Error: Ran out of types for this method. */;
- (void)setFloatValue:(float)arg1;
- (void)setResourcePath:(id)arg1;
- (void)setURLValue:(id)arg1;
- (void)setObjectPathValue:(id)arg1;
- (void)setUIntValue:(unsigned int)arg1;
- (void)setIntValue:(int)arg1;
- (void)setBoolValue:(_Bool)arg1;
- (void)setTimeCodeValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)setTokenValue:(id)arg1;
- (void)setValue:(struct VtValue)arg1;
- (unsigned long long)double4x4Array:(CDStruct_f1db2b5e *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)double2Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)doubleArray:(double *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float4x4Array:(CDStruct_f1db2b5e *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float4Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float3Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)float2Array:(MISSING_TYPE **)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)floatArray:(float *)arg1 maxCount:(unsigned long long)arg2;
- (id)resourcePathArray;
- (id)pathArray;
- (id)tokenArray;
- (id)stringArray;
- (unsigned long long)quatfArray:(struct *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)uintArray:(unsigned int *)arg1 maxCount:(unsigned long long)arg2;
- (unsigned long long)intArray:(int *)arg1 maxCount:(unsigned long long)arg2;
- (id)resourcePath;
- (id)urlValue;
- (id)objectPathValue;
- (struct)quatfValue;
- (CDStruct_f1db2b5e)double4x4Value;
- (MISSING_TYPE *)double4Value;
- (MISSING_TYPE *)double3Value;
- (MISSING_TYPE *)double2Value;
- (double)doubleValue;
- (CDStruct_f1db2b5e)float4x4Value;
- (MISSING_TYPE *)float4Value;
- (MISSING_TYPE *)float3Value;
- (MISSING_TYPE *)float2Value;
- (float)floatValue;
- (unsigned int)uintValue;
- (int)intValue;
- (_Bool)boolValue;
- (id)timeCodeValue;
- (id)stringValue;
- (id)tokenValue;
@property(readonly, retain, nonatomic) NSData *dataNoCopy;
- (id)initWithVtValue:(struct VtValue)arg1 typeName:(struct TfToken)arg2;
- (struct VtValue)value;

@end

