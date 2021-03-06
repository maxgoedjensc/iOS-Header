//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFAction.h>

@interface WFGetDistanceAction : WFAction
{
}

+ (unsigned long long)transportTypeFromString:(id)arg1;
- (id)noLocationError;
- (_Bool)locationParameterIsCurrentLocation:(id)arg1;
- (_Bool)destinationIsCurrentLocation;
- (_Bool)originIsCurrentLocation;
- (void)finishRunningWithDistance:(double)arg1;
- (void)getDistanceFromOrigin:(id)arg1 toDestination:(id)arg2 transportType:(unsigned long long)arg3;
- (void)getDirectDistanceFromOrigin:(id)arg1 toDestination:(id)arg2;
- (void)runAsynchronouslyWithInput:(id)arg1;

@end

