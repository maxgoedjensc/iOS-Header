//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreParsec/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString;

@protocol _CPStartSearchFeedback <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) unsigned long long queryId;
@property(nonatomic) int triggerEvent;
@property(copy, nonatomic) NSString *uuid;
@property(copy, nonatomic) NSString *input;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

