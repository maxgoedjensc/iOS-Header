//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet;
@protocol FCHeadlineProviding;

@protocol TSArticleRecirculationBridgedServiceType
- (void)fetchDataForHeadline:(id <FCHeadlineProviding>)arg1 context:(long long)arg2 cellStyle:(long long)arg3 subscriptionAdContext:(NSSet *)arg4 completion:(void (^)(TSArticleRecirculationData *))arg5;
@end

