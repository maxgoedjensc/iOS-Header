//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CALayer, UIView, UIWebOverflowScrollView;

__attribute__((visibility("hidden")))
@interface UIWebOverflowScrollViewInfo : NSObject
{
    UIWebOverflowScrollView *_scrollView;
    CALayer *_scrollViewLayer;
    UIView *_oldSuperview;
}

@property(retain, nonatomic) UIView *oldSuperview; // @synthesize oldSuperview=_oldSuperview;
@property(retain, nonatomic) UIWebOverflowScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)dealloc;
- (id)initWithScrollView:(id)arg1;

@end

