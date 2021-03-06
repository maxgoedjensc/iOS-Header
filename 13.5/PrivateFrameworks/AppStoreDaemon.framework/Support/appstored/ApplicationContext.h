//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ApplicationProxy;

@interface ApplicationContext : NSObject
{
    struct os_unfair_lock_s _lock;
    ApplicationProxy *_application;
}

+ (void)_recordAttemptToLaunchApplication:(id)arg1;
+ (_Bool)_hasRecentlyAttemptedToLaunchApplication:(id)arg1;
- (void).cxx_destruct;
- (void)launchApplicationWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) ApplicationProxy *application; // @synthesize application=_application;
- (id)initWithApplicationProxy:(id)arg1;

@end

