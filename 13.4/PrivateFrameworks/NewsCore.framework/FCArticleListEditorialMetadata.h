//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary;

@interface FCArticleListEditorialMetadata : NSObject
{
    NSDate *_publishDate;
    NSDictionary *_articleMetadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *articleMetadata; // @synthesize articleMetadata=_articleMetadata;
@property(retain, nonatomic) NSDate *publishDate; // @synthesize publishDate=_publishDate;
- (id)initWithDictionary:(id)arg1;

@end

