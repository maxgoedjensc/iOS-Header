//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Navigation/NSCoding-Protocol.h>
#import <Navigation/NSObject-Protocol.h>

@class NSString, NSTimeZone;

@protocol GEOServerFormatTokenTimeStampValue <NSObject, NSCoding>
@property(readonly, nonatomic) NSString *formatPattern;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) double timeStamp;
@end

