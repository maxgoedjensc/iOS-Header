//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface MSPCollectionItemReplicaStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_clientIdentifier;
    NSMutableArray *_records;
}

+ (Class)recordsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
@property(readonly, nonatomic) _Bool hasClientIdentifier;

@end

