//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIWebSelectedItemPrivate-Protocol.h>

@class DOMHTMLOptGroupElement;

__attribute__((visibility("hidden")))
@interface UIDOMHTMLOptGroupSelectedItem : NSObject <UIWebSelectedItemPrivate>
{
    DOMHTMLOptGroupElement *_node;
}

@property(retain, nonatomic) DOMHTMLOptGroupElement *_node; // @synthesize _node;
- (void)dealloc;
- (void)unselect;
- (void)setSelected:(_Bool)arg1;
- (_Bool)isGroup;
- (_Bool)selected;
- (id)node;
- (id)initWithHTMLOptGroupNode:(id)arg1;

@end

