//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNPropertyPlaceholderCell.h>

@protocol CNPropertyCellDelegate;

__attribute__((visibility("hidden")))
@interface CNLinkedCardsPlaceholderCell : CNPropertyPlaceholderCell
{
    id <CNPropertyCellDelegate> _delegate;
}

@property(nonatomic) __weak id <CNPropertyCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)performDefaultAction;

@end

