//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AACCore/AEPerformancePrimitives-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface AEConcretePerformancePrimitives : NSObject <AEPerformancePrimitives>
{
    NSString *_subsystem;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *subsystem; // @synthesize subsystem=_subsystem;
- (id)beginIntervalWithCategory:(id)arg1 name:(id)arg2;
- (id)initWithSubsystem:(id)arg1;

@end

