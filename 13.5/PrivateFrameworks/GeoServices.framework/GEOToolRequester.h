//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOToolProxy-Protocol.h>

@interface GEOToolRequester : NSObject <GEOToolProxy>
{
}

+ (id)sharedRequester;
- (_Bool)notifyNetworkDefaultsChanged;
- (void)invalidateTileCache;
- (unsigned long long)freePurgableSpace:(unsigned long long)arg1 forUrgency:(int)arg2;
- (unsigned long long)calculatePurgableSpaceForUrgency:(int)arg1;
- (id)getDefault:(id)arg1 source:(long long *)arg2;
- (void)lockDBs;
- (void)unlockDBs;
- (id)ping;

@end

