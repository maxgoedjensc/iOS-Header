//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PairedSync/NSObject-Protocol.h>

@class NSError, PSYServiceSyncSession;

@protocol PSYServiceSyncSessionDelegate <NSObject>
- (void)syncSession:(PSYServiceSyncSession *)arg1 reportProgress:(double)arg2;
- (void)syncSession:(PSYServiceSyncSession *)arg1 didFailWithError:(NSError *)arg2;
- (void)syncSessionDidComplete:(PSYServiceSyncSession *)arg1;
- (void)syncSessionDidCompleteSending:(PSYServiceSyncSession *)arg1;
@end

