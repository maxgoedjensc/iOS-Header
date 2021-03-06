//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/IAMApplicationContextProvider-Protocol.h>

@class IAMPresentationPolicy, NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface VUIInAppMessagingContextProvider : NSObject <IAMApplicationContextProvider>
{
    IAMPresentationPolicy *_normalPolicy;
    IAMPresentationPolicy *_restrictedPolicy;
    NSMutableSet *_subscriptionProperties;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *subscriptionProperties; // @synthesize subscriptionProperties=_subscriptionProperties;
@property(retain, nonatomic) IAMPresentationPolicy *restrictedPolicy; // @synthesize restrictedPolicy=_restrictedPolicy;
@property(retain, nonatomic) IAMPresentationPolicy *normalPolicy; // @synthesize normalPolicy=_normalPolicy;
- (id)_stringValueForKeyPath:(id)arg1 dictionary:(id)arg2;
- (id)_runSubscriptionQuery:(id)arg1;
- (id)presentationPolicyForPolicyGroup:(long long)arg1;
@property(readonly) _Bool allowsModalMessageDisplay;
- (id)viewControllerForModalPresentation;
- (id)contextPropertyWithName:(id)arg1;
- (id)queriedSubscriptionProperties;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double lastMessageDisplayTime;
@property(readonly) Class superclass;

@end

