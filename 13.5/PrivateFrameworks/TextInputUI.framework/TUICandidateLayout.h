//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UICollectionViewLayout.h>

#import <TextInputUI/NSCopying-Protocol.h>

@class NSIndexPath, NSMutableArray, NSMutableDictionary, TUICandidateLayoutAttributes;

@interface TUICandidateLayout : UICollectionViewLayout <NSCopying>
{
    NSMutableArray *_candidateAttributes;
    NSMutableDictionary *_dummyCandidateAttributes;
    NSMutableArray *_lineAttributes;
    NSMutableArray *_slottedCellSeparatorAttributes;
    NSMutableArray *_groupHeaderAttributes;
    TUICandidateLayoutAttributes *_customHeaderAttributes;
    _Bool _dirty;
    _Bool _candidateNumberEnabled;
    _Bool _fillGridWithLines;
    _Bool _showsIndex;
    long long _rowType;
    long long _transitionState;
    long long _layoutOrientation;
    NSIndexPath *_oldFirstVisibleIndexPath;
    double _oldFirstVisibleOffset;
    double _customHeaderHeight;
    unsigned long long _columnsCount;
    double _singleSlottedCellMargin;
    struct CGPoint _gridLineOffset;
    struct UIEdgeInsets _gridPadding;
    struct UIEdgeInsets _gridLinePadding;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showsIndex; // @synthesize showsIndex=_showsIndex;
@property(nonatomic) _Bool fillGridWithLines; // @synthesize fillGridWithLines=_fillGridWithLines;
@property(nonatomic) struct CGPoint gridLineOffset; // @synthesize gridLineOffset=_gridLineOffset;
@property(nonatomic) struct UIEdgeInsets gridLinePadding; // @synthesize gridLinePadding=_gridLinePadding;
@property(nonatomic) struct UIEdgeInsets gridPadding; // @synthesize gridPadding=_gridPadding;
@property(nonatomic) double singleSlottedCellMargin; // @synthesize singleSlottedCellMargin=_singleSlottedCellMargin;
@property(nonatomic) unsigned long long columnsCount; // @synthesize columnsCount=_columnsCount;
@property(nonatomic) _Bool candidateNumberEnabled; // @synthesize candidateNumberEnabled=_candidateNumberEnabled;
@property(nonatomic) double customHeaderHeight; // @synthesize customHeaderHeight=_customHeaderHeight;
@property(nonatomic) double oldFirstVisibleOffset; // @synthesize oldFirstVisibleOffset=_oldFirstVisibleOffset;
@property(retain, nonatomic) NSIndexPath *oldFirstVisibleIndexPath; // @synthesize oldFirstVisibleIndexPath=_oldFirstVisibleIndexPath;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) long long transitionState; // @synthesize transitionState=_transitionState;
@property(nonatomic) long long rowType; // @synthesize rowType=_rowType;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)keyForDummyCandidateIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (void)justify:(id)arg1 rowStartX:(double)arg2 maxWidth:(double)arg3 remainingWidth:(double)arg4 endOfSection:(_Bool)arg5;
- (void)rotateAttributesBy90Degrees;
- (void)prepareLayoutForMultiRow;
- (void)layoutSlottedCandidates;
- (void)prepareLayoutForSingleRow;
- (void)prepareLayout;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayout;
- (void)clearLayoutAttributes;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

