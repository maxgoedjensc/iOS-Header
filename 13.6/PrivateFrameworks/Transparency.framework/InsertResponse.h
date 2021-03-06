//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSString, SignedMutationTimestamp, VRFWitness;

@interface InsertResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *accountId; // @dynamic accountId;
@property(retain, nonatomic) VRFWitness *clientDataWitness; // @dynamic clientDataWitness;
@property(retain, nonatomic) VRFWitness *deviceIdWitness; // @dynamic deviceIdWitness;
@property(nonatomic) _Bool hasClientDataWitness; // @dynamic hasClientDataWitness;
@property(nonatomic) _Bool hasDeviceIdWitness; // @dynamic hasDeviceIdWitness;
@property(nonatomic) _Bool hasSmt; // @dynamic hasSmt;
@property(nonatomic) _Bool hasUriWitness; // @dynamic hasUriWitness;
@property(copy, nonatomic) NSString *serverEventInfo; // @dynamic serverEventInfo;
@property(retain, nonatomic) SignedMutationTimestamp *smt; // @dynamic smt;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) VRFWitness *uriWitness; // @dynamic uriWitness;

@end

