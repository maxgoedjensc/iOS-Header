//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NEProcessInfo : NSObject
{
}

+ (_Bool)is64bitCapable;
+ (id)copyNEHelperUUIDs;
+ (id)copyDNSUUIDs;
+ (id)getApplicationNameFromPlugin:(id)arg1 userUID:(unsigned int)arg2;
+ (void)clearUUIDCache;
+ (id)copyUUIDsForExecutable:(id)arg1;
+ (id)copyUUIDsFromExecutable:(const char *)arg1;
+ (id)copyUUIDsForFatBinary:(int)arg1;
+ (id)copyUUIDForSingleArch:(int)arg1;
+ (id)copyUUIDsForBundleID:(id)arg1 uid:(unsigned int)arg2;
+ (void)initGlobals;
- (id)init;

@end

