//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITabBarController.h>

@class PKPaymentTransaction, PKTransactionCloudKitDebugDetailsViewController, UIBarButtonItem;

@interface PKTransactionDebugDetailsTabBarController : UITabBarController
{
    UIBarButtonItem *_shareButton;
    PKPaymentTransaction *_transaction;
    PKTransactionCloudKitDebugDetailsViewController *_cloudKitViewController;
}

- (void).cxx_destruct;
- (void)_handleShareButton:(id)arg1;
- (id)initWithTransaction:(id)arg1;

@end

