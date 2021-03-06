//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "MNNavigationServiceObserver-Protocol.h"
#import "RouteMarkerFormatter-Protocol.h"

@class MNNavigationService, NSString;
@protocol RouteMarkerFormatterETADelegate;

__attribute__((visibility("hidden")))
@interface RouteMarkerFormatterETA : NSObject <MNNavigationServiceObserver, RouteMarkerFormatter>
{
    unsigned long long _similarTimeDelta;
    _Bool _debugCustomTextEnabled;
    NSString *_debugCustomText;
    MNNavigationService *_navigationService;
    id <RouteMarkerFormatterETADelegate> _delegate;
}

@property(nonatomic) __weak id <RouteMarkerFormatterETADelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MNNavigationService *navigationService; // @synthesize navigationService=_navigationService;
- (void).cxx_destruct;
- (void)navigationService:(id)arg1 didUpdateDisplayETA:(id)arg2 displayRemainingMinutes:(unsigned long long)arg3 forRoute:(id)arg4;
- (id)_comparisonInfoForRouteWithRemainingMinutes:(unsigned long long)arg1 comparedToRouteWithRemainingMinutes:(unsigned long long)arg2 tollCurrency:(unsigned char)arg3;
- (id)markerInfoForRoute:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

