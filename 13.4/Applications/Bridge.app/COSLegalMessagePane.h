//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSViewController.h>

#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface COSLegalMessagePane : PSViewController <UIWebViewDelegate>
{
    UIWebView *_webView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (_Bool)canBeShownFromSuspendedState;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)markupString;
- (_Bool)adjustTextDirection;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

