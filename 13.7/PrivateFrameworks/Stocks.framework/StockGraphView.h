//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Stocks/GraphRenderOperationDelegate-Protocol.h>

@class GraphRenderOperation, LineGraphView, NSArray, NSMutableArray, StockChartData, StockChartDisplayMode, VolumeGraphView;
@protocol StockGraphViewContainer;

@interface StockGraphView : UIView <GraphRenderOperationDelegate>
{
    LineGraphView *_lineView;
    VolumeGraphView *_volumeView;
    UIView<StockGraphViewContainer> *_chartViewDelegate;
    StockChartData *_chartData;
    int _valueIndex;
    int _valueCount;
    struct CGPoint *_points;
    struct CGPoint *_values;
    NSMutableArray *_linePointCounts;
    NSArray *_dottedLinePositions;
    NSArray *_dottedLinePositionsForStyleOnly;
    unsigned int _dataSize;
    unsigned int _dataCount;
    CDStruct_b5bb7d6f *_volumeBars;
    unsigned int _volumeSize;
    unsigned int _volumeCount;
    double _volumeBarWidth;
    unsigned long long _maxVolume;
    GraphRenderOperation *_renderOperation;
    _Bool _isRendered;
    StockChartDisplayMode *_displayMode;
    struct UIEdgeInsets _graphInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StockChartDisplayMode *displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) struct UIEdgeInsets graphInsets; // @synthesize graphInsets=_graphInsets;
@property(readonly, nonatomic) _Bool isRendered; // @synthesize isRendered=_isRendered;
@property(nonatomic) __weak UIView<StockGraphViewContainer> *chartViewDelegate; // @synthesize chartViewDelegate=_chartViewDelegate;
- (void)dealloc;
- (struct CGRect)volumeBarRectNearestToPoint:(struct CGPoint)arg1;
- (CDStruct_d4d9707c)plottedPointNearestToPoint:(struct CGPoint *)arg1;
- (struct CGPoint)rightmostPlottedPoint;
- (void)loadStockChartData:(id)arg1;
- (void)clearData;
- (void)resizeSelectedVolumeClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (void)resizeSelectedLineClipViewWithLeftX:(double)arg1 rightX:(double)arg2;
- (void)graphRenderOperationDidFinish:(id)arg1;
- (void)recomputePathsAndRenderIfNeededForSize:(struct CGSize)arg1;
- (void)cancelRenderOperation;
@property(readonly, nonatomic) _Bool isRendering;
- (void)readyForDisplayFromChartData;
- (void)_processGraphDataForWidth:(double)arg1;
- (unsigned long long)_normalizedAccumulatedVolumeInDataRange:(struct CGPoint)arg1;
- (void)_finishCurrentLine;
- (void)clearPaths;
- (struct CGRect)_trueGraphPointsRegion;
- (double)_timeAtPosition:(double)arg1;
- (float)_priceAtTime:(double)arg1 dataPosition:(double *)arg2;
- (void)setEvenlySpacedDottedLinePositionsWithCount:(unsigned long long)arg1;
- (void)setDottedLinePositionsWithLabelInfo:(id)arg1;
- (void)setShowingSelectedVolumeRegion:(_Bool)arg1;
- (void)setShowingSelectedLine:(_Bool)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)_layoutSubviews;
- (struct CGRect)_volumeViewFrameForBoundsSize:(struct CGSize)arg1;
- (struct CGRect)_lineViewFrameForBoundsSize:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

