//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface LUITemporarySessionSupport : NSObject
{
    _Bool _isTemporarySessionAllowed;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool isTemporarySessionAllowed; // @synthesize isTemporarySessionAllowed=_isTemporarySessionAllowed;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)_updateAnonymousTemporaryUserSetting;
- (id)init;

@end

