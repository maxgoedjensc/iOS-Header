//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface MFCardAction : NSObject
{
    _Bool _handlerEnabled;
    _Bool _shouldDismissCardBeforeExecuteHandler;
    NSString *_imageName;
    UIColor *_tintColor;
    NSString *_title;
    NSString *_shortTitle;
    CDUnknownBlockType _handler;
}

+ (id)cardActionWithTitle:(id)arg1 shortTitle:(id)arg2 imageName:(id)arg3 tintColor:(id)arg4 handlerEnabled:(_Bool)arg5 handler:(CDUnknownBlockType)arg6;
+ (id)cardActionWithTitle:(id)arg1 shortTitle:(id)arg2 imageName:(id)arg3 tintColor:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldDismissCardBeforeExecuteHandler; // @synthesize shouldDismissCardBeforeExecuteHandler=_shouldDismissCardBeforeExecuteHandler;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) _Bool handlerEnabled; // @synthesize handlerEnabled=_handlerEnabled;
@property(copy, nonatomic) NSString *shortTitle; // @synthesize shortTitle=_shortTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void)executeHandler;
- (void)executeHandlerIfEnabled;

@end

