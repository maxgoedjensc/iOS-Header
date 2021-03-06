//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKLegendView, NSArray, NSMutableArray, NSMutableDictionary, _HKGraphViewAxisAnnotationHandler, _HKGraphViewSelectionContext;

@interface _HKGraphViewSeriesGroup : NSObject
{
    NSMutableDictionary *_zoomToSeriesMapping;
    NSMutableArray *_currentSeries;
    _HKGraphViewSelectionContext *_selectionContext;
    _HKGraphViewAxisAnnotationHandler *_axisAnnotationHandler;
    NSArray *_axesToShowSimultaneously;
    HKLegendView *_legendView;
    struct CGSize _lastLegendSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize lastLegendSize; // @synthesize lastLegendSize=_lastLegendSize;
@property(retain, nonatomic) HKLegendView *legendView; // @synthesize legendView=_legendView;
@property(retain, nonatomic) NSArray *axesToShowSimultaneously; // @synthesize axesToShowSimultaneously=_axesToShowSimultaneously;
@property(retain, nonatomic) _HKGraphViewAxisAnnotationHandler *axisAnnotationHandler; // @synthesize axisAnnotationHandler=_axisAnnotationHandler;
@property(retain, nonatomic) _HKGraphViewSelectionContext *selectionContext; // @synthesize selectionContext=_selectionContext;
@property(retain, nonatomic) NSMutableArray *currentSeries; // @synthesize currentSeries=_currentSeries;
@property(retain, nonatomic) NSMutableDictionary *zoomToSeriesMapping; // @synthesize zoomToSeriesMapping=_zoomToSeriesMapping;
- (id)init;

@end

