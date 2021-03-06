//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "CNContactPickerDelegate-Protocol.h"
#import "CNContactViewControllerDelegate-Protocol.h"
#import "RAPHomeWorkCoordinatorDelegate-Protocol.h"
#import "ShortcutEditSessionController-Protocol.h"

@class AddShortcutViewController, CNContact, CNLabeledValue, ContainerViewController, EditLocationViewController, EditShortcutViewController, MeCardShortcutViewController, NSString, RAPHomeWorkCoordinator, ShortcutEditSession, UIViewController;
@protocol ContaineeProtocol, ShortcutEditSessionControllerDelegate;

__attribute__((visibility("hidden")))
@interface ShortcutEditSessionControllerImpl : NSObject <CNContactPickerDelegate, CNContactViewControllerDelegate, RAPHomeWorkCoordinatorDelegate, ShortcutEditSessionController>
{
    AddShortcutViewController *_addShortcutViewController;
    EditShortcutViewController *_editShortcutViewController;
    EditLocationViewController *_refineCoordinateViewController;
    MeCardShortcutViewController *_meCardSetupViewController;
    UIViewController<ContaineeProtocol> *_presentingViewController;
    ShortcutEditSession *_shortcutEditSession;
    RAPHomeWorkCoordinator *_homeWorkCoordinator;
    CNContact *_meCardContact;
    CNLabeledValue *_addressToAdd;
    id <ShortcutEditSessionControllerDelegate> _delegate;
    ContainerViewController *_containerViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak ContainerViewController *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak id <ShortcutEditSessionControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (void)presentChoicePickerFrom:(id)arg1;
- (void)_showContactPicker;
- (void)_showContactCard:(id)arg1;
- (void)_createNewContactCard;
- (void)showMeCardWithAddress:(id)arg1 from:(id)arg2;
@property(readonly, nonatomic) CNContact *meCardContact;
- (void)closeViewController:(id)arg1;
- (void)removeShortcut:(id)arg1;
- (void)editShortcut:(id)arg1;
- (void)showAddContact:(id)arg1;
- (void)showAddShortcut:(id)arg1;
- (void)_doneLocationRefinement;
- (void)_closeLocationRefinement;
- (void)showRefineLocation:(id)arg1;
- (void)homeWorkCoordinator:(id)arg1 finishedRefiningCoordinate:(struct CLLocationCoordinate2D)arg2 withShortcut:(id)arg3;
- (void)homeWorkCoordinatorRequestsChangeAddress:(id)arg1 withShortcut:(id)arg2;
- (void)capturePresenter;
- (_Bool)shortcutsContainItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

