//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "UISpringLoadedInteractionBehavior-Protocol.h"
#import "UISpringLoadedInteractionEffect-Protocol.h"

@class NSString;
@protocol UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect;

@interface TabCollectionViewSpringLoadingBehavior : NSObject <UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect>
{
    id <UISpringLoadedInteractionBehavior> _behavior;
    id <UISpringLoadedInteractionEffect> _effect;
}

+ (void)addSpringLoadedInteractionToTabView:(id)arg1;
- (void).cxx_destruct;
- (void)interaction:(id)arg1 didChangeWithContext:(id)arg2;
- (void)interactionDidFinish:(id)arg1;
- (_Bool)shouldAllowInteraction:(id)arg1 withContext:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

