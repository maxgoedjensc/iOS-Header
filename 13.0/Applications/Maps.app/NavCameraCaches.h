//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOComposedRoute, GEOMapFeatureAccess, NSArray, VKNavContext;

__attribute__((visibility("hidden")))
@interface NavCameraCaches : NSObject
{
    NSArray *_stepsWithRampCache;
    NSArray *_stepsWithCloseDistanceCache;
    NSArray *_stepsWithNearDistanceCache;
    NSArray *_stepsWithRoundaboutCache;
    NSArray *_groupedManeuverCounts;
    GEOComposedRoute *_currentRoute;
    GEOMapFeatureAccess *_mapFeatureAccess;
    VKNavContext *_navContex;
}

+ (id)cachesWithRoute:(id)arg1 context:(id)arg2;
@property(retain, nonatomic) VKNavContext *navContex; // @synthesize navContex=_navContex;
@property(retain, nonatomic) GEOMapFeatureAccess *mapFeatureAccess; // @synthesize mapFeatureAccess=_mapFeatureAccess;
@property(retain, nonatomic) GEOComposedRoute *currentRoute; // @synthesize currentRoute=_currentRoute;
@property(retain, nonatomic) NSArray *groupedManeuverCounts; // @synthesize groupedManeuverCounts=_groupedManeuverCounts;
@property(retain, nonatomic) NSArray *stepsWithRoundaboutCache; // @synthesize stepsWithRoundaboutCache=_stepsWithRoundaboutCache;
@property(retain, nonatomic) NSArray *stepsWithNearDistanceCache; // @synthesize stepsWithNearDistanceCache=_stepsWithNearDistanceCache;
@property(retain, nonatomic) NSArray *stepsWithCloseDistanceCache; // @synthesize stepsWithCloseDistanceCache=_stepsWithCloseDistanceCache;
@property(retain, nonatomic) NSArray *stepsWithRampCache; // @synthesize stepsWithRampCache=_stepsWithRampCache;
- (void).cxx_destruct;
- (void)_roadForCoordinate:(CDStruct_c3b9c2ee)arg1 course:(double)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_calculateRoadTileGroupedManeuversWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)_calculateRouteGroupedManeuvers;
- (void)_updateGroupedManeuverCounts;
- (void)recalculateGroupedManeuversCaches;
- (id)init;

@end

