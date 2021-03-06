//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMProperty.h>

@interface CMLengthProperty : CMProperty
{
    double value;
    int unitType;
}

+ (double)convertToPoints:(double)arg1 unit:(int)arg2;
+ (id)cssStringValue:(double)arg1 unit:(int)arg2;
- (void)addNumber:(double)arg1 unit:(int)arg2;
- (id)description;
- (id)cssString;
- (id)cssStringForName:(id)arg1;
- (int)compareValue:(id)arg1;
- (int)unitType;
- (int)intValue;
- (double)value;
- (id)initWithNumber:(double)arg1 unit:(int)arg2;
- (id)initWithNumber:(double)arg1;

@end

