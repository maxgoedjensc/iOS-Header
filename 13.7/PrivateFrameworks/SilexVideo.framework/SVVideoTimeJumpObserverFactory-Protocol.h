//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SilexVideo/NSObject-Protocol.h>

@protocol SVVideo, SVVideoTimeJumpObserving;

@protocol SVVideoTimeJumpObserverFactory <NSObject>
- (id <SVVideoTimeJumpObserving>)createTimeJumpObserverForVideo:(id <SVVideo>)arg1;
@end

