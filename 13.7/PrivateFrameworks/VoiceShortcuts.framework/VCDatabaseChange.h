//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceShortcuts/VCSYChange-Protocol.h>

@class NSString, WFDatabase, WFDatabaseObjectDescriptor, WFRecord;

@interface VCDatabaseChange : NSObject <VCSYChange>
{
    NSString *_objectIdentifier;
    long long _changeType;
    WFRecord *_record;
    WFDatabase *_database;
}

+ (id)recordProperties;
+ (Class)recordClass;
+ (int)messageType;
- (void).cxx_destruct;
@property(readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property(copy, nonatomic) WFRecord *record; // @synthesize record=_record;
@property(readonly, nonatomic) long long changeType;
@property(readonly, nonatomic) NSString *objectIdentifier;
- (id)recordWithError:(id *)arg1;
@property(readonly, nonatomic) unsigned long long estimatedSize;
@property(readonly, copy, nonatomic) WFDatabaseObjectDescriptor *descriptor;
- (_Bool)writeTo:(id)arg1 error:(id *)arg2;
- (_Bool)readFrom:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) NSString *sequencer;
@property(readonly, copy) NSString *description;
- (id)initWithObjectIdentifier:(id)arg1 changeType:(long long)arg2;
- (id)initWithDescriptor:(id)arg1 inDatabase:(id)arg2 changeType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

