//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkServiceProxy/NPTunnel.h>

@class NPTuscanyOnRamp, NSDate, NSObject;
@protocol OS_nw_connection;

@interface NPTunnelTuscany : NPTunnel
{
    unsigned long long _nextFlowID;
    NSObject<OS_nw_connection> *_UDPSession;
    void *_connectionTimer;
    _Bool _shouldReportUsage;
    void *_pingTimer;
    void *_usageReportTimer;
    NPTuscanyOnRamp *_onRamp;
    unsigned int _waldoTimestamp;
    _Bool _ignoreWaldoTimestamp;
    _Bool _isFirstTunnel;
    void *_clientRef;
    CDUnknownBlockType _pendingPingCompletionHandler;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isFirstTunnel; // @synthesize isFirstTunnel=_isFirstTunnel;
@property(copy, nonatomic) CDUnknownBlockType pendingPingCompletionHandler; // @synthesize pendingPingCompletionHandler=_pendingPingCompletionHandler;
@property(nonatomic) _Bool ignoreWaldoTimestamp; // @synthesize ignoreWaldoTimestamp=_ignoreWaldoTimestamp;
@property(nonatomic) void *clientRef; // @synthesize clientRef=_clientRef;
- (_Bool)isTFOProbeSucceeded;
@property(readonly, nonatomic) NSDate *dayPassCreationDate;
@property(readonly, nonatomic) unsigned int dayPassSessionCounter;
- (_Bool)flowIsFirstFlow:(id)arg1;
- (void)handlePingResponseRTT:(unsigned long long)arg1 geohash:(id)arg2;
- (void)pingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (unsigned long long)maxDataSendSizeForFlow:(id)arg1;
- (void)handleHelloAck:(unsigned int)arg1;
- (id)createConnectionInfo;
- (unsigned long long)initialWindowSize;
- (_Bool)canHandleMoreData;
- (unsigned long long)allocateFlowID;
- (long long)sendData:(id)arg1 forFlow:(id)arg2;
- (void)closeFlow:(id)arg1;
- (void)sendUsageReportWithRTT:(unsigned long long)arg1 geohash:(id)arg2 fallbackReason:(long long)arg3;
- (void)handleFlowUsedTunnel;
@property(readonly, nonatomic) unsigned long long maxFrameSize;
@property(readonly, nonatomic) long long currentMTU;
- (void)destroyConnection;
- (void)handleFallbackForFlow:(id)arg1;
- (void)sendDataOnUDPSession:(id)arg1;
- (void)cancelConnection;
- (void)cancelConnectionTimer;
- (void)startConnectionTimer;
- (_Bool)start;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1 parameters:(id)arg2 appRule:(id)arg3 flowProperties:(id)arg4 onRamp:(id)arg5 delegate:(id)arg6;
- (void)createTuscanyClient;
- (void)acknowledgeData:(unsigned long long)arg1 sentToFlow:(id)arg2;
- (void)writeInitialData;
- (void)handleDataWrittenWithError:(int)arg1;
- (void)handleEOF;
- (void)handleReadData:(struct nw_frame_array_s *)arg1;
- (void)handleInputAvailable;
- (void)handleConnectionError;
- (void)handleDisconnected;
- (void)handleConnected;

@end

