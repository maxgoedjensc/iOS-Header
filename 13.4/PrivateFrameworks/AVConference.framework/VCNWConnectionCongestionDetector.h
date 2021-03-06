//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector;

__attribute__((visibility("hidden")))
@interface VCNWConnectionCongestionDetector : NSObject
{
    AVCStatisticsCollector *_statisticsCollector;
    CDStruct_b21f1e06 _previousStatistics;
    unsigned int _averageThroughputBps;
    unsigned int _averagePacketDelayMs;
    unsigned int _maxAveragePacketDelayMs;
    unsigned int _lastTimestampWithPacketDrop;
    unsigned int _packetDropCount;
    unsigned int _packetDropCountPerFrame;
    _Bool _didSendCongestionEvent;
    void *_logNWDump;
}

@property(readonly) unsigned int packetDropCount; // @synthesize packetDropCount=_packetDropCount;
@property(readonly) unsigned int averageThroughputBps; // @synthesize averageThroughputBps=_averageThroughputBps;
@property unsigned int maxAveragePacketDelayMs; // @synthesize maxAveragePacketDelayMs=_maxAveragePacketDelayMs;
@property(readonly) unsigned int averagePacketDelayMs; // @synthesize averagePacketDelayMs=_averagePacketDelayMs;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
- (void)enableNWLogDump:(void *)arg1;
- (void)sendCongestionEventWithTimestamp:(unsigned int)arg1;
- (_Bool)processNWConnectionPacketEvent:(struct packet_id *)arg1 eventType:(int)arg2;
- (_Bool)processNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;
- (void)dealloc;

@end

