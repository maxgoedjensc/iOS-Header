//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/NSObject-Protocol.h>

@class CADRouteHypothesis, NSString;

@protocol CADCalendarToolInterface <NSObject>
- (void)CADPostSyntheticRouteHypothesis:(CADRouteHypothesis *)arg1 forEventWithExternalURL:(NSString *)arg2 reply:(void (^)(int))arg3;
- (void)CADPurgeChangeTrackingReply:(void (^)(int))arg1;
@end

