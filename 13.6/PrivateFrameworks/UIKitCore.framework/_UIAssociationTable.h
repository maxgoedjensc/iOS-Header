//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIAssociationTable : NSObject
{
    NSMapTable *_leftToRightHashTables;
    NSMapTable *_rightToLeftHashTables;
}

- (void).cxx_destruct;
- (_Bool)hasRightValuesForLeftValue:(id)arg1;
- (_Bool)hasLeftValuesForRightValue:(id)arg1;
- (id)rightValueEnumerableForLeftValue:(id)arg1;
- (id)leftValueEnumerableForRightValue:(id)arg1;
- (id)rightValuesForLeftValue:(id)arg1;
- (id)leftValuesForRightValue:(id)arg1;
- (id)rightValueEnumerable;
- (id)leftValueEnumerable;
- (id)rightValues;
- (id)leftValues;
- (_Bool)isEmpty;
- (void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (id)description;
- (id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2;

@end

