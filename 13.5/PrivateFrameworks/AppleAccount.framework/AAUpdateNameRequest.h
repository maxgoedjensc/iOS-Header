//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAAppleIDSettingsRequest.h>

@class NSString;

@interface AAUpdateNameRequest : AAAppleIDSettingsRequest
{
    NSString *_newFirstName;
    NSString *_newLastName;
}

+ (Class)responseClass;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithGrandSlamAccount:(id)arg1 accountStore:(id)arg2 firstName:(id)arg3 lastName:(id)arg4;

@end

