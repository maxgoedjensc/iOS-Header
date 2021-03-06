//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/TSDHint-Protocol.h>

@class NSString;

@interface TSWPTOCLayoutHint : NSObject <TSDHint>
{
    struct _NSRange _charRange;
}

+ (Class)archivedHintClass;
@property(readonly, nonatomic) struct _NSRange charRange; // @synthesize charRange=_charRange;
- (void)saveToArchive:(struct TOCLayoutHintArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct TOCLayoutHintArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isFirstHint;
- (id)lastChildHint;
- (id)firstChildHint;
- (void)offsetByDelta:(int)arg1;
- (_Bool)overlapsWithSelectionPath:(id)arg1;
- (id)copyForArchiving;
- (id)init;
- (id)initWithRange:(struct _NSRange)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

