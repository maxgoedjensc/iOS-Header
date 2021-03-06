//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/_GEOCountryConfigurationServerProxyDelegate-Protocol.h>

@class NSMutableArray, NSMutableDictionary, NSString, geo_isolater;
@protocol _GEOCountryConfigurationServerProxy;

@interface GEOCountryConfiguration : NSObject <GEOResourceManifestTileGroupObserver, _GEOCountryConfigurationServerProxyDelegate>
{
    geo_isolater *_isolater;
    NSString *_countryCode;
    NSMutableArray *_updateCompletionHandlers;
    NSMutableDictionary *_supportedFeatures;
    geo_isolater *_currentCountrySupportsNavigationIsolater;
    _Bool _currentCountrySupportsNavigation;
    _Bool _determinedCurrentCountrySupportsNavigation;
    double _urlAuthenticationTimeToLive;
    _Bool _hasURLAuthenticationTimeToLive;
    id <_GEOCountryConfigurationServerProxy> _serverProxy;
}

+ (id)sharedConfiguration;
+ (void)setUseLocalProxy:(_Bool)arg1;
+ (void)disableServerConnection;
- (void).cxx_destruct;
- (void)serverProxy:(id)arg1 countryCodeDidChange:(id)arg2;
- (void)serverProxyProvidersDidChange:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (id)_countryDefaultForKey:(id)arg1 inCountry:(id)arg2 sourcePtr:(long long *)arg3 decoder:(CDUnknownBlockType)arg4;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 decoder:(CDUnknownBlockType)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long *)arg3;
- (id)defaultForKey:(id)arg1 defaultValue:(id)arg2 sourcePtr:(long long *)arg3 decoder:(CDUnknownBlockType)arg4;
- (id)_defaultForKey:(id)arg1 inCountry:(id)arg2 defaultValue:(id)arg3 sourcePtr:(long long *)arg4 decoder:(CDUnknownBlockType)arg5;
- (id)_countryCodeOnIsolationQueue;
@property(readonly, copy, nonatomic) NSString *countryCode;
@property(readonly, nonatomic) double urlAuthenticationTimeToLive;
@property(readonly, nonatomic) _Bool currentCountrySupportsCommute;
@property(readonly, nonatomic) _Bool currentCountrySupportsCarIntegration;
@property(readonly, nonatomic) _Bool currentCountrySupportsRouteGenius;
@property(readonly, nonatomic) _Bool currentCountrySupportsTraffic;
@property(readonly, nonatomic) _Bool currentCountrySupportsDirections;
@property(readonly, nonatomic) _Bool currentCountrySupportsNavigation;
- (_Bool)currentCountrySupportsFeature:(long long)arg1;
- (_Bool)countryCode:(id)arg1 supportsFeature:(long long)arg2;
- (void)_resetSupportedFeatures;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
- (void)updateCountryConfiguration:(CDUnknownBlockType)arg1;
- (void)updateProvidersForCurrentCountry;
- (void)dealloc;
- (id)init;
@property(readonly, nonatomic) _Bool zilchPointsSupported;
@property(readonly, nonatomic) _Bool shouldUseGuidanceEventManager;
@property(readonly, nonatomic) _Bool shouldRequestLaneGuidance;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

