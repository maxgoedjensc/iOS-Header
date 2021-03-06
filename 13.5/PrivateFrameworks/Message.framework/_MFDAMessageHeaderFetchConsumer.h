//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/MFDASyncResponseConsumer-Protocol.h>

@class MFDAMessageStore, MFError, NSData, NSString;

@interface _MFDAMessageHeaderFetchConsumer : NSObject <MFDASyncResponseConsumer>
{
    _Bool _succeeded;
    MFError *_error;
    NSData *_data;
    MFDAMessageStore *_store;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MFDAMessageStore *store; // @synthesize store=_store;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) MFError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool succeeded; // @synthesize succeeded=_succeeded;
- (void)handleResponse:(id)arg1 error:(id)arg2;
- (_Bool)wantsData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

