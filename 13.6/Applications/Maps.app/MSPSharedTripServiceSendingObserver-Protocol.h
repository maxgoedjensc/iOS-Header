//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MSPSharedTripService, NSError, NSString;

@protocol MSPSharedTripServiceSendingObserver <NSObject>
- (void)sharedTripService:(MSPSharedTripService *)arg1 sendMessage:(NSString *)arg2 toGroup:(NSString *)arg3;
- (void)sharedTripService:(MSPSharedTripService *)arg1 sendMessage:(NSString *)arg2 toParticipant:(NSString *)arg3;
- (void)invalidateActiveHandlesForSharedTripService:(MSPSharedTripService *)arg1;
- (void)sharedTripService:(MSPSharedTripService *)arg1 sharingDidInvalidateWithError:(NSError *)arg2;
@end

