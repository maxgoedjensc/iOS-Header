//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNContactStore.h>

@protocol CNSiriIntelligenceSettingsProtocol, SGSuggestionsServiceContactsProtocol;

@interface CNSuggestedContactStore : CNContactStore
{
    id <SGSuggestionsServiceContactsProtocol> _suggestionService;
    id <CNSiriIntelligenceSettingsProtocol> _siriIntelligenceSettings;
}

+ (_Bool)isSuggestionsSupported;
+ (id)storeIdentifier;
+ (id)storeInfoClasses;
- (void).cxx_destruct;
@property(retain, nonatomic) id <CNSiriIntelligenceSettingsProtocol> siriIntelligenceSettings; // @synthesize siriIntelligenceSettings=_siriIntelligenceSettings;
@property(retain, nonatomic) id <SGSuggestionsServiceContactsProtocol> suggestionService; // @synthesize suggestionService=_suggestionService;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (_Bool)_processSuggestions:(id)arg1 error:(id *)arg2 withBlock:(CDUnknownBlockType)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (_Bool)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;
- (id)requestAccessForEntityType:(long long)arg1;
- (id)initWithSuggestionsService:(id)arg1 siriIntelligenceSettings:(id)arg2;
- (id)init;

@end

