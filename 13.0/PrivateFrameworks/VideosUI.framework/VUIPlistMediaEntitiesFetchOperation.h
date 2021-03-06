//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, VUIPlistMediaLibrary;

__attribute__((visibility("hidden")))
@interface VUIPlistMediaEntitiesFetchOperation : VUIAsynchronousOperation
{
    NSArray *_requests;
    NSArray *_responses;
    NSError *_error;
    VUIPlistMediaLibrary *_mediaLibrary;
}

@property(retain, nonatomic) VUIPlistMediaLibrary *mediaLibrary; // @synthesize mediaLibrary=_mediaLibrary;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSArray *responses; // @synthesize responses=_responses;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
- (void).cxx_destruct;
- (id)_fetchResponseWithMediaEntities:(id)arg1 request:(id)arg2;
- (id)_collectionsFetchResponseWithRequest:(id)arg1 error:(id *)arg2;
- (id)_itemsFetchResponseWithRequest:(id)arg1 error:(id *)arg2;
- (id)_mediaEntityKindForRequest:(id)arg1;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;
- (id)init;

@end

