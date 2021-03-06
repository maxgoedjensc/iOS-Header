//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PushMessageConsumer-Protocol.h"

@class IAPInfoDatabaseStore, NSString;
@protocol IAPInfoBagContract, OS_dispatch_queue;

@interface IAPInfoManager : NSObject <PushMessageConsumer>
{
    id <IAPInfoBagContract> _bagContract;
    IAPInfoDatabaseStore *_databaseStore;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    _Bool _currentlyUpdating;
}

+ (double)_updatePollingFrequencyInterval;
+ (double)_forcedRefreshInterval;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)_updateDatabaseWithRequestResponse:(id)arg1 error:(id *)arg2;
- (void)_sendUpdateRequestWithAccount:(id)arg1 token:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_sendItemsRequestWithAccount:(id)arg1 token:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_refreshIAPsForActiveAccountIfAllowedWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_forceRefreshIAPsForActiveAccountWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_handleAccountChangedNotification;
- (id)_getUpdateRequestContextForAccount:(id)arg1 withToken:(id)arg2 error:(id *)arg3;
- (id)_getItemsRequestContextForAccount:(id)arg1 withToken:(id)arg2 error:(id *)arg3;
- (void)_beginObservingAccountChangeNotification;
- (void)pushService:(id)arg1 didReceiveMessage:(id)arg2;
- (void)removeAllIAPsWithToken:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)refreshIAPsForActiveAccountIfNeededWithToken:(id)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)refreshIAPsForActiveAccountWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getIAPsForActiveAccountWithToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getIAPsForActiveAccountWithAppAdamIDs:(id)arg1 token:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getIAPsForActiveAccountWithAdamIDs:(id)arg1 token:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)getIAPsForAccountID:(id)arg1 withToken:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

