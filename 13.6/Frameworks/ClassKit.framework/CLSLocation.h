//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassKit/CLSObject.h>

#import <ClassKit/CLSContactsSearchable-Protocol.h>

@class NSPersonNameComponents, NSString;

@interface CLSLocation : CLSObject <CLSContactsSearchable>
{
    _Bool _isEditable;
    NSString *_locationName;
    NSString *_searchText;
    long long _sourceType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property _Bool isEditable; // @synthesize isEditable=_isEditable;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(copy, nonatomic) NSString *searchText; // @synthesize searchText=_searchText;
@property(copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
- (id)dictionaryRepresentation;
@property(readonly, nonatomic) NSString *displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;

// Remaining properties
@property(readonly, nonatomic) NSString *emailAddress;
@property(readonly, nonatomic) NSString *groupIdentifier;
@property(readonly, nonatomic) NSPersonNameComponents *nameComponents;

@end

