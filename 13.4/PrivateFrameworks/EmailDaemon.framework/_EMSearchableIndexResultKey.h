//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet;
@protocol EDSearchableCriterion;

__attribute__((visibility("hidden")))
@interface _EMSearchableIndexResultKey : NSObject
{
    id <EDSearchableCriterion> _criterion;
    NSIndexSet *_mailboxIDs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSIndexSet *mailboxIDs; // @synthesize mailboxIDs=_mailboxIDs;
@property(retain, nonatomic) id <EDSearchableCriterion> criterion; // @synthesize criterion=_criterion;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;

@end

