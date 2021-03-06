//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServicesUI/AMSUIWebModel.h>

#import <AppleMediaServicesUI/AMSUIWebPageProvider-Protocol.h>

@class AMSUIWebClientContext, AMSUIWebNavigationBarModel, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebLoadingPageModel : AMSUIWebModel <AMSUIWebPageProvider>
{
    _Bool _disableDelay;
    AMSUIWebNavigationBarModel *_navigationBar;
    NSString *_message;
    AMSUIWebClientContext *_context;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AMSUIWebClientContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool disableDelay; // @synthesize disableDelay=_disableDelay;
@property(readonly, nonatomic) AMSUIWebNavigationBarModel *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(readonly, nonatomic) _Bool disableReappearPlaceholder;
- (id)createViewController;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (id)initWithContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

