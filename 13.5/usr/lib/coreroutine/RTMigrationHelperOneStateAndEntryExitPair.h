//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTStateModelEntryExit, RTStateModelOneState;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject
{
    RTStateModelOneState *_oneState;
    RTStateModelEntryExit *_entryExit;
}

- (void).cxx_destruct;
@property(retain, nonatomic) RTStateModelEntryExit *entryExit; // @synthesize entryExit=_entryExit;
@property(retain, nonatomic) RTStateModelOneState *oneState; // @synthesize oneState=_oneState;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithOneState:(id)arg1 entryExit:(id)arg2;

@end

