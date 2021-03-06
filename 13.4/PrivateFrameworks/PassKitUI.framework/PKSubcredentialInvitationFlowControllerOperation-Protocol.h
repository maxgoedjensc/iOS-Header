//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitUI/PKSubcredentialProvisioningFlowControllerOperation-Protocol.h>

@class PKSubcredentialInvitationFlowControllerContext;
@protocol PKSubcredentialInvitationFlowControllerProtocol;

@protocol PKSubcredentialInvitationFlowControllerOperation <PKSubcredentialProvisioningFlowControllerOperation>
@property(retain, nonatomic) PKSubcredentialInvitationFlowControllerContext *provisioningContext;
@property(readonly, nonatomic) id <PKSubcredentialInvitationFlowControllerProtocol> flowController;
@property(readonly, nonatomic) unsigned long long operation;
- (id)initWithFlowController:(id <PKSubcredentialInvitationFlowControllerProtocol>)arg1 context:(PKSubcredentialInvitationFlowControllerContext *)arg2;
@end

