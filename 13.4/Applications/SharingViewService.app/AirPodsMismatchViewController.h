//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SVSBaseViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSString, UIImageView, UILabel, _TtC18SharingViewService20SVSAdjustedImageView;

@interface AirPodsMismatchViewController : SVSBaseViewController <UIGestureRecognizerDelegate>
{
    UILabel *_leftMajorLabel;
    UILabel *_leftMinorLabel;
    UIImageView *_leftPointerImageView;
    UILabel *_rightMajorLabel;
    UILabel *_rightMinorLabel;
    UIImageView *_rightPointerImageView;
    _TtC18SharingViewService20SVSAdjustedImageView *_productImageView;
    NSDictionary *_userInfo;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void)handleTapOutsideView:(id)arg1;
- (void)handleDismissButton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

