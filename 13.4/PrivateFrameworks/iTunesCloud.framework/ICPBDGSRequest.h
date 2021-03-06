//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICPBDGSFinishDelegationRequest, ICPBDGSStartDelegationRequest;

@interface ICPBDGSRequest : PBRequest <NSCopying>
{
    ICPBDGSFinishDelegationRequest *_finishDelegationRequest;
    ICPBDGSStartDelegationRequest *_startDelegationRequest;
    unsigned int _uniqueID;
    struct {
        unsigned int uniqueID:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) ICPBDGSFinishDelegationRequest *finishDelegationRequest; // @synthesize finishDelegationRequest=_finishDelegationRequest;
@property(retain, nonatomic) ICPBDGSStartDelegationRequest *startDelegationRequest; // @synthesize startDelegationRequest=_startDelegationRequest;
@property(nonatomic) unsigned int uniqueID; // @synthesize uniqueID=_uniqueID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasFinishDelegationRequest;
@property(readonly, nonatomic) _Bool hasStartDelegationRequest;
@property(nonatomic) _Bool hasUniqueID;

@end

