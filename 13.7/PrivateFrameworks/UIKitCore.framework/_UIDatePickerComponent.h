//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDatePickerComponent : NSObject
{
    unsigned long long _equivalentUnit;
    NSString *_formatString;
    unsigned long long _calendarUnit;
    double _width;
    struct _NSRange _unitRange;
}

+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2 desiredUnits:(long long)arg3;
+ (id)componentsFromDateFormatString:(id)arg1 locale:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) struct _NSRange unitRange; // @synthesize unitRange=_unitRange;
@property(readonly, nonatomic) unsigned long long calendarUnit; // @synthesize calendarUnit=_calendarUnit;
@property(readonly, nonatomic) NSString *formatString; // @synthesize formatString=_formatString;
@property(readonly, nonatomic) unsigned long long equivalentUnit;
- (id)description;
- (id)_initWithFormatString:(id)arg1 calendarUnit:(unsigned long long)arg2;

@end

