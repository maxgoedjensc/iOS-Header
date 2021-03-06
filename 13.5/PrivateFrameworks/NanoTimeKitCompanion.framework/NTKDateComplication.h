//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@interface NTKDateComplication : NTKComplication
{
    unsigned long long _dateStyle;
}

+ (_Bool)supportsSecureCoding;
+ (id)complicationWithDateStyle:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long dateStyle; // @synthesize dateStyle=_dateStyle;
- (id)_initWithComplicationType:(unsigned long long)arg1 JSONDictionary:(id)arg2;
- (void)_addKeysToJSONDictionary:(id)arg1;
- (void)_migrateFromSkiHillWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)snapshotContext:(id)arg1 isStaleRelativeToContext:(id)arg2;
- (id)customDailySnapshotKey;
- (_Bool)appearsInDailySnapshotForFamily:(long long)arg1;

@end

