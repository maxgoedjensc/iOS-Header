//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSCopying-Protocol.h"

@class ChromeViewController, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ChromeModeOperation : NSOperation <NSCopying>
{
    NSMutableArray *_coordinationBlocks;
    CDUnknownBlockType _fallbackBlock;
    ChromeViewController *_chromeViewController;
    _Bool _locked;
}

- (void).cxx_destruct;
- (void)setFallbackCoordinationBlock:(CDUnknownBlockType)arg1;
- (void)addModeCoordinationBlock:(CDUnknownBlockType)arg1;
- (void)main;
@property(readonly, nonatomic, getter=isLocked) _Bool locked;
- (_Bool)isConcurrent;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithChromeViewController:(id)arg1 fallbackCoordinationBlock:(CDUnknownBlockType)arg2;

@end

