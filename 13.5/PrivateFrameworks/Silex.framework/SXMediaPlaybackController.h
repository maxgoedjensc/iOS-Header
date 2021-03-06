//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXViewportChangeListener-Protocol.h>

@class NSString, SXViewport;
@protocol SXMediaPlaybackDelegate;

@interface SXMediaPlaybackController : NSObject <SXViewportChangeListener>
{
    id <SXMediaPlaybackDelegate> _mediaPlaybackDelegate;
    SXViewport *_viewport;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SXViewport *viewport; // @synthesize viewport=_viewport;
@property(nonatomic) __weak id <SXMediaPlaybackDelegate> mediaPlaybackDelegate; // @synthesize mediaPlaybackDelegate=_mediaPlaybackDelegate;
- (void)viewport:(id)arg1 appearStateChangedFromState:(unsigned long long)arg2;
- (void)registerMediaPlayBack:(id)arg1;
- (id)initWithViewport:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

