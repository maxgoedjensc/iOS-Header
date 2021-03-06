//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFSymptomResultContextProviding-Protocol.h>

@class HMAccessory, HMMediaSystem, NSString, NSUUID;

@interface HFSymptomResultContextProvider : NSObject <HFSymptomResultContextProviding>
{
    HMAccessory *_accessory;
    HMMediaSystem *_mediaSystem;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HMMediaSystem *mediaSystem; // @synthesize mediaSystem=_mediaSystem;
@property(readonly, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
- (long long)fixStateForSymptom:(id)arg1;
- (_Bool)shouldDisplayManualFixOptionForSymptom:(id)arg1;
@property(readonly, copy, nonatomic) NSString *currentAppleMusicAccountName;
@property(readonly, copy, nonatomic) NSString *currentUserID;
@property(readonly, copy, nonatomic) NSString *accessoryNetworkSSID;
@property(readonly, copy, nonatomic) NSString *currentDeviceNetworkSSID;
@property(readonly, copy, nonatomic) NSString *homeKitObjectName;
@property(readonly, copy, nonatomic) NSString *accessoryName;
@property(readonly, copy, nonatomic) NSUUID *accessoryUUID;
- (id)initWithAccessory:(id)arg1 mediaSystem:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

