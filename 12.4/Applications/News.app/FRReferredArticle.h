//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle, FRSectionData, NSData, NSString;

@interface FRReferredArticle : NSObject
{
    NSString *_articleID;
    FRSectionData *_sectionData;
    NSString *_sourceChannelID;
    FCAssetHandle *_flintDocumentAssetHandle;
    NSData *_articleRecordData;
    NSData *_sourceChannelRecordData;
    NSData *_masterIssueRecordData;
}

@property(readonly, nonatomic) NSData *masterIssueRecordData; // @synthesize masterIssueRecordData=_masterIssueRecordData;
@property(readonly, nonatomic) NSData *sourceChannelRecordData; // @synthesize sourceChannelRecordData=_sourceChannelRecordData;
@property(readonly, nonatomic) NSData *articleRecordData; // @synthesize articleRecordData=_articleRecordData;
@property(readonly, nonatomic) FCAssetHandle *flintDocumentAssetHandle; // @synthesize flintDocumentAssetHandle=_flintDocumentAssetHandle;
@property(readonly, nonatomic) NSString *sourceChannelID; // @synthesize sourceChannelID=_sourceChannelID;
@property(readonly, nonatomic) FRSectionData *sectionData; // @synthesize sectionData=_sectionData;
@property(readonly, copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void).cxx_destruct;
- (id)headlineWithContentContext:(id)arg1;
- (id)initWithArticleID:(id)arg1 sourceChannelID:(id)arg2 sectionData:(id)arg3 flintDocumentAssetHandle:(id)arg4 articleRecordData:(id)arg5 sourceChannelRecordData:(id)arg6 masterIssueRecordData:(id)arg7;

@end

