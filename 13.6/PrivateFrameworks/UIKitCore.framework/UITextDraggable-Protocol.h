//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UITextInput-Protocol.h>

@class UIDragInteraction;
@protocol UITextDragDelegate;

@protocol UITextDraggable <UITextInput>
@property(nonatomic) long long textDragOptions;
@property(readonly, nonatomic, getter=isTextDragActive) _Bool textDragActive;
@property(readonly, nonatomic) UIDragInteraction *textDragInteraction;
@property(nonatomic) __weak id <UITextDragDelegate> textDragDelegate;
@end

