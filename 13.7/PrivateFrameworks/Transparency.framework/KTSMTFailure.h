//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class KTSignedMutationTimestamp, NSData;

__attribute__((visibility("hidden")))
@interface KTSMTFailure : NSManagedObject
{
}

+ (id)fetchRequest;

// Remaining properties
@property(nonatomic) long long errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSData *proofOfFailure; // @dynamic proofOfFailure;
@property(retain, nonatomic) KTSignedMutationTimestamp *smt; // @dynamic smt;

@end

