//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Intents/_INExtension.h>

@class NSMutableArray;

@interface IMAssistantIntentHandler : _INExtension
{
    NSMutableArray *_recentIntentHandlers;
}

- (void).cxx_destruct;
- (void)updateRecentlyUsedHandlersWithHandler:(id)arg1;
- (id)existingHandlerForIntentIdentifier:(id)arg1;
- (id)currentApplicationContext;
- (id)handlerForIntent:(id)arg1;
- (id)init;

@end

