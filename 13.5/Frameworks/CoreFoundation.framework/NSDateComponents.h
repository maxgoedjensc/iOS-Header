//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreFoundation/NSCopying-Protocol.h>
#import <CoreFoundation/NSSecureCoding-Protocol.h>

@class NSCalendar, NSDate, NSTimeZone;

@interface NSDateComponents : NSObject <NSCopying, NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (id)description;
- (_Bool)isValidDateInCalendar:(id)arg1;
@property(readonly, getter=isValidDate) _Bool validDate;
- (long long)valueForComponent:(unsigned long long)arg1;
- (void)setValue:(long long)arg1 forComponent:(unsigned long long)arg2;
@property(readonly, copy) NSDate *date;
@property(getter=isLeapMonth) _Bool leapMonth;
@property long long yearForWeekOfYear;
@property long long weekOfMonth;
@property long long weekOfYear;
@property long long nanosecond;
@property long long quarter;
@property long long weekdayOrdinal;
@property long long weekday;
- (void)setWeek:(long long)arg1;
@property long long second;
@property long long minute;
@property long long hour;
@property long long day;
@property long long month;
@property long long year;
@property long long era;
@property(copy) NSTimeZone *timeZone;
@property(copy) NSCalendar *calendar;
- (_Bool)isLeapMonthSet;
- (long long)week;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)_initWithCFDateComponents:(struct __CFDateComponents *)arg1;
- (id)init;
- (struct __CFDateComponents *)_dateComponents;

@end

