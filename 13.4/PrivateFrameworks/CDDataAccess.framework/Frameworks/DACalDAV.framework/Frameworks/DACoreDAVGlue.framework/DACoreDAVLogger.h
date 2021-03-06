//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CDDataAccess/DATrafficLogger.h>

#import <DACoreDAVGlue/CoreDAVLogDelegate-Protocol.h>

@class NSString;

@interface DACoreDAVLogger : DATrafficLogger <CoreDAVLogDelegate>
{
}

+ (id)registerDefaultLoggerWithCoreDAV;
- (void)coreDAVTransmittedDataFinished;
- (void)coreDAVLogTransmittedDataPartial:(id)arg1;
- (_Bool)shouldLogTransmittedData;
- (void)coreDAVLogDiagnosticMessage:(id)arg1 atLevel:(long long)arg2;
- (long long)coreDAVOutputLevel;
- (long long)coreDAVLogLevel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

