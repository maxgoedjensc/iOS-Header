//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPCAudioSpectrumObserver : NSObject
{
    struct _MPCAudioSpectrumAnalyzerBandInternal *_bands;
    unsigned long long _bandsStorageSize;
    long long _numberOfBands;
    CDUnknownBlockType _onUpdate;
}

+ (id)defaultObserver;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onUpdate; // @synthesize onUpdate=_onUpdate;
- (void)finishReport;
- (void)beginReport;
- (void)_resizeBandStorage;
- (float)averagePowerOfBandAtIndex:(long long)arg1 band:(out struct MPCAudioSpectrumAnalyzerBand *)arg2;
- (long long)addAnalysisBand:(struct MPCAudioSpectrumAnalyzerBand)arg1;
@property(readonly, nonatomic) long long numberOfBands; // @synthesize numberOfBands=_numberOfBands;
- (void)dealloc;

@end

