//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDNetworkRouterFirewallRuleConfiguration.h>

@interface HMDNetworkRouterHomeKitOnlyFirewallConfiguration : HMDNetworkRouterFirewallRuleConfiguration
{
    _Bool _isFiltered;
    _Bool _useFallbackForRTP;
    _Bool _useFallbackForHDS;
}

+ (id)fallbackConfigurationForRuleset:(id)arg1;
+ (id)fallbackIdentifier;
- (id)description;
- (id)initWithAccessory:(id)arg1 sourceConfiguration:(id)arg2;

@end

