//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/AceObject.h>

#import <SAObjects/SAAceComparable-Protocol.h>
#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString;

@interface SARelatedName : AceObject <SAAceSerializable, SAAceComparable>
{
}

+ (id)relatedNameWithDictionary:(id)arg1 context:(id)arg2;
+ (id)relatedName;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *label;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

