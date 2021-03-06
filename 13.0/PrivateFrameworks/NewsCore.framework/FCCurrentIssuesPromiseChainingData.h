//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCCurrentIssuesCheckerResult, NSArray;

@interface FCCurrentIssuesPromiseChainingData : NSObject
{
    NSArray *_resultingIssues;
    NSArray *_followedTagIDs;
    NSArray *_autoFavoriteTagIDs;
    FCCurrentIssuesCheckerResult *_partialResult;
}

@property(retain, nonatomic) FCCurrentIssuesCheckerResult *partialResult; // @synthesize partialResult=_partialResult;
@property(retain, nonatomic) NSArray *autoFavoriteTagIDs; // @synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs;
@property(retain, nonatomic) NSArray *followedTagIDs; // @synthesize followedTagIDs=_followedTagIDs;
@property(retain, nonatomic) NSArray *resultingIssues; // @synthesize resultingIssues=_resultingIssues;
- (void).cxx_destruct;

@end

