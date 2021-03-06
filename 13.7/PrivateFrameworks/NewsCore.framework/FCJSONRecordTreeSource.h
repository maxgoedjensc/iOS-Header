//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCJSONRecordTreeSourceType-Protocol.h>

@class NSArray;
@protocol FCContentContext;

@interface FCJSONRecordTreeSource : NSObject <FCJSONRecordTreeSourceType>
{
    id <FCContentContext> _context;
    NSArray *_jsonRecordSources;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *jsonRecordSources; // @synthesize jsonRecordSources=_jsonRecordSources;
@property(retain, nonatomic) id <FCContentContext> context; // @synthesize context=_context;
- (void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 edgeCacheHint:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)fetchRecordTreeWithRootIDs:(id)arg1 branchKeysByRecordType:(id)arg2 cachePolicy:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithContext:(id)arg1 jsonRecordSources:(id)arg2;

@end

