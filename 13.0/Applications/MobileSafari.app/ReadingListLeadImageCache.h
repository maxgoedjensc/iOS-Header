//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, WBSCache;

@interface ReadingListLeadImageCache : NSObject
{
    WBSCache *_cache;
    NSURL *_directoryURL;
}

- (void).cxx_destruct;
- (void)clearCache;
- (id)loadImageSynchronouslyForIconUUID:(id)arg1;
- (id)initWithDirectoryURL:(id)arg1;

@end

