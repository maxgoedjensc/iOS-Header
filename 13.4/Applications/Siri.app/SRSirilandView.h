//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class SiriUIKeyline, SiriUIPassThroughHitTestView;
@protocol SRSirilandViewDelegate;

@interface SRSirilandView : UIView
{
    UIView *_contentView;
    SiriUIPassThroughHitTestView *_clipView;
    UIView *_conversationView;
    SiriUIKeyline *_keyline;
    _Bool _showingDeviceLockView;
    _Bool _masksContent;
    _Bool _pageTransitionKeylineVisible;
    id <SRSirilandViewDelegate> _delegate;
    struct UIOffset _topChevronOffset;
}

+ (id)sirilandView;
- (void).cxx_destruct;
@property(nonatomic, getter=isPageTransitionKeylineVisible) _Bool pageTransitionKeylineVisible; // @synthesize pageTransitionKeylineVisible=_pageTransitionKeylineVisible;
@property(nonatomic) _Bool masksContent; // @synthesize masksContent=_masksContent;
@property(nonatomic) __weak id <SRSirilandViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isShowingDeviceLockView) _Bool showingDeviceLockView; // @synthesize showingDeviceLockView=_showingDeviceLockView;
@property(retain, nonatomic) UIView *conversationView; // @synthesize conversationView=_conversationView;
@property(nonatomic) struct UIOffset topChevronOffset; // @synthesize topChevronOffset=_topChevronOffset;
- (void)statusBarFrameDidChange;
- (_Bool)_keylineIsVisible;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

