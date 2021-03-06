//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOApplicationAuditToken, GEOComposedWaypoint, GEODirectionsRequest, GEODirectionsRequestFeedback, GEOLocation, GEORouteAttributes, NSDate;
@protocol GEODirectionServiceTicket;

__attribute__((visibility("hidden")))
@interface NanoRouteManager : NSObject
{
    id <GEODirectionServiceTicket> _ticket;
    double _requestTimestamp;
    GEODirectionsRequest *_request;
    GEORouteAttributes *_routeAttributes;
    _Bool _fromCurrentLocation;
    int _desiredTransportType;
    unsigned int _routeState;
    GEOComposedWaypoint *_origin;
    GEOComposedWaypoint *_destination;
    GEOLocation *_currentLocation;
    CDUnknownBlockType _completionHandler;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    GEODirectionsRequestFeedback *_feedback;
    unsigned long long _maximumNumberOfRoutes;
    GEOApplicationAuditToken *_auditToken;
}

+ (id)defaultRouteAttributesForNavigation;
+ (id)defaultRouteAttributes;
- (void).cxx_destruct;
@property(nonatomic) unsigned int routeState; // @synthesize routeState=_routeState;
@property(retain, nonatomic) GEOApplicationAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(nonatomic) unsigned long long maximumNumberOfRoutes; // @synthesize maximumNumberOfRoutes=_maximumNumberOfRoutes;
@property(retain, nonatomic) GEODirectionsRequestFeedback *feedback; // @synthesize feedback=_feedback;
@property(retain, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(retain, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(nonatomic) _Bool fromCurrentLocation; // @synthesize fromCurrentLocation=_fromCurrentLocation;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(readonly, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOComposedWaypoint *origin; // @synthesize origin=_origin;
@property(readonly, nonatomic) int desiredTransportType; // @synthesize desiredTransportType=_desiredTransportType;
- (void)_handleDirectionsResponse:(id)arg1 error:(id)arg2 directionsError:(id)arg3;
- (void)cancel;
- (void)loadNewRouteSet;
- (void)_addTimepointIfNeededToRouteAttributes:(id)arg1;
- (id)_requestTicketWithWaypoints:(id)arg1;
- (void)_setupFeedbackIfNeeded;
- (id)initWithDirectionsFrom:(id)arg1 to:(id)arg2 type:(int)arg3 currentLocation:(id)arg4 fromCurrentLocation:(_Bool)arg5 withFeedback:(id)arg6;
- (id)init;
- (void)dealloc;

@end

