//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FBSSceneClientSettings, FBSSceneTransitionContext, FBScene, SBDeviceApplicationSceneHandle;

@interface SBClientSettingObserverContext : NSObject
{
    FBScene *_scene;
    SBDeviceApplicationSceneHandle *_sceneHandle;
    FBSSceneClientSettings *_oldClientSettings;
    FBSSceneTransitionContext *_transition;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FBSSceneTransitionContext *transition; // @synthesize transition=_transition;
@property(retain, nonatomic) FBSSceneClientSettings *oldClientSettings; // @synthesize oldClientSettings=_oldClientSettings;
@property(retain, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(retain, nonatomic) FBScene *scene; // @synthesize scene=_scene;

@end

