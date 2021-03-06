//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMBalloonPluginDataSource.h>

@class CKBalloonView, CKMediaObject;

__attribute__((visibility("hidden")))
@interface CKImageBalloonPluginDatasource : IMBalloonPluginDataSource
{
    CKBalloonView *_balloonView;
    CKMediaObject *_mediaObject;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKMediaObject *mediaObject; // @synthesize mediaObject=_mediaObject;
@property(retain, nonatomic) CKBalloonView *balloonView; // @synthesize balloonView=_balloonView;
- (void)previewDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)imageBalloon;
- (void)dealloc;
- (id)initWithPluginPayload:(id)arg1;

@end

