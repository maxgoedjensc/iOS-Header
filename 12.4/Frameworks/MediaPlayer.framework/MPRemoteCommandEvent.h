//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPRemoteCommand, NSDictionary, NSString;

@interface MPRemoteCommandEvent : NSObject
{
    NSDictionary *_mediaRemoteOptions;
    NSString *_contextID;
    NSString *_commandID;
    MPRemoteCommand *_command;
    double _timestamp;
}

+ (id)eventWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
@property(readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) MPRemoteCommand *command; // @synthesize command=_command;
- (void).cxx_destruct;
- (long long)playbackQueueOffset;
- (id)contentItemID;
- (id)commandID;
- (id)contextID;
- (id)mediaRemoteOptions;
- (id)initWithCommand:(id)arg1 mediaRemoteType:(unsigned int)arg2 options:(id)arg3;
- (id)init;

@end

