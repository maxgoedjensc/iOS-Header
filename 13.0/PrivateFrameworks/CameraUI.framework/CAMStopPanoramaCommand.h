//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CameraUI/CAMCaptureCommand.h>

@interface CAMStopPanoramaCommand : CAMCaptureCommand
{
    _Bool __interrupted;
}

@property(readonly, nonatomic) _Bool _interrupted; // @synthesize _interrupted=__interrupted;
- (void)executeWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInterrupted:(_Bool)arg1;

@end

