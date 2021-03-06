//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProviderDaemon/NSObject-Protocol.h>

@class FPCTLTermDumper;
@protocol FPDLifetimeExtender, FPXPCAutomaticErrorProxy><FPXVendor;

@protocol FPDExtensionSessionProtocol <NSObject>
@property(nonatomic) _Bool hasFileProviderPresenceTCCAccess;
- (void)dumpStateTo:(FPCTLTermDumper *)arg1;
- (void)invalidate;
- (void)start;
- (void)asyncUnregisterLifetimeExtensionForObject:(id <FPDLifetimeExtender>)arg1;
- (void)unregisterLifetimeExtensionForObject:(id <FPDLifetimeExtender>)arg1;
- (void)registerLifetimeExtensionForObject:(id <FPDLifetimeExtender>)arg1;
- (void)updatePresenceTCCWithAuditToken:(CDStruct_6ad76789)arg1;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)existingFileProviderProxyWithTimeout:(_Bool)arg1 pid:(int)arg2;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithoutPIDWithTimeout:(_Bool)arg1;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithoutPID;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithTimeout:(_Bool)arg1 pid:(int)arg2;
- (id <FPXPCAutomaticErrorProxy><FPXVendor>)newFileProviderProxyWithPID:(int)arg1;
@end

