//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@class SVPlaybackCoordinator;
@protocol SVVideo;

@protocol SVPlaybackCoordinatorFactory <NSObject>
- (SVPlaybackCoordinator *)createPlaybackCoordinatorForVideo:(id <SVVideo>)arg1;
@end

