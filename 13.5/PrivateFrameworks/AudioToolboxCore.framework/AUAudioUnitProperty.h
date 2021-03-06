//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AudioToolboxCore/NSSecureCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AUAudioUnitProperty : NSObject <NSSecureCoding>
{
    NSString *_key;
    unsigned int _scope;
    unsigned int _element;
}

+ (_Bool)supportsSecureCoding;
+ (id)propertyWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
+ (id)propertyWithKey:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithKey:(id)arg1 scope:(unsigned int)arg2 element:(unsigned int)arg3;
- (id)initWithKey:(id)arg1;

@end

