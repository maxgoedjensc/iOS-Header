//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "LUIViewController.h"

#import "LUIVibrantButtonDisplaying-Protocol.h"

@class NSString, SBUIVibrantButton;

@interface LUIMajorViewController : LUIViewController <LUIVibrantButtonDisplaying>
{
    SBUIVibrantButton *_bottomLeftVibrantButton;
    SBUIVibrantButton *_bottomRightVibrantButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SBUIVibrantButton *bottomRightVibrantButton; // @synthesize bottomRightVibrantButton=_bottomRightVibrantButton;
@property(retain, nonatomic) SBUIVibrantButton *bottomLeftVibrantButton; // @synthesize bottomLeftVibrantButton=_bottomLeftVibrantButton;
- (void)_updateBottomRightVibrantButtonIfNeeded;
- (void)_updateBottomLeftVibrantButtonIfNeeded;
- (void)_initializeBottomRightVibrantButtonIfNeeded;
- (void)_initializeBottomLeftVibrantButtonIfNeeded;
- (id)titleForBottomRightVibrantButton;
- (id)titleForBottomLeftVibrantButton;
- (long long)imageTypeForBottomRightVibrantButton;
- (long long)imageTypeForBottomLeftVibrantButton;
- (_Bool)shouldShowBottomRightVibrantButton;
- (_Bool)shouldShowBottomLeftVibrantButton;
- (void)bottomRightVibrantButtonTapped:(id)arg1;
- (void)bottomLeftVibrantButtonTapped:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

