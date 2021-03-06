//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SPOwner/NSCopying-Protocol.h>
#import <SPOwner/NSSecureCoding-Protocol.h>
#import <SPOwner/SPConnectionMaterial-Protocol.h>
#import <SPOwner/SPNearbyToken-Protocol.h>

@class NSData, NSDateInterval, NSNumber, NSString, SPBeaconingKey;

@interface SPCommandKey : NSObject <NSCopying, NSSecureCoding, SPNearbyToken, SPConnectionMaterial>
{
    NSDateInterval *dateInterval;
    SPBeaconingKey *_beaconingKey;
    NSData *_connectionToken;
    NSData *_nearbyToken;
    long long _type;
    NSNumber *_primaryIndex;
    NSNumber *_secondaryIndex;
    NSData *_commandKey;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSData *commandKey; // @synthesize commandKey=_commandKey;
@property(copy, nonatomic) NSNumber *secondaryIndex; // @synthesize secondaryIndex=_secondaryIndex;
@property(copy, nonatomic) NSNumber *primaryIndex; // @synthesize primaryIndex=_primaryIndex;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSData *nearbyToken; // @synthesize nearbyToken=_nearbyToken;
@property(copy, nonatomic) NSData *connectionToken; // @synthesize connectionToken=_connectionToken;
@property(copy, nonatomic) SPBeaconingKey *beaconingKey; // @synthesize beaconingKey=_beaconingKey;
@property(readonly, copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval;
@property(readonly, copy) NSString *description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithBeaconingKey:(id)arg1 commandKey:(id)arg2 connectionToken:(id)arg3 nearbyToken:(id)arg4 primaryIndex:(id)arg5 secondaryIndex:(id)arg6 type:(long long)arg7;
@property(readonly, copy, nonatomic) NSData *address;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

