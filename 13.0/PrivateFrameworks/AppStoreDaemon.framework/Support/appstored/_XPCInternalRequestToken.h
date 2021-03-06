//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "XPCRequestToken.h"

#import "XPCNotificationClient-Protocol.h"

@class NSString;

@interface _XPCInternalRequestToken : XPCRequestToken <XPCNotificationClient>
{
}

- (void)deliverProgress:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;
- (void)deliverNotifications:(id)arg1 withBarrierBlock:(CDUnknownBlockType)arg2;
- (void)deliverDialogRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (void)deliverAuthenticateRequest:(id)arg1 withResultHandler:(CDUnknownBlockType)arg2;
- (id)notificationClient;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

