//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRFeedVideoManager, NFLHeadlineTileInfo, SXVideoPlayerViewController, SXVideoPlayerVisibilityMonitor;

@protocol FRFeedVideoManagerDataSource <NSObject>
- (SXVideoPlayerVisibilityMonitor *)feedVideoManager:(FRFeedVideoManager *)arg1 videoPlayerVisibilityMonitorForVideoPlayerViewController:(SXVideoPlayerViewController *)arg2;
- (void)feedVideoManager:(FRFeedVideoManager *)arg1 requestPrerollForHeadlineTileInfo:(NFLHeadlineTileInfo *)arg2 completionBlock:(void (^)(ADBannerView *, NSURL *, double))arg3;
@end

