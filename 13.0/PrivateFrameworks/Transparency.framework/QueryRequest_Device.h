//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Transparency/GPBMessage.h>

@class NSData, NSMutableArray;

@interface QueryRequest_Device : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *clientDataArray; // @dynamic clientDataArray;
@property(readonly, nonatomic) unsigned long long clientDataArray_Count; // @dynamic clientDataArray_Count;
@property(copy, nonatomic) NSData *deviceId; // @dynamic deviceId;

@end

