//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaRemote/MRNowPlayingClientState-Protocol.h>

@class NSArray, NSMutableArray, _MRNowPlayingClientProtobuf;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRNowPlayingClientRequests : NSObject <MRNowPlayingClientState>
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMutableArray *_playerClients;
    _MRNowPlayingClientProtobuf *_client;
    NSArray *_nowPlayingClients;
}

@property(readonly, nonatomic) NSArray *nowPlayingClients; // @synthesize nowPlayingClients=_nowPlayingClients;
@property(readonly, nonatomic) _MRNowPlayingClientProtobuf *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)restoreNowPlayingClientState;
- (void)removePlayer:(id)arg1;
- (id)existingNowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)nowPlayingPlayerClientRequestsForPlayerPath:(id)arg1;
- (id)playerClients;
- (id)debugDescription;
- (id)initWithClient:(id)arg1;

@end

