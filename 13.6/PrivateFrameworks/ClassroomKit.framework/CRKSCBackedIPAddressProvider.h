//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIPAddressProviding-Protocol.h>

@class NSSet, NSString;

@interface CRKSCBackedIPAddressProvider : NSObject <CRKIPAddressProviding>
{
    NSSet *mInterfaceTypes;
}

+ (id)WiFiIPAddressProvider;
+ (id)ethernetIPAddressProvider;
- (void).cxx_destruct;
- (_Bool)isAllowedInterfaceType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *IPAddress;
- (id)initWithInterfaceTypes:(id)arg1;
- (id)initWithInterfaceType:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

