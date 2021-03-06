//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreImage/CIGVRenderer-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface DOTRenderer : NSObject <CIGVRenderer>
{
    struct __sFILE *file;
    NSURL *fileURL;
    NSString *fileTitle;
    _Bool drawEdgesFirst;
    int direction;
    struct CGSize separation;
}

- (void)setDrawEdgesFirst:(_Bool)arg1;
@property(readonly) _Bool drawEdgesFirst;
- (void)setSeparation:(struct CGSize)arg1;
@property(readonly) struct CGSize separation;
- (void)setDirection:(int)arg1;
@property(readonly) int direction;
- (void)flushRender;
- (void)drawEdge:(id)arg1 withPath:(id)arg2;
- (void)drawNode:(id)arg1;
- (_Bool)setCanvasWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setFileTitle:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

