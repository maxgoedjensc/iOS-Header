//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <DACardDAV/DACardDAVRecord-Protocol.h>

@class CNMutableGroup, NSString;

@protocol DAGroup <DACardDAVRecord>
- (void *)asABGroup;
- (CNMutableGroup *)asGroup;
- (void)setETag:(NSString *)arg1;
- (NSString *)eTag;
- (void)setExternalIdentifier:(NSString *)arg1;
- (NSString *)externalIdentifier;
- (void)setExternalUUID:(NSString *)arg1;
- (NSString *)externalUUID;
- (int)legacyIdentifier;
@end

