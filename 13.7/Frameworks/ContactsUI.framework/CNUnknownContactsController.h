//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactViewControllerDelegate-Protocol.h>
#import <ContactsUI/CNMultipleUnknownContactsViewControllerDelegate-Protocol.h>

@class CNContactStore, NSArray, NSString, UIViewController;
@protocol CNUnknownContactsControllerDelegate;

@interface CNUnknownContactsController : NSObject <CNContactViewControllerDelegate, CNMultipleUnknownContactsViewControllerDelegate>
{
    id <CNUnknownContactsControllerDelegate> _delegate;
    CNContactStore *_contactStore;
    NSArray *_contacts;
    UIViewController *_displayedController;
}

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *displayedController; // @synthesize displayedController=_displayedController;
@property(readonly, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) __weak id <CNUnknownContactsControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (_Bool)contactViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (_Bool)multipleUnknownContactsViewController:(id)arg1 shouldPerformDefaultActionForContactProperty:(id)arg2;
- (void)multipleUnknownContactsViewControllerDidComplete:(id)arg1;
- (id)viewController;
- (id)initWithContacts:(id)arg1 contactStore:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

