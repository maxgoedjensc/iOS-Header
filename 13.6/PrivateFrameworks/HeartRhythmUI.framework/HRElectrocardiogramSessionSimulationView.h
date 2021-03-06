//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HRElectrocardiogramSessionScreenView;

@interface HRElectrocardiogramSessionSimulationView : UIView
{
    _Bool _isLargeDevice;
    HRElectrocardiogramSessionScreenView *_screenView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HRElectrocardiogramSessionScreenView *screenView; // @synthesize screenView=_screenView;
@property(readonly, nonatomic) _Bool isLargeDevice; // @synthesize isLargeDevice=_isLargeDevice;
- (void)setTimeRemaining:(double)arg1;
@property(nonatomic) double cornerRadius;
- (void)layoutSubviews;
- (void)_setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 isLargeDevice:(_Bool)arg2;

@end

