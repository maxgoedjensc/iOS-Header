//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionReusableView.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/_UILayoutEngineSuspending-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UIView, _UIFloatingContentView;

@interface UICollectionViewCell : UICollectionReusableView <UIGestureRecognizerDelegate, _UILayoutEngineSuspending>
{
    UIView *_contentView;
    UIView *_backgroundView;
    UIView *_selectedBackgroundView;
    UILongPressGestureRecognizer *_menuGesture;
    id _selectionSegueTemplate;
    id _highlightingSupport;
    struct {
        unsigned int selected:1;
        unsigned int highlighted:1;
        unsigned int showingMenu:1;
        unsigned int clearSelectionWhenMenuDisappears:1;
        unsigned int waitingForSelectionAnimationHalfwayPoint:1;
        unsigned int contentViewWantsSystemLayoutSizeFittingSize:1;
    } _collectionCellFlags;
    long long _dragState;
    _Bool _selected;
    _Bool _highlighted;
    _Bool _isLayoutEngineSuspended;
    _Bool _dragging;
    _UIFloatingContentView *_focusedFloatingContentView;
    long long _focusStyle;
}

+ (Class)_contentViewClass;
- (void).cxx_destruct;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic, getter=_focusStyle, setter=_setFocusStyle:) long long focusStyle; // @synthesize focusStyle=_focusStyle;
@property(readonly, nonatomic, getter=_focusedFloatingContentView) _UIFloatingContentView *focusedFloatingContentView; // @synthesize focusedFloatingContentView=_focusedFloatingContentView;
@property(nonatomic, getter=_isLayoutEngineSuspended, setter=_setLayoutEngineSuspended:) _Bool _layoutEngineSuspended; // @synthesize _layoutEngineSuspended=_isLayoutEngineSuspended;
@property(retain, nonatomic) UIView *selectedBackgroundView; // @synthesize selectedBackgroundView=_selectedBackgroundView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;
- (void)_didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (_Bool)canBecomeFocused;
- (_Bool)_canFocusProgrammatically;
- (void)_updateFocusedFloatingContentControlStateInContext:(id)arg1 withAnimationCoordinator:(id)arg2 animated:(_Bool)arg3;
- (void)_updateFocusedFloatingContentControlStateAnimated:(_Bool)arg1;
- (void)_configureFocusedFloatingContentView:(id)arg1;
- (void)_ensureFocusedFloatingContentView;
- (void)setEditing:(_Bool)arg1;
- (_Bool)isEditing;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (_Bool)_forwardsSystemLayoutFittingSizeToContentView:(id)arg1;
- (void)setSemanticContentAttribute:(long long)arg1;
- (void)layoutSubviews;
- (id)_selectionSegueTemplate;
- (void)_setSelectionSegueTemplate:(id)arg1;
- (void)paste:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)_performAction:(SEL)arg1 sender:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)_handleMenuGesture:(id)arg1;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)_isUsingOldStyleMultiselection;
- (_Bool)_shouldSaveOpaqueStateForView:(id)arg1;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void)_setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setLayoutAttributes:(id)arg1;
- (void)_updateGhostedAppearance;
- (void)dragStateDidChange:(long long)arg1;
@property(nonatomic, getter=_dragState, setter=_setDragState:) long long _dragState;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
- (void)_setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_teardownHighlightingSupportIfReady;
- (void)_setupHighlightingSupport;
@property(readonly, nonatomic, getter=_selectionAnimationDuration) double selectionAnimationDuration;
- (_Bool)_descendantsShouldHighlight;
- (_Bool)_highlightDescendantsWhenSelected;
- (void)_updateBackgroundView;
- (void)_monitoredView:(id)arg1 didMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_monitoredView:(id)arg1 willMoveFromSuperview:(id)arg2 toSuperview:(id)arg3;
- (void)_setOpaque:(_Bool)arg1 forSubview:(id)arg2;
- (void)_updateHighlightColorsForAnimationHalfwayPoint;
- (void)_updateHighlightColorsForView:(id)arg1 highlight:(_Bool)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)_encodableSubviews;
@property(readonly, nonatomic, getter=_contentViewInset) struct UIEdgeInsets contentViewInset;
- (void)_setContentView:(id)arg1 addToHierarchy:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

