//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBTextWelcomeController.h>

@interface HKFitnessDiagnosticsRequestViewController : OBTextWelcomeController
{
    CDUnknownBlockType _completionHandler;
}

+ (_Bool)needsRequestedPermission;
+ (void)presentInViewController:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)presentInViewController:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
- (void)dismissFitnessController;
- (void)_showDataCollectionAdditionalInfo;
- (void)_disableDataCollection;
- (void)_enableDataCollection;
- (void)viewDidLoad;
- (_Bool)shouldInlineButtonTray;

@end

