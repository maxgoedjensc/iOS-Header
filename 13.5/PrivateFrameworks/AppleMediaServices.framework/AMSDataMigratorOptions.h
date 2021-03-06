//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AMSDataMigratorOptions : NSObject
{
    NSString *_currentBuildVersion;
    NSString *_previousBuildVersion;
    unsigned long long _scenario;
}

+ (id)_stringFromOptionsArray:(id)arg1 atIndex:(unsigned long long)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long scenario; // @synthesize scenario=_scenario;
@property(copy, nonatomic) NSString *previousBuildVersion; // @synthesize previousBuildVersion=_previousBuildVersion;
@property(copy, nonatomic) NSString *currentBuildVersion; // @synthesize currentBuildVersion=_currentBuildVersion;
@property(readonly, nonatomic) NSArray *optionsArray;
- (id)initWithOptionsArray:(id)arg1;
- (id)init;

@end

