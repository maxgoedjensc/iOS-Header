//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSURLConnectionDelegate-Protocol.h>
#import <AppleAccount/NSURLSessionDelegate-Protocol.h>

@class NSString;

@interface AACertificatePinner : NSObject <NSURLConnectionDelegate, NSURLSessionDelegate>
{
}

+ (_Bool)isValidCertificateTrust:(struct __SecTrust *)arg1;
+ (_Bool)isSetupServiceHost:(id)arg1;
+ (id)sharedPinner;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

