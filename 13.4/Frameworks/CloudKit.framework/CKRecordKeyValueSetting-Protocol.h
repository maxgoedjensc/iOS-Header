//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudKit/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol CKRecordValue;

@protocol CKRecordKeyValueSetting <NSObject>
- (NSArray *)changedKeys;
- (NSArray *)allKeys;
- (void)setObject:(id <CKRecordValue>)arg1 forKeyedSubscript:(NSString *)arg2;
- (id <CKRecordValue>)objectForKeyedSubscript:(NSString *)arg1;
- (void)setObject:(id <CKRecordValue>)arg1 forKey:(NSString *)arg2;
- (id <CKRecordValue>)objectForKey:(NSString *)arg1;
@end

