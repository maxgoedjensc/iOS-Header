//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/NUEmbedConfigurationLoader-Protocol.h>

@class FCAsyncOnceOperation, FCFlintResourceManager, NSString, SXJSONDictionary;
@protocol FCNewsAppConfigurationManager;

@interface NUANFEmbedConfigurationLoader : NSObject <NUEmbedConfigurationLoader>
{
    SXJSONDictionary *_embedConfiguration;
    id <FCNewsAppConfigurationManager> _appConfigurationManager;
    FCFlintResourceManager *_flintResourceManager;
    FCAsyncOnceOperation *_asyncOnceOperation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) FCAsyncOnceOperation *asyncOnceOperation; // @synthesize asyncOnceOperation=_asyncOnceOperation;
@property(retain, nonatomic) FCFlintResourceManager *flintResourceManager; // @synthesize flintResourceManager=_flintResourceManager;
@property(retain, nonatomic) id <FCNewsAppConfigurationManager> appConfigurationManager; // @synthesize appConfigurationManager=_appConfigurationManager;
- (id)asyncLoadEmbedConfigurationOnceWithCompletion:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) SXJSONDictionary *embedConfiguration; // @synthesize embedConfiguration=_embedConfiguration;
- (id)loadEmbededConfigurationWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithAppConfigManager:(id)arg1 flintResourceManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

