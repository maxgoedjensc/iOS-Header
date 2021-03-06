//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ContentKit/WFContentItemClass-Protocol.h>

@interface WFEKParticipantContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)defaultSourceForRepresentation:(id)arg1;
+ (id)countDescription;
+ (id)pluralFilterDescription;
+ (id)filterDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)contentCategories;
+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)possibleStatuses;
+ (id)possibleRoles;
+ (id)propertyBuilders;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(id)arg1;
- (_Bool)isCurrentUser;
- (id)status;
- (id)role;
- (_Bool)canGenerateRepresentationForType:(id)arg1;
- (void)generateObjectRepresentation:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (_Bool)canGenerateContact;
- (id)participant;

@end

