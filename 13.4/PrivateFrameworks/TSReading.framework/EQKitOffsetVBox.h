//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/EQKitVBox.h>

@interface EQKitOffsetVBox : EQKitVBox
{
    double mOffset;
}

@property(readonly, nonatomic) double offset; // @synthesize offset=mOffset;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)p_cacheDimensionsForHeight:(double *)arg1 depth:(double *)arg2 width:(double *)arg3;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2 offset:(double)arg3;
- (id)initWithChildBoxes:(id)arg1 pivotIndex:(unsigned long long)arg2;
- (id)initWithChildBoxes:(id)arg1;
- (id)init;

@end

