//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying>
{
    NSMutableArray *_predicates;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *predicates; // @synthesize predicates=_predicates;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)predicatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)predicatesCount;
- (void)addPredicates:(id)arg1;
- (void)clearPredicates;
- (void)dealloc;

@end

