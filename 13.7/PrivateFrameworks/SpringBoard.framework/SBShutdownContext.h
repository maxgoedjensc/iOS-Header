//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NSCopying-Protocol.h>

@class NSString;

@interface SBShutdownContext : NSObject <NSCopying>
{
    NSString *_reason;
    _Bool _fromUserPowerDown;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool fromUserPowerDown; // @synthesize fromUserPowerDown=_fromUserPowerDown;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithReason:(id)arg1;

@end

