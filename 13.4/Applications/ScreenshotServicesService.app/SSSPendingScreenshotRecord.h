//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SSSScreenshot;

@interface SSSPendingScreenshotRecord : NSObject
{
    SSSScreenshot *_screenshot;
    CDUnknownBlockType _deliveryCompletionBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType deliveryCompletionBlock; // @synthesize deliveryCompletionBlock=_deliveryCompletionBlock;
@property(retain, nonatomic) SSSScreenshot *screenshot; // @synthesize screenshot=_screenshot;
- (id)initWithScreenshot:(id)arg1 deliveryCompletionBlock:(CDUnknownBlockType)arg2;

@end

