//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SPFinder/NSObject-Protocol.h>

@protocol SPFinderStateManagement <NSObject>
@property(copy, nonatomic) CDUnknownBlockType stateInfoChangedBlock;
- (void)stateInfoWithCompletion:(void (^)(SPFinderStateInfo *, NSError *))arg1;
- (void)start;
@end

