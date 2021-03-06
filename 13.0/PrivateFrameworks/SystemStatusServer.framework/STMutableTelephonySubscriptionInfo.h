//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SystemStatusServer/STTelephonySubscriptionInfo.h>

@class NSString;

@interface STMutableTelephonySubscriptionInfo : STTelephonySubscriptionInfo
{
}

- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) long long registrationRejectionCauseCode; // @dynamic registrationRejectionCauseCode;
@property(nonatomic, getter=isNetworkReselectionNeeded) _Bool networkReselectionNeeded; // @dynamic networkReselectionNeeded;
@property(nonatomic) unsigned long long callForwardingIndicator; // @dynamic callForwardingIndicator;
@property(copy, nonatomic) NSString *lastKnownNetworkCountryCode; // @dynamic lastKnownNetworkCountryCode;
@property(copy, nonatomic) NSString *operatorName; // @dynamic operatorName;
@property(nonatomic) unsigned long long maxSignalStrengthBars; // @dynamic maxSignalStrengthBars;
@property(nonatomic) unsigned long long signalStrengthBars; // @dynamic signalStrengthBars;
@property(nonatomic, getter=isRegisteredWithoutCellular) _Bool registeredWithoutCellular; // @dynamic registeredWithoutCellular;
@property(nonatomic, getter=isProvidingDataConnection) _Bool providingDataConnection; // @dynamic providingDataConnection;
@property(nonatomic, getter=isPreferredForDataConnections) _Bool preferredForDataConnections; // @dynamic preferredForDataConnections;
@property(nonatomic) unsigned long long dataConnectionType; // @dynamic dataConnectionType;
@property(nonatomic) unsigned long long cellularRegistrationStatus; // @dynamic cellularRegistrationStatus;
@property(nonatomic) unsigned long long registrationStatus; // @dynamic registrationStatus;
@property(copy, nonatomic) NSString *SIMStatus; // @dynamic SIMStatus;
@property(copy, nonatomic) NSString *shortSIMLabel; // @dynamic shortSIMLabel;
@property(copy, nonatomic) NSString *SIMLabel; // @dynamic SIMLabel;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;

@end

