//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, VSOptional;

__attribute__((visibility("hidden")))
@interface VSAccountAuthentication : NSObject
{
    NSString *_username;
    VSOptional *_authenticationToken;
    NSString *_appBundleIdentifier;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(retain, nonatomic) VSOptional *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)description;
- (id)init;

@end

