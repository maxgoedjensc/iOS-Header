//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HFServiceNameComponents : NSObject
{
    NSString *_rawServiceName;
    NSString *_serviceName;
    NSString *_roomName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property(retain, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property(retain, nonatomic) NSString *rawServiceName; // @synthesize rawServiceName=_rawServiceName;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) NSString *composedString;
- (id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2;

@end

