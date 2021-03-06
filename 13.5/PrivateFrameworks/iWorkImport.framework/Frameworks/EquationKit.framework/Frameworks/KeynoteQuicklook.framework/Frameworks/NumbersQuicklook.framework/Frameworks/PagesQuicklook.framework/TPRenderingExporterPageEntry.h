//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TPRenderingExporterPageEntry : NSObject
{
    unsigned long long _documentPageIndex;
    unsigned long long _commentOverflowPageIndex;
    unsigned long long _firstAnnotationNumber;
}

@property(nonatomic) unsigned long long firstAnnotationNumber; // @synthesize firstAnnotationNumber=_firstAnnotationNumber;
@property(nonatomic) unsigned long long commentOverflowPageIndex; // @synthesize commentOverflowPageIndex=_commentOverflowPageIndex;
@property(nonatomic) unsigned long long documentPageIndex; // @synthesize documentPageIndex=_documentPageIndex;
- (id)description;
@property(readonly, nonatomic) _Bool isDocumentPage;

@end

