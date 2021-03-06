//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface GEOAvailableExperiment : NSObject
{
    NSString *_identifier;
    NSString *_name;
    NSMutableArray *_branches;
}

@property(readonly, nonatomic) NSArray *branches; // @synthesize branches=_branches;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)_branchForLabel:(id)arg1;
- (void)_addBranch:(id)arg1;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;

@end

