//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAMicroblogGetSocialCredential : SABaseClientBoundCommand
{
}

+ (id)getSocialCredentialWithDictionary:(id)arg1 context:(id)arg2;
+ (id)getSocialCredential;
- (_Bool)requiresResponse;
@property(copy, nonatomic) NSString *socialNetwork;
@property(copy, nonatomic) NSString *explicitUserPermission;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

