//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/NSObject-Protocol.h>

@class LPFetcher, LPFetcherResponse, NSData, NSString;

@protocol LPFetcherURLResponse <NSObject>
+ (LPFetcherResponse *)responseForFetcher:(LPFetcher *)arg1 withData:(NSData *)arg2 MIMEType:(NSString *)arg3;
+ (_Bool)isValidMIMEType:(NSString *)arg1;
@end

