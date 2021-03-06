//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface NWDeviceReport : NSObject
{
    _Bool _batteryExternalPowerIsConnected;
    _Bool _batteryIsCharging;
    _Bool _batteryFullyCharged;
    _Bool _batteryAtWarnLevel;
    _Bool _batteryAtCriticalLevel;
    _Bool _devicePluggedIn;
    _Bool _deviceScreenOn;
    unsigned int _batteryPercentage;
    unsigned int _batteryCurrentCapacity;
    unsigned int _batteryMaximumCapacity;
    unsigned int _batteryDesignCapacity;
    unsigned int _batteryAbsoluteCapacity;
    unsigned int _batteryVoltage;
    unsigned int _batteryTimeRemaining;
    unsigned int _thermalPressure;
}

@property(nonatomic) unsigned int thermalPressure; // @synthesize thermalPressure=_thermalPressure;
@property(nonatomic) _Bool deviceScreenOn; // @synthesize deviceScreenOn=_deviceScreenOn;
@property(nonatomic) _Bool devicePluggedIn; // @synthesize devicePluggedIn=_devicePluggedIn;
@property(nonatomic) _Bool batteryAtCriticalLevel; // @synthesize batteryAtCriticalLevel=_batteryAtCriticalLevel;
@property(nonatomic) _Bool batteryAtWarnLevel; // @synthesize batteryAtWarnLevel=_batteryAtWarnLevel;
@property(nonatomic) _Bool batteryFullyCharged; // @synthesize batteryFullyCharged=_batteryFullyCharged;
@property(nonatomic) _Bool batteryIsCharging; // @synthesize batteryIsCharging=_batteryIsCharging;
@property(nonatomic) _Bool batteryExternalPowerIsConnected; // @synthesize batteryExternalPowerIsConnected=_batteryExternalPowerIsConnected;
@property(nonatomic) unsigned int batteryTimeRemaining; // @synthesize batteryTimeRemaining=_batteryTimeRemaining;
@property(nonatomic) unsigned int batteryVoltage; // @synthesize batteryVoltage=_batteryVoltage;
@property(nonatomic) unsigned int batteryAbsoluteCapacity; // @synthesize batteryAbsoluteCapacity=_batteryAbsoluteCapacity;
@property(nonatomic) unsigned int batteryDesignCapacity; // @synthesize batteryDesignCapacity=_batteryDesignCapacity;
@property(nonatomic) unsigned int batteryMaximumCapacity; // @synthesize batteryMaximumCapacity=_batteryMaximumCapacity;
@property(nonatomic) unsigned int batteryCurrentCapacity; // @synthesize batteryCurrentCapacity=_batteryCurrentCapacity;
@property(nonatomic) unsigned int batteryPercentage; // @synthesize batteryPercentage=_batteryPercentage;
- (id)description;

@end

