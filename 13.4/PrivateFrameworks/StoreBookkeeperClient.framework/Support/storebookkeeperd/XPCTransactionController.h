//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface XPCTransactionController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_openTransactions;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly) NSMutableArray *openTransactions; // @synthesize openTransactions=_openTransactions;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)endTransaction:(id)arg1;
- (_Bool)isInTransaction;
- (id)beginTransactionWithIdentifier:(id)arg1;
- (id)init;
- (id)_init;

@end

