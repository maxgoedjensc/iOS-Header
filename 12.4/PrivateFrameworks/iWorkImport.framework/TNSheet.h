//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSCEResolverContainer-Protocol.h>
#import <iWorkImport/TSDDrawableContainerInfo-Protocol.h>
#import <iWorkImport/TSDMutableContainerInfo-Protocol.h>
#import <iWorkImport/TSKDocumentObject-Protocol.h>
#import <iWorkImport/TSKModel-Protocol.h>
#import <iWorkImport/TSWPHeaderFooterProvider-Protocol.h>
#import <iWorkImport/TSWPStorageParent-Protocol.h>

@class NSArray, NSEnumerator, NSMutableArray, NSMutableSet, NSObject, NSString, TNDocumentRoot, TSDInfoGeometry, TSWPStorage;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TNSheet : TSPObject <TSKDocumentObject, TSKModel, TSCEResolverContainer, TSDDrawableContainerInfo, TSDMutableContainerInfo, TSWPHeaderFooterProvider, TSWPStorageParent>
{
    NSString *mName;
    NSMutableArray *mChildInfos;
    _Bool mInDocument;
    unsigned int mTableNameCounter;
    TSWPStorage *mHeaderFooters[2][3];
    NSMutableSet *mRemappedTableNames;
    _Bool mInPortraitPageOrientation;
    _Bool mShowPageNumbers;
    _Bool mIsAutofitOn;
    _Bool _usingStartPageNumber;
    _Bool mUsesSingleHeaderFooter;
    int _layoutDirection;
    int mPageOrder;
    double mContentScale;
    long long _startPageNumber;
    double _pageHeaderInset;
    double _pageFooterInset;
    struct UIEdgeInsets _printMargins;
}

