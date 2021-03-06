//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

@class CNInstantMessageAddress;

__attribute__((visibility("hidden")))
@interface CNInstantMessageAddressContactPredicate : CNPredicate
{
    CNInstantMessageAddress *_imAddress;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CNInstantMessageAddress *imAddress; // @synthesize imAddress=_imAddress;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)initWithInstantMessageAddress:(id)arg1;

@end

