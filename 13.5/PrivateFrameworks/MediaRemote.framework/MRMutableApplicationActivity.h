//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRApplicationActivity.h>

#import <MediaRemote/NSSecureCoding-Protocol.h>

@class NSString;

@interface MRMutableApplicationActivity : MRApplicationActivity <NSSecureCoding>
{
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *secondaryApplicationDisplayID; // @dynamic secondaryApplicationDisplayID;
@property(copy, nonatomic) NSString *primaryApplicationDisplayID; // @dynamic primaryApplicationDisplayID;

@end

