//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SOAuthorizationCore;
@protocol SOAuthorizationCoreDelegate;

__attribute__((visibility("hidden")))
@interface SOAuthorizationPoolItem : NSObject
{
    SOAuthorizationCore *_authorization;
    id <SOAuthorizationCoreDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SOAuthorizationCoreDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SOAuthorizationCore *authorization; // @synthesize authorization=_authorization;
- (id)initWithAuthorization:(id)arg1 delegate:(id)arg2;

@end

