//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebKitLegacy/WebDocumentText-Protocol.h>

@class NSArray, WAKView;

@protocol WebDocumentSelection <WebDocumentText>
- (WAKView *)selectionView;
- (struct CGRect)selectionImageRect;
- (struct CGImage *)selectionImageForcingBlackText:(_Bool)arg1;
- (struct CGRect)selectionRect;
- (NSArray *)selectionTextRects;
@end

