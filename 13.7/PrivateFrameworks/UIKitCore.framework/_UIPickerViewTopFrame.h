//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIPickerViewTopFrame : UIView
{
    UIImage *_leftImage;
    UIImage *_middleImage;
    UIImage *_rightImage;
    double _inset;
    double _shift;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)setShift:(double)arg1;
- (void)setInset:(double)arg1;
- (void)setLeftImage:(id)arg1 middleImage:(id)arg2 rightImage:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

