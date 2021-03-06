//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class HMDBackingStoreTransactionBlock, HMDService, HMDServiceTransaction, NSString, NSUUID;

@protocol HMDServiceOwner
- (HMDBackingStoreTransactionBlock *)backingStoreTransactionWithName:(NSString *)arg1;
- (HMDServiceTransaction *)createUpdateServiceTransationWithServiceUUID:(NSUUID *)arg1;
- (void)makeServiceNameConsistent:(HMDService *)arg1 withName:(NSString *)arg2 completionHandler:(void (^)(NSError *))arg3;
@end

