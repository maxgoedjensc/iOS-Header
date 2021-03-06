//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "MFMessageComposeViewControllerDelegate-Protocol.h"
#import "PKServiceSubcredentialMessageComposeViewControllerProtocol-Protocol.h"

@class MFMessageComposeViewController, NSString;

@interface PKServiceSubcredentialMessageComposeViewController : UIViewController <PKServiceSubcredentialMessageComposeViewControllerProtocol, MFMessageComposeViewControllerDelegate>
{
    MFMessageComposeViewController *_messageComposeViewController;
}

+ (id)_remoteViewControllerInterface;
+ (id)_exportedInterface;
- (void).cxx_destruct;
@property(retain, nonatomic) MFMessageComposeViewController *messageComposeViewController; // @synthesize messageComposeViewController=_messageComposeViewController;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(long long)arg2;
- (void)setSharingRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setDisplayPropertiesWithScreenSize:(struct CGSize)arg1 scale:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

