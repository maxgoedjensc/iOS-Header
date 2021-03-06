//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSMutableArray, _MRNowPlayingPlayerPathProtobuf;

@interface _MRUpdateContentItemMessageProtobuf : PBCodable <NSCopying>
{
    NSMutableArray *_contentItems;
    _MRNowPlayingPlayerPathProtobuf *_playerPath;
}

+ (Class)contentItemsType;
- (void).cxx_destruct;
@property(retain, nonatomic) _MRNowPlayingPlayerPathProtobuf *playerPath; // @synthesize playerPath=_playerPath;
@property(retain, nonatomic) NSMutableArray *contentItems; // @synthesize contentItems=_contentItems;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPlayerPath;
- (id)contentItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)contentItemsCount;
- (void)addContentItems:(id)arg1;
- (void)clearContentItems;

@end

