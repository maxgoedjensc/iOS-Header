//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RERelevanceProvider.h>

@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider
{
    _Bool _connectedToCar;
    _Bool _connectedToSpeaker;
}

+ (id)relevanceSimulatorID;
@property(readonly, nonatomic) _Bool connectedToSpeaker; // @synthesize connectedToSpeaker=_connectedToSpeaker;
@property(readonly, nonatomic) _Bool connectedToCar; // @synthesize connectedToCar=_connectedToCar;
- (id)description;
- (unsigned long long)_hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithConnectionToCar:(_Bool)arg1 connectionToSpeaker:(_Bool)arg2;
- (id)dictionaryEncoding;
- (id)initWithDictionary:(id)arg1;

@end

