//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSText/TSWPStorageParagraphObserver-Protocol.h>

@class NSString, TSWPStorage;

@interface TSWPLayoutMetricsCache : NSObject <TSWPStorageParagraphObserver>
{
    TSWPStorage *_storage;
    struct vector<TSWPParagraphMetrics, std::__1::allocator<TSWPParagraphMetrics>> _paragraphMetrics;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)storage:(id)arg1 didChangeParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)storage:(id)arg1 didDeleteParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)storage:(id)arg1 didInsertParagraphsInIndexRange:(struct _NSRange)arg2;
- (void)reset;
- (struct TSWPParagraphMetrics *)paragraphMetricsForParagraphAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

