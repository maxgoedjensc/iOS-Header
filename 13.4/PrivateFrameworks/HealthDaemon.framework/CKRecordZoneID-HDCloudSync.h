//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/CKRecordZoneID.h>

@interface CKRecordZoneID (HDCloudSync)
+ (id)hd_zoneIDWithSyncCircleIdentifier:(id)arg1 storeIdentifier:(id)arg2;
+ (id)hd_masterZoneIDForSyncCircleIdentifier:(id)arg1;
- (id)hd_storeIdentifier;
- (id)hd_syncCircleIdentifier;
- (_Bool)hd_isMasterZoneIDForSyncCircleIdentifier:(id *)arg1;
- (_Bool)hd_splitIntoSyncCircleIdentifier:(id *)arg1 storeIdentifier:(id *)arg2;
@end

