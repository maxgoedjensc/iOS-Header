//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServicesUI/AMSUIWebJSPropertiesDelegate-Protocol.h>

@class AMSUIWebClientContext, AMSUIWebJSProperties, AMSUIWebView, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebJSDataProvider : NSObject <AMSUIWebJSPropertiesDelegate>
{
    AMSUIWebView *_webView;
    AMSUIWebClientContext *_context;
    AMSUIWebJSProperties *_properties;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSUIWebJSProperties *properties; // @synthesize properties=_properties;
@property(nonatomic) __weak AMSUIWebClientContext *context; // @synthesize context=_context;
@property(nonatomic) __weak AMSUIWebView *webView; // @synthesize webView=_webView;
- (id)_syncProperties:(id)arg1;
- (id)_syncPropertiesScriptWithProperties:(id)arg1;
- (void)propertiesDidChange:(id)arg1;
- (id)syncProperties;
- (id)runJSRequest:(id)arg1;
- (id)loadPageModelWithInfo:(id)arg1;
- (id)createWebView;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

