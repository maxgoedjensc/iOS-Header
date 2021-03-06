//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSData, NSString;

@interface SGDCKLocation : PBCodable <NSCopying>
{
    double _accuracy;
    double _latitude;
    double _longitude;
    double _quality;
    NSString *_address;
    NSString *_airportCode;
    NSData *_handle;
    NSString *_label;
    int _locationType;
    struct {
        unsigned int accuracy:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int quality:1;
        unsigned int locationType:1;
    } _has;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *airportCode; // @synthesize airportCode=_airportCode;
@property(retain, nonatomic) NSData *handle; // @synthesize handle=_handle;
@property(nonatomic) double quality; // @synthesize quality=_quality;
@property(nonatomic) double accuracy; // @synthesize accuracy=_accuracy;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(nonatomic) int locationType; // @synthesize locationType=_locationType;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasAirportCode;
@property(readonly, nonatomic) _Bool hasHandle;
@property(nonatomic) _Bool hasQuality;
@property(nonatomic) _Bool hasAccuracy;
@property(nonatomic) _Bool hasLongitude;
@property(nonatomic) _Bool hasLatitude;
@property(readonly, nonatomic) _Bool hasAddress;
@property(readonly, nonatomic) _Bool hasLabel;
- (int)StringAsLocationType:(id)arg1;
- (id)locationTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasLocationType;

@end

