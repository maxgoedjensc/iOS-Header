//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCloudContext, FCDeflatedFeedGroup, FCFeedDescriptor, FCFeedGroup, FCFeedViewport, FCFeedViewportBookmark, FCFeedViewportPersistenceGap;
@protocol FCCoreConfiguration;

@interface FCFeedViewportExpandPersistenceGapOperation : FCOperation
{
    _Bool _cachedOnly;
    id <FCCoreConfiguration> _configuration;
    FCCloudContext *_context;
    FCFeedDescriptor *_feedDescriptor;
    FCFeedViewport *_viewport;
    FCFeedViewportPersistenceGap *_gap;
    FCFeedViewportBookmark *_bookmark;
    unsigned long long _gapExpansionDirection;
    long long _gapExpansionPolicy;
    CDUnknownBlockType _expandGapCompletionHandler;
    unsigned long long _indexOfGroupToInflate;
    FCDeflatedFeedGroup *_groupToInflate;
    FCFeedGroup *_inflatedGroup;
}

@property(retain, nonatomic) FCFeedGroup *inflatedGroup; // @synthesize inflatedGroup=_inflatedGroup;
@property(retain, nonatomic) FCDeflatedFeedGroup *groupToInflate; // @synthesize groupToInflate=_groupToInflate;
@property(nonatomic) unsigned long long indexOfGroupToInflate; // @synthesize indexOfGroupToInflate=_indexOfGroupToInflate;
@property(copy, nonatomic) CDUnknownBlockType expandGapCompletionHandler; // @synthesize expandGapCompletionHandler=_expandGapCompletionHandler;
@property(nonatomic) _Bool cachedOnly; // @synthesize cachedOnly=_cachedOnly;
@property(nonatomic) long long gapExpansionPolicy; // @synthesize gapExpansionPolicy=_gapExpansionPolicy;
@property(nonatomic) unsigned long long gapExpansionDirection; // @synthesize gapExpansionDirection=_gapExpansionDirection;
@property(copy, nonatomic) FCFeedViewportBookmark *bookmark; // @synthesize bookmark=_bookmark;
@property(copy, nonatomic) FCFeedViewportPersistenceGap *gap; // @synthesize gap=_gap;
@property(retain, nonatomic) FCFeedViewport *viewport; // @synthesize viewport=_viewport;
@property(retain, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
@property(retain, nonatomic) FCCloudContext *context; // @synthesize context=_context;
@property(copy, nonatomic) id <FCCoreConfiguration> configuration; // @synthesize configuration=_configuration;
- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (_Bool)validateOperation;

@end

