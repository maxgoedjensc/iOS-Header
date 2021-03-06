//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableOrderedSet;

@interface UIPasteConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableOrderedSet *_acceptableTypes;
}

+ (_Bool)supportsSecureCoding;
+ (id)pasteConfigurationWithAcceptableTypes:(id)arg1;
+ (id)_pasteConfigurationForAcceptingClasses:(id)arg1;
+ (id)pasteConfigurationForAcceptingClasses:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *acceptableTypes; // @dynamic acceptableTypes;
@property(copy, nonatomic) NSArray *acceptableTypeIdentifiers; // @dynamic acceptableTypeIdentifiers;
- (id)initWithAcceptableTypes:(id)arg1;
- (id)initWithAcceptableTypeIdentifiers:(id)arg1;
- (void)addTypeIdentifiersForAcceptingClass:(Class)arg1;
- (id)initWithTypeIdentifiersForAcceptingClass:(Class)arg1;
- (void)addAcceptableTypeIdentifiers:(id)arg1;
- (id)init;

@end

