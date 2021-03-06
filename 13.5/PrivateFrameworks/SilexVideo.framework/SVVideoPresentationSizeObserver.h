//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPresentationSizeObserving-Protocol.h>

@class NSString, SVKeyValueObserver;
@protocol SVPlayerItemObserving;

@interface SVVideoPresentationSizeObserver : NSObject <SVVideoPresentationSizeObserving>
{
    CDUnknownBlockType changeBlock;
    id <SVPlayerItemObserving> _playerItemObserver;
    SVKeyValueObserver *_presentationSizeObserver;
    struct CGSize _presentationSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize presentationSize; // @synthesize presentationSize=_presentationSize;
@property(readonly, nonatomic) SVKeyValueObserver *presentationSizeObserver; // @synthesize presentationSizeObserver=_presentationSizeObserver;
@property(readonly, nonatomic) id <SVPlayerItemObserving> playerItemObserver; // @synthesize playerItemObserver=_playerItemObserver;
@property(copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
- (id)initWithPlayerItemObserver:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

