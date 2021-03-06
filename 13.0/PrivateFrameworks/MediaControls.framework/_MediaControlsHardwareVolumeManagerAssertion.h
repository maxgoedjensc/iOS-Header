//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaControls/MediaControlsInvalidatable-Protocol.h>

@class MediaControlsHardwareVolumeManager, NSString;

__attribute__((visibility("hidden")))
@interface _MediaControlsHardwareVolumeManagerAssertion : NSObject <MediaControlsInvalidatable>
{
    MediaControlsHardwareVolumeManager *_volumeManager;
}

@property(nonatomic) __weak MediaControlsHardwareVolumeManager *volumeManager; // @synthesize volumeManager=_volumeManager;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

