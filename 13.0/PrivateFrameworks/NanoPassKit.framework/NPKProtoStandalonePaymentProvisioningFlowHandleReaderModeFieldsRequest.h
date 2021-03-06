//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneRequestHeader, NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowHandleReaderModeFieldsRequest : PBRequest <NSCopying>
{
    NSMutableArray *_readerModeFields;
    NPKProtoStandaloneRequestHeader *_requestHeader;
}

+ (Class)readerModeFieldsType;
@property(retain, nonatomic) NSMutableArray *readerModeFields; // @synthesize readerModeFields=_readerModeFields;
@property(retain, nonatomic) NPKProtoStandaloneRequestHeader *requestHeader; // @synthesize requestHeader=_requestHeader;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)readerModeFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)readerModeFieldsCount;
- (void)addReaderModeFields:(id)arg1;
- (void)clearReaderModeFields;

@end

