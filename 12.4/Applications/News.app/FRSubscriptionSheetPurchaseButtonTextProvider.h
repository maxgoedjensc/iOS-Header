//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRPurchaseButtonTextProvider-Protocol.h"

@class FCPurchase, NSString;

@interface FRSubscriptionSheetPurchaseButtonTextProvider : NSObject <FRPurchaseButtonTextProvider>
{
    FCPurchase *_purchase;
}

@property(retain, nonatomic) FCPurchase *purchase; // @synthesize purchase=_purchase;
- (void).cxx_destruct;
- (void)buttonTextWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPurchase:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

