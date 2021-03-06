//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@interface CAMTouchingGestureRecognizer : UIGestureRecognizer
{
    unsigned long long __touchCount;
}

@property(nonatomic, setter=_setTouchCount:) unsigned long long _touchCount; // @synthesize _touchCount=__touchCount;
- (void)_decrementTouchesBy:(unsigned long long)arg1;
- (void)_incrementTouchesBy:(unsigned long long)arg1;
- (void)_updateStateFromTouchCount:(unsigned long long)arg1 toTouchCount:(unsigned long long)arg2;
- (void)cancelGesture;
- (void)reset;
- (void)setEnabled:(_Bool)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

