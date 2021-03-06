//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASSendMailTask.h>

@class NSString;

@interface ASSmartMailTask : ASSendMailTask
{
    int _messageType;
    NSString *_originalMessageId;
    NSString *_instanceId;
    NSString *_originalFolderId;
    NSString *_originalLongId;
    _Bool _retryWithoutReferences;
    _Bool _replaceMime;
    _Bool _shouldNotRetry;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldNotRetry; // @synthesize shouldNotRetry=_shouldNotRetry;
- (_Bool)processContext:(id)arg1;
- (void)handleTopLevelErrorStatus:(id)arg1;
- (_Bool)getTopLevelToken:(char *)arg1 outStatusCodePage:(char *)arg2 outStatusToken:(char *)arg3;
- (id)contentType;
- (id)command;
- (id)parameterData;
- (int)commandCode;
- (id)requestBodyStreamOutKnownSize:(int *)arg1;
- (id)initWithMessage:(id)arg1 messageID:(id)arg2 messageType:(int)arg3 originalMessageID:(id)arg4 instanceId:(id)arg5 originalFolderID:(id)arg6 originalLongID:(id)arg7 replaceMime:(_Bool)arg8;

@end

