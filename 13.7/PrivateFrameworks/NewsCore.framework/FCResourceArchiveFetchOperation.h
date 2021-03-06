//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class NSArray, NSURL, NSURLSessionDownloadTask;
@protocol FCContentContext;

@interface FCResourceArchiveFetchOperation : FCOperation
{
    CDUnknownBlockType _progressHandler;
    CDUnknownBlockType _fetchCompletionHandler;
    NSURL *_archiveURL;
    id <FCContentContext> _context;
    NSURLSessionDownloadTask *_downloadTask;
    NSArray *_resultResources;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *resultResources; // @synthesize resultResources=_resultResources;
@property(retain, nonatomic) NSURLSessionDownloadTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
@property(copy, nonatomic) NSURL *archiveURL; // @synthesize archiveURL=_archiveURL;
@property(copy, nonatomic) CDUnknownBlockType fetchCompletionHandler; // @synthesize fetchCompletionHandler=_fetchCompletionHandler;
@property(copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
- (void)_ensureResourcesAreReadyForUse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_unzipResourcesFromArchiveFileURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (_Bool)validateOperation;
- (id)initWithArchiveURL:(id)arg1 context:(id)arg2;

@end

