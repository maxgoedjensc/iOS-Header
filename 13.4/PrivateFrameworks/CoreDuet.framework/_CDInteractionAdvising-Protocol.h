//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSDate, NSString, _CDInteractionAdvisorSettings;
@protocol _CDInteractionXPCHeartBeatProtocol;

@protocol _CDInteractionAdvising
- (void)tuneSocialAdvisorUsingSettings:(_CDInteractionAdvisorSettings *)arg1 heartBeatHandler:(id <_CDInteractionXPCHeartBeatProtocol>)arg2;
- (NSArray *)adviseInteractionsForKeywordsInString:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
- (NSArray *)adviseSocialInteractionsForDate:(NSDate *)arg1 andSeedContacts:(NSArray *)arg2 usingSettings:(_CDInteractionAdvisorSettings *)arg3;
- (NSArray *)adviseInteractionsForLocation:(NSString *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
- (NSArray *)adviseInteractionsForDate:(NSDate *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
- (NSArray *)adviseInteractionsUsingSettings:(_CDInteractionAdvisorSettings *)arg1;
- (NSArray *)rankCandidateContacts:(NSArray *)arg1 usingSettings:(_CDInteractionAdvisorSettings *)arg2;
@end

