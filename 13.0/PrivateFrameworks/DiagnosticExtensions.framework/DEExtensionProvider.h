//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DiagnosticExtensions/NSExtensionRequestHandling-Protocol.h>

@class NSString;

@interface DEExtensionProvider : NSObject <NSExtensionRequestHandling>
{
    _Bool _canGenerateNewAttachment;
    _Bool _allowUserAttachmentSelection;
    NSString *_loggingConsent;
}

@property(nonatomic) _Bool allowUserAttachmentSelection; // @synthesize allowUserAttachmentSelection=_allowUserAttachmentSelection;
@property(nonatomic) _Bool canGenerateNewAttachment; // @synthesize canGenerateNewAttachment=_canGenerateNewAttachment;
@property(copy, nonatomic) NSString *loggingConsent; // @synthesize loggingConsent=_loggingConsent;
- (void).cxx_destruct;
- (id)_getHostname;
- (id)filesInDir:(id)arg1 matchingPattern:(id)arg2 excludingPattern:(id)arg3;
- (id)attachmentsForParameters:(id)arg1;
- (id)attachmentsWithParams:(id)arg1;
- (id)attachmentList;
- (void)disableLogging;
- (void)enableLogging;
- (_Bool)canEnableLogging;
- (_Bool)isLoggingEnabled;
- (void)beginRequestWithExtensionContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

