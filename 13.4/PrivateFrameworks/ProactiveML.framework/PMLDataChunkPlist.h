//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProactiveML/PMLDataChunk.h>

@interface PMLDataChunkPlist : PMLDataChunk
{
    id _plist;
    _Bool _parsed;
}

+ (id)chunkWithPlist:(id)arg1;
+ (unsigned int)dataChunkType;
- (void).cxx_destruct;
@property(readonly, nonatomic) id plist;

@end

