//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/SBSceneLayoutInterfaceOrientedView-Protocol.h>

@class NSString, SBApplicationSceneView, SBLayoutElement, SBOrientationTransformWrapperView;

@interface SBSceneLayoutElementAnimationWrapperView : UIView <SBSceneLayoutInterfaceOrientedView>
{
    SBLayoutElement *_layoutElement;
    SBApplicationSceneView *_appView;
    SBOrientationTransformWrapperView *_orientedView;
}

@property(readonly, nonatomic) SBApplicationSceneView *appView; // @synthesize appView=_appView;
@property(readonly, nonatomic) SBLayoutElement *layoutElement; // @synthesize layoutElement=_layoutElement;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long layoutOrientation;
- (void)willMoveToSuperview:(id)arg1;
- (void)addContentView:(id)arg1;
- (void)invalidate;
- (void)layoutSubviews;
@property(readonly, copy) NSString *description;
- (id)initWithLayoutElement:(id)arg1 appView:(id)arg2;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

