//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXGIndexSetArray : NSObject
{
    long long _capacity;
    long long _count;
    void **_indexSetReferences;
}

@property(readonly, nonatomic) void **indexSetReferences; // @synthesize indexSetReferences=_indexSetReferences;
@property(nonatomic) long long count; // @synthesize count=_count;
- (id)description;
- (void)removeAllIndexes;
- (void)dealloc;

@end

