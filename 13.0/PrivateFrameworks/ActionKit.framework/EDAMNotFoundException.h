//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/FATException.h>

@class NSString;

@interface EDAMNotFoundException : FATException
{
    NSString *_identifier;
    NSString *_key;
}

+ (id)structFields;
+ (id)structName;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

@end

