//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOServerConditionalString-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class GEOCondition, GEOFormattedString, NSString, PBDataReader, PBUnknownFields;

@interface GEOConditionalFormattedString : PBCodable <GEOServerConditionalString, NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOCondition *_condition;
    GEOFormattedString *_formattedString;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_condition:1;
        unsigned int read_formattedString:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_condition:1;
        unsigned int wrote_formattedString:1;
    } _flags;
}

+ (_Bool)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)clearUnknownFields:(_Bool)arg1;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (void)readAll:(_Bool)arg1;
- (id)dictionaryRepresentation;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) GEOCondition *condition;
@property(readonly, nonatomic) _Bool hasCondition;
- (void)_readCondition;
@property(retain, nonatomic) GEOFormattedString *formattedString;
@property(readonly, nonatomic) _Bool hasFormattedString;
- (void)_readFormattedString;
- (id)initWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

