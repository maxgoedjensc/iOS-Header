//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXHintsConfigurationOptionProvider-Protocol.h>

@class NSString;
@protocol SXDocumentProviding, SXHintsConfigurationOption, SXRenderingConfigurationProvider;

@interface SXRenderingConfigurationOptionsManager : NSObject <SXHintsConfigurationOptionProvider>
{
    struct os_unfair_lock_s _lock;
    id <SXHintsConfigurationOption> _hints;
    id <SXDocumentProviding> _documentProvider;
    id <SXRenderingConfigurationProvider> _configurationProvider;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <SXRenderingConfigurationProvider> configurationProvider; // @synthesize configurationProvider=_configurationProvider;
@property(readonly, nonatomic) id <SXDocumentProviding> documentProvider; // @synthesize documentProvider=_documentProvider;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
- (_Bool)validateConfigurationOption:(id)arg1 documentSpecVersion:(id)arg2 clientSpecVersion:(id)arg3;
- (_Bool)validateConfigurationOption:(id)arg1;
@property(readonly, nonatomic) id <SXHintsConfigurationOption> hints; // @synthesize hints=_hints;
- (id)initWithDocumentProvider:(id)arg1 configurationProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