+ (_Bool)needsObjectUUID;
+ (id)sheetForSelectionModel:(id)arg1 outIsPaginated:(_Bool *)arg2;
@property(nonatomic) struct UIEdgeInsets printMargins; // @synthesize printMargins=_printMargins;
- (id)i_newHeaderFooterStorage;
- (void)i_importHeadersFooters:(id)arg1 headerType:(long long)arg2 useSingleHeaderFooter:(_Bool)arg3;
- (struct CGRect)frame;
@property(readonly, copy) NSString *description;
- (void)saveToArchive:(struct SheetArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct SheetArchive *)arg1 unarchiver:(id)arg2;
- (id)copyWithContext:(id)arg1;
@property(readonly, nonatomic) _Bool supportsMultipleColumns;
@property(readonly, nonatomic) long long contentWritingDirection;
@property(readonly, nonatomic) _Bool preventsChangeTracking;
@property(readonly, nonatomic) _Bool preventsComments;
@property(readonly, nonatomic) _Bool textIsLinked;
- (_Bool)textIsVerticalAtCharIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool autoListTermination;
@property(readonly, nonatomic) _Bool autoListRecognition;
- (_Bool)isThemeContent;
- (_Bool)isSelectable;
- (Class)repClass;
- (Class)layoutClass;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText;
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment;
- (void)clearBackPointerToParentInfoIfNeeded:(id)arg1;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
- (void)setPrimitiveGeometry:(id)arg1;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (double)highestScaleFactorForRenderingDrawableInfo:(id)arg1;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)addChildInfo:(id)arg1;
- (void)moveModel:(id)arg1 toIndex:(unsigned long long)arg2;
- (void)removeContainedModel:(id)arg1;
- (void)insertContainedModel:(id)arg1 atIndex:(unsigned long long)arg2;
@property(readonly, nonatomic) NSArray *containedModels;
- (_Bool)isForm;
- (void)clearRemappedTableNames;
- (id)remappedTableNames;
- (void)addRemappedTableName:(id)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned int)saveNextUntitledResolverIndex;
- (unsigned int)nextUntitledResolverIndex;
- (_Bool)resolverNameIsUsed:(id)arg1;
- (id)resolversMatchingPrefix:(id)arg1;
- (id)resolverMatchingName:(id)arg1;
- (id)childEnumerator;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)p_dolcDispatch:(id)arg1 skippingTextBoxes:(_Bool)arg2;
- (_Bool)hasReferenceToTables:(id)arg1;
- (id)tableInfoForName:(id)arg1 caseSensitive:(_Bool)arg2;
- (id)tableInfos;
- (id)chartInfos;
- (id)chartAndTableInfos;
- (void)moveDrawables:(id)arg1 toIndexes:(id)arg2;
- (_Bool)canMoveDrawables:(id)arg1 toIndexes:(id)arg2;
- (void)removeDrawableInfos:(id)arg1;
- (void)removeDrawableInfo:(id)arg1;
- (void)insertDrawableInfos:(id)arg1 context:(id)arg2;
- (void)insertDrawableInfos:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3;
- (void)insertDrawableInfo:(id)arg1 atIndex:(unsigned long long)arg2 context:(id)arg3;
- (void)insertDrawableInfo:(id)arg1 context:(id)arg2;
- (void)setChildInfos:(id)arg1;
@property(readonly, nonatomic) NSArray *childInfos;
- (id)infoForSelectionPath:(id)arg1;
- (_Bool)layoutIsLeftToRight;
- (_Bool)layoutIsRightToLeft;
@property(nonatomic) _Bool usesSingleHeaderFooter; // @synthesize usesSingleHeaderFooter=mUsesSingleHeaderFooter;
@property double pageFooterInset; // @synthesize pageFooterInset=_pageFooterInset;
@property double pageHeaderInset; // @synthesize pageHeaderInset=_pageHeaderInset;
@property long long startPageNumber; // @synthesize startPageNumber=_startPageNumber;
@property(getter=isUsingStartPageNumber) _Bool usingStartPageNumber; // @synthesize usingStartPageNumber=_usingStartPageNumber;
@property int pageOrder; // @synthesize pageOrder=mPageOrder;
@property(nonatomic) double contentScale; // @synthesize contentScale=mContentScale;
@property(nonatomic) _Bool isAutofitOn; // @synthesize isAutofitOn=mIsAutofitOn;
@property(nonatomic) _Bool showPageNumbers; // @synthesize showPageNumbers=mShowPageNumbers;
@property(nonatomic) _Bool inPortraitPageOrientation; // @synthesize inPortraitPageOrientation=mInPortraitPageOrientation;
@property(nonatomic) int layoutDirection; // @synthesize layoutDirection=_layoutDirection;
- (_Bool)shouldBeDisplayed;
@property(readonly, nonatomic) TNDocumentRoot *documentRoot;
@property(retain, nonatomic) NSString *name;
@property(readonly, nonatomic) NSEnumerator *headerFooterFragmentEnumerator;
@property(readonly, nonatomic) NSArray *footerStorages;
@property(readonly, nonatomic) NSArray *headerStorages;
- (id)p_storagesForHeaderType:(long long)arg1;
- (long long)headerFragmentIndexForModel:(id)arg1;
- (long long)headerFooterTypeForModel:(id)arg1;
- (_Bool)isHeaderFooterEmpty:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (_Bool)isHeaderFooterEmpty:(long long)arg1;
- (id)headerFooter:(long long)arg1 fragmentAtIndex:(long long)arg2;
- (void)enumerateHeaderFooterStoragesWithBlock:(CDUnknownBlockType)arg1;
- (void)p_createHeadersFooters:(long long)arg1 stylesheet:(id)arg2 mayAlreadyExist:(_Bool)arg3;
- (id)p_newHeaderFooterStorageWithStylesheet:(id)arg1;
@property(readonly, nonatomic) double bodyWidth;
- (void)dealloc;
- (void)p_setupHeadersFooters;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 suppressingHeaderFooterCreation:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(readonly, nonatomic) _Bool storageChangesInvalidateWrap;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool supportsCollaborativeEditing;

@end

