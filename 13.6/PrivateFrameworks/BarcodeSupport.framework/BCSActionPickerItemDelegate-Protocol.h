//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BarcodeSupport/NSObject-Protocol.h>

@class BCSActionPickerItem, UIAlertController;

@protocol BCSActionPickerItemDelegate <NSObject>
- (void)actionPickerItem:(BCSActionPickerItem *)arg1 didDismissAlertController:(UIAlertController *)arg2;
- (UIAlertController *)actionPickerItemAlertController:(BCSActionPickerItem *)arg1;
@end

