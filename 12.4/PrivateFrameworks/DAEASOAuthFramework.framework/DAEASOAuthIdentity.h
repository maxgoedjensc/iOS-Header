//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DAEASOAuthIdentity : NSObject
{
    NSString *_username;
    NSString *_displayName;
    NSString *_token;
    NSString *_refreshToken;
    NSString *_tokenRequestURI;
}

@property(copy, nonatomic) NSString *tokenRequestURI; // @synthesize tokenRequestURI=_tokenRequestURI;
@property(copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;

@end

