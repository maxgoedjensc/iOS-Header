//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LoggingSupport/OSActivityEventMessage.h>

@class NSObject;
@protocol OS_xpc_object;

@interface OSActivityTraceMessageEvent : OSActivityEventMessage
{
    unsigned char _messageType;
    NSObject<OS_xpc_object> *_payload;
    unsigned long long _senderProgramCounter;
}

@property(readonly, nonatomic) unsigned char messageType; // @synthesize messageType=_messageType;
@property(readonly, nonatomic) unsigned long long senderProgramCounter; // @synthesize senderProgramCounter=_senderProgramCounter;
@property(readonly, nonatomic) NSObject<OS_xpc_object> *payload; // @synthesize payload=_payload;
- (void).cxx_destruct;
- (void)_addProperties:(id)arg1;
- (id)initWithEntry:(struct os_activity_stream_entry_s *)arg1;

@end

