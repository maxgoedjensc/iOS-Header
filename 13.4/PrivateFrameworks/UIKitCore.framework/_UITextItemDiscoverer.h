//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UITextItemDiscoverable-Protocol.h>

@class NSString, UIView;
@protocol UICoordinateSpace, _UITextContent;

__attribute__((visibility("hidden")))
@interface _UITextItemDiscoverer : NSObject <_UITextItemDiscoverable>
{
    UIView<_UITextContent> *_view;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIView<_UITextContent> *view; // @synthesize view=_view;
- (struct _NSRange)_nsrangeForTextRange:(id)arg1;
- (id)_anyTextItemConstrainedToLineAtPoint:(struct CGPoint)arg1;
- (_Bool)hasTextItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)textItemsOfType:(long long)arg1 inTextRange:(id)arg2;
- (id)visibleTextRange;
- (struct CGRect)_visibleBounds;
- (id)_textReferenceView;
@property(readonly, nonatomic) id <UICoordinateSpace> textItemCoordinateSpace;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

