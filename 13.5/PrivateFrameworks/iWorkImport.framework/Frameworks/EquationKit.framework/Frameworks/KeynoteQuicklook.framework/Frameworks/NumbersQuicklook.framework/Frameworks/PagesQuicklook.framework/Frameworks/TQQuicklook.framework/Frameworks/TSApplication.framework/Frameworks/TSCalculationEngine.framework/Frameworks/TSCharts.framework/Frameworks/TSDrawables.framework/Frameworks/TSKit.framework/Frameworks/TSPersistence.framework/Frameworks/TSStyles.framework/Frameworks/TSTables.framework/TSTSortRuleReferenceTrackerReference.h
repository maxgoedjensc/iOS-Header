//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCETrackedReference;

@interface TSTSortRuleReferenceTrackerReference : NSObject
{
    unsigned short _columnIndex;
    TSCETrackedReference *_trackedReference;
}

+ (id)referenceWithColumnIndex:(unsigned short)arg1 trackedReference:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) TSCETrackedReference *trackedReference; // @synthesize trackedReference=_trackedReference;
@property(nonatomic) unsigned short columnIndex; // @synthesize columnIndex=_columnIndex;
- (_Bool)isEqual:(id)arg1;
- (_Bool)hasTrackedReferenceEqualTo:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColumnIndex:(unsigned short)arg1 trackedReference:(id)arg2;

@end

