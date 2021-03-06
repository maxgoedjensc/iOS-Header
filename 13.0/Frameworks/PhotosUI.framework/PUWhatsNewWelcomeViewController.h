//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

#import <PhotosUI/PUWelcomeProtocol-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface PUWhatsNewWelcomeViewController : OBWelcomeController <PUWelcomeProtocol>
{
    CDUnknownBlockType __completionHandler;
}

+ (void)resetLastPresentationInfo;
+ (void)presentIfNecessaryFromViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic, setter=_setCompletionHandler:) CDUnknownBlockType _completionHandler; // @synthesize _completionHandler=__completionHandler;
- (void).cxx_destruct;
- (void)_handleContinueButton:(id)arg1;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

