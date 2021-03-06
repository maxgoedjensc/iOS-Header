//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSMutableArray;

@interface ASCodableContactList : PBCodable <NSCopying>
{
    NSMutableArray *_contacts;
}

+ (Class)contactsType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *contacts; // @synthesize contacts=_contacts;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)contactsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contactsCount;
- (void)addContacts:(id)arg1;
- (void)clearContacts;

@end

