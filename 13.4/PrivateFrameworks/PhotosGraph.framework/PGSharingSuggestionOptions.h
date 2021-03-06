//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGSharingSuggestionOptions : NSObject
{
    _Bool _replaceMergeCandidates;
    _Bool _debugMode;
    _Bool _includeUnverified;
    _Bool _filterLowWeightResults;
    _Bool _useContactSuggestion;
    unsigned long long _sharingStream;
    unsigned long long _fetchLimit;
}

+ (unsigned long long)_shareSheetSharingStream;
+ (id)optionsForClient:(unsigned long long)arg1;
@property(nonatomic) _Bool useContactSuggestion; // @synthesize useContactSuggestion=_useContactSuggestion;
@property(nonatomic) _Bool filterLowWeightResults; // @synthesize filterLowWeightResults=_filterLowWeightResults;
@property(nonatomic) _Bool includeUnverified; // @synthesize includeUnverified=_includeUnverified;
@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
@property(nonatomic) _Bool debugMode; // @synthesize debugMode=_debugMode;
@property(nonatomic) _Bool replaceMergeCandidates; // @synthesize replaceMergeCandidates=_replaceMergeCandidates;
@property(nonatomic) unsigned long long sharingStream; // @synthesize sharingStream=_sharingStream;
- (id)description;
- (id)init;

@end

