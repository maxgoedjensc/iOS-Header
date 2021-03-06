//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SPDomainManager : NSObject
{
}

+ (id)defaultManager;
+ (void)initialize;
- (void)notifyIndexer;
- (_Bool)siriSuggestionsEnabled;
- (void)applicationWasUninstalled:(id)arg1;
- (void)registerApplication:(id)arg1 withCategories:(id)arg2;
- (id)getBundleIdForDomainNumber:(id)arg1;
- (void)_removeAllDomainsForDisplayIdentifier:(id)arg1;

@end

