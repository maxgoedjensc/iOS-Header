//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>

@class NSString, SBAppLayout;

@interface SBSwitcherTransitionRequest : NSObject <BSDescriptionProviding>
{
    SBAppLayout *_appLayout;
    long long _appLayoutEnvironment;
    long long _unlockedEnvironmentMode;
    long long _preferredInterfaceOrientation;
    long long _floatingConfiguration;
    long long _floatingSwitcherVisible;
    long long _dismissInlineAppExpose;
    long long _animationDisabled;
    long long _source;
}

+ (id)requestForDismissingInlineSwitcher;
+ (id)requestForStashingFloatingApplication;
+ (id)requestForDeactivatingFloatingSwitcher;
+ (id)requestForActivatingFloatingSwitcher;
+ (id)requestForActivatingAppSwitcher;
+ (id)requestForActivatingHomeScreen;
+ (id)requestForActivatingAppLayout:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long source; // @synthesize source=_source;
@property(nonatomic) long long animationDisabled; // @synthesize animationDisabled=_animationDisabled;
@property(nonatomic) long long dismissInlineAppExpose; // @synthesize dismissInlineAppExpose=_dismissInlineAppExpose;
@property(nonatomic) long long floatingSwitcherVisible; // @synthesize floatingSwitcherVisible=_floatingSwitcherVisible;
@property(nonatomic) long long floatingConfiguration; // @synthesize floatingConfiguration=_floatingConfiguration;
@property(nonatomic) long long preferredInterfaceOrientation; // @synthesize preferredInterfaceOrientation=_preferredInterfaceOrientation;
@property(nonatomic) long long unlockedEnvironmentMode; // @synthesize unlockedEnvironmentMode=_unlockedEnvironmentMode;
@property(nonatomic) long long appLayoutEnvironment; // @synthesize appLayoutEnvironment=_appLayoutEnvironment;
@property(retain, nonatomic) SBAppLayout *appLayout; // @synthesize appLayout=_appLayout;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

