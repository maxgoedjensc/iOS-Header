//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface GKQuadtreeNode : NSObject
{
    struct GKCQuadTreeNode<NSObject> *_cQuadTreeNode;
    struct GKQuad _quad;
}

@property(readonly, nonatomic) struct GKQuad quad; // @synthesize quad=_quad;
- (void)setCQuadTreeNode:(void *)arg1;
- (void *)cQuadTreeNode;
- (MISSING_TYPE *)max;
- (MISSING_TYPE *)min;

@end

