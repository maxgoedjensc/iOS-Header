//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UITextFieldAccessibility_super.h>

@interface UITextFieldAccessibility : __UITextFieldAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityCapturedImages;
- (id)_accessibilityNativeFocusPreferredElement;
- (_Bool)areChildrenFocused;
- (_Bool)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (id)accessibilityAttributedValue;
- (id)accessibilityValue;
- (id)_accessibilityGetValue;
- (_Bool)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)arg1;
- (id)_accessibilityTextFieldText;
- (id)accessibilityPlaceholderValue;
- (_Bool)accessibilityElementIsFocused;
- (id)_accessibilityPlaceholderValue:(_Bool)arg1;
- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (_Bool)isAccessibilityElement;
- (id)_accessibilityResponderElement;
- (id)accessibilityElements;
- (void)_clearButtonClicked:(id)arg1;
- (long long)_accessibilityCountAccessibleChildren:(id)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (void)dealloc;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (id)_accessibilityInternalFakeTextField:(_Bool)arg1;
- (id)_accessibilityInternalFakeTextField;
- (id)_accessibilityRightButtons;
- (id)_accessibilityLeftButtons;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityDragSourceDescriptors;
- (id)_accessibilityTextSelectionRectWithLargestVisualRangeFromCandidates:(id)arg1;
- (_Bool)_axTextFieldIsHidden;
- (unsigned long long)_accessibilityAutomationType;

@end

