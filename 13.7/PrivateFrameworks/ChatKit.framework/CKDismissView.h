//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol CKDismissViewDelegate;

@interface CKDismissView : UIView
{
    id <CKDismissViewDelegate> _delegate;
    NSArray *_passthroughViews;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *passthroughViews; // @synthesize passthroughViews=_passthroughViews;
@property(nonatomic) __weak id <CKDismissViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

