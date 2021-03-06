//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CarCardContent-Protocol.h"

@class CarFocusableButton, NSArray, NSLayoutConstraint, NSString, UILabel, UIView;
@protocol CarCompressionTestCardDelegate;

__attribute__((visibility("hidden")))
@interface CarCompressionTestCardViewController : UIViewController <CarCardContent>
{
    NSArray *_priorities;
    NSArray *_priorityNames;
    float _spacerPriority;
    id <CarCompressionTestCardDelegate> _delegate;
    double _spacerHeight;
    UIView *_spacerView;
    NSLayoutConstraint *_spacerHeightConstraint;
    UILabel *_heightLabel;
    CarFocusableButton *_tallerButton;
    CarFocusableButton *_reloadButton;
    CarFocusableButton *_shorterButton;
    CarFocusableButton *_priorityButton;
    CarFocusableButton *_dismissButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CarFocusableButton *dismissButton; // @synthesize dismissButton=_dismissButton;
@property(retain, nonatomic) CarFocusableButton *priorityButton; // @synthesize priorityButton=_priorityButton;
@property(retain, nonatomic) CarFocusableButton *shorterButton; // @synthesize shorterButton=_shorterButton;
@property(retain, nonatomic) CarFocusableButton *reloadButton; // @synthesize reloadButton=_reloadButton;
@property(retain, nonatomic) CarFocusableButton *tallerButton; // @synthesize tallerButton=_tallerButton;
@property(retain, nonatomic) UILabel *heightLabel; // @synthesize heightLabel=_heightLabel;
@property(retain, nonatomic) NSLayoutConstraint *spacerHeightConstraint; // @synthesize spacerHeightConstraint=_spacerHeightConstraint;
@property(retain, nonatomic) UIView *spacerView; // @synthesize spacerView=_spacerView;
@property(nonatomic) float spacerPriority; // @synthesize spacerPriority=_spacerPriority;
@property(nonatomic) double spacerHeight; // @synthesize spacerHeight=_spacerHeight;
@property(nonatomic) __weak id <CarCompressionTestCardDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *focusOrderSubItems;
- (void)_incrementPriority;
- (void)_disappearAndReturn;
- (void)_dismiss;
- (void)_decreaseHeight;
- (void)_increaseHeight;
- (void)viewDidLayoutSubviews;
- (void)_updateLabel;
- (id)_buttonWithTitle:(id)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(nonatomic) struct CGSize availableCardSize;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property(readonly) Class superclass;

@end

