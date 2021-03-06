//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/NCNotificationActionRunner-Protocol.h>
#import <SpringBoard/SBLockScreenPluginLifecycleObserver-Protocol.h>

@class NSString, SBSCardItem;

@interface NCRevealWalletPassActionRunner : NSObject <NCNotificationActionRunner, SBLockScreenPluginLifecycleObserver>
{
    _Bool _shouldForwardAction;
    SBSCardItem *_cardItem;
    CDUnknownBlockType _pluginCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType pluginCompletionBlock; // @synthesize pluginCompletionBlock=_pluginCompletionBlock;
@property(readonly, retain, nonatomic) SBSCardItem *cardItem; // @synthesize cardItem=_cardItem;
@property(nonatomic) _Bool shouldForwardAction; // @synthesize shouldForwardAction=_shouldForwardAction;
- (void).cxx_destruct;
- (void)didDismissLockScreenPlugin:(id)arg1;
- (void)willDismissLockScreenPlugin:(id)arg1;
- (void)didPresentLockScreenPlugin:(id)arg1;
- (void)willPresentLockScreenPlugin:(id)arg1;
- (void)executeAction:(id)arg1 fromOrigin:(id)arg2 endpoint:(id)arg3 withParameters:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithCardItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

