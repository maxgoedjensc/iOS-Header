//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/REFeatureTransformer.h>

@interface _REWidthFeatureTransformer : REFeatureTransformer
{
    unsigned long long _mask;
    unsigned long long _width;
    unsigned long long _shift;
}

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (_Bool)_validateWithFeatures:(id)arg1;
- (unsigned long long)_createTransformFromValues:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (unsigned long long)_featureCount;
- (long long)_bitCount;
- (unsigned long long)_outputType;
- (id)initWithWidth:(unsigned long long)arg1 shift:(unsigned long long)arg2;

@end

