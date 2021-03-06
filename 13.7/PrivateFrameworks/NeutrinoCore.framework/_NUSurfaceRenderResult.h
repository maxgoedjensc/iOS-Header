//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NUImageRenderResult.h>

#import <NeutrinoCore/NUSurfaceRenderResult-Protocol.h>

@class NSString, NUImageGeometry, NURegion;
@protocol NURenderStatistics, NUSurfaceImage;

@interface _NUSurfaceRenderResult : _NUImageRenderResult <NUSurfaceRenderResult>
{
    id <NUSurfaceImage> _image;
}

- (void).cxx_destruct;
@property(retain) id <NUSurfaceImage> image; // @synthesize image=_image;
@property(readonly, copy) NSString *debugDescription;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) NUImageGeometry *geometry;
@property(readonly) unsigned long long hash;
@property(readonly) NURegion *region;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end

