//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLAWDBaseTracker.h>

@interface PMLAWDSessionTracker : PMLAWDBaseTracker
{
}

+ (id)trackerForModelName:(id)arg1 modelVersion:(id)arg2;
- (void)trackSessionWithCovariates:(id)arg1 label:(unsigned long long)arg2 locale:(id)arg3 supervisionType:(unsigned long long)arg4;
- (void)trackSessionWithCovariates:(id)arg1 label:(unsigned long long)arg2 locale:(id)arg3;

@end

