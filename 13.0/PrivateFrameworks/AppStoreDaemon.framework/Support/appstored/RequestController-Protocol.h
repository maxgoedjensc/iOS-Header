//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class RequestProxy;

@protocol RequestController
- (void)startUsingProxy:(RequestProxy *)arg1 withErrorHandler:(void (^)(NSError *))arg2;
- (void)cancelUsingProxy:(RequestProxy *)arg1 withErrorHandler:(void (^)(NSError *))arg2;
@end

