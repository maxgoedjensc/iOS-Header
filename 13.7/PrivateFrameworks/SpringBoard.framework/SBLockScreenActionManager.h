//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject
{
    NSMutableDictionary *_actionProviders;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *actionProviders; // @synthesize actionProviders=_actionProviders;
- (void)_clearActionOnAllProviders;
- (void)runUnlockAction;
- (id)currentLockScreenActionContextActionSource:(unsigned long long *)arg1;
- (id)currentLockScreenActionContext;
- (void)registerLockScreenActionProvider:(id)arg1 forSource:(unsigned long long)arg2;
- (id)init;

@end

