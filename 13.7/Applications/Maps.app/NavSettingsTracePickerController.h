//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "TracePickerController.h"

#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class NSString, UIBarButtonItem, UIToolbar;

__attribute__((visibility("hidden")))
@interface NavSettingsTracePickerController : TracePickerController <MFMailComposeViewControllerDelegate>
{
    _Bool _showingPlayButton;
    UIToolbar *_toolbar;
    UIBarButtonItem *_deleteButtonItem;
    UIBarButtonItem *_deleteAllButtonItem;
}

+ (Class)_mfMailComposeViewController;
+ (id)navigationDestinationTitle;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_showDeleteFileSheetForTraceNames:(id)arg1;
- (void)_showDeleteFileSheetForDeleteAll;
- (void)_showDeleteFileSheet;
- (id)tracePickerOptionsForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)updateTracePickerOptions;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

