//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitUI/NSObject-Protocol.h>

@class NSDecimalNumber;

@protocol PKPaymentSetupPurchaseAmountViewDelegate <NSObject>
- (void)transferBalanceFromExistingCard;
- (void)didUpdateAmount:(NSDecimalNumber *)arg1 isValid:(_Bool)arg2;
- (void)shakeCard;
@end

