//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LUIUserSwitchTestOngoingIndicatorView, UIView;

@interface LUIUserSwitchTestOngoingIndicatorController : NSObject
{
    CDUnknownBlockType _cancelButtonActionBlock;
    UIView *_baseView;
    LUIUserSwitchTestOngoingIndicatorView *_indicatorView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LUIUserSwitchTestOngoingIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property(nonatomic) __weak UIView *baseView; // @synthesize baseView=_baseView;
@property(copy, nonatomic) CDUnknownBlockType cancelButtonActionBlock; // @synthesize cancelButtonActionBlock=_cancelButtonActionBlock;
- (void)_showIndicatorViewAnimated;
- (void)_moveElementsToView:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)hide;
- (void)show;
- (id)initWithCancelButtonAction:(CDUnknownBlockType)arg1;

@end

