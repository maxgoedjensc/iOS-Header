//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/NSCopying-Protocol.h>

@interface RETaggedFeatureValueCountedSet : NSObject <NSCopying>
{
    struct __CFBag *_bag;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateFeatureValuesUsingBlock:(CDUnknownBlockType)arg1;
- (void)removeFeatureValue:(unsigned long long)arg1;
- (void)addFeatureValue:(unsigned long long)arg1;
- (_Bool)containsFeatureValue:(unsigned long long)arg1;
- (unsigned long long)countForFeatureValue:(unsigned long long)arg1;
@property(readonly) unsigned long long count;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)init;

@end

