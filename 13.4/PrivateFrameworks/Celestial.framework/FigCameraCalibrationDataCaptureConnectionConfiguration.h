//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Celestial/FigCaptureConnectionConfiguration.h>

@interface FigCameraCalibrationDataCaptureConnectionConfiguration : FigCaptureConnectionConfiguration
{
    _Bool _mirroringEnabled;
    int _orientation;
}

@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool mirroringEnabled; // @synthesize mirroringEnabled=_mirroringEnabled;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;

@end

