//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDDevice, NSArray;

@interface HMDDeviceRegistrationEntry : HMFObject
{
    HMDDevice *_device;
    NSArray *_accessoryUUIDList;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *accessoryUUIDList; // @synthesize accessoryUUIDList=_accessoryUUIDList;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDevice:(id)arg1 accessoryList:(id)arg2;

@end

