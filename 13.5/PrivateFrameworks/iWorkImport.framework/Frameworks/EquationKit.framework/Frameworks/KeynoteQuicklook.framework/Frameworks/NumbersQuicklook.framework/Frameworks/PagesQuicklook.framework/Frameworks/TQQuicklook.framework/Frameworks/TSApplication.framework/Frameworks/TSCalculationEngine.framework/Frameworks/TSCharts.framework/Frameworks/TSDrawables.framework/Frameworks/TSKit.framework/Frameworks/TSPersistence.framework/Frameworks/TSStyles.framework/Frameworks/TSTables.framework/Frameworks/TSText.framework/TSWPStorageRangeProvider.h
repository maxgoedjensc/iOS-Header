//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSWPStorageRangeProvider : NSObject
{
    NSString *_identifier;
    struct _NSRange _range;
    NSObject *_object;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject *object; // @synthesize object=_object;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)nextRange;
- (unsigned long long)rangeEnd;
- (void)setRangeStart:(unsigned long long)arg1;
- (unsigned long long)rangeLength;
- (unsigned long long)rangeStart;
- (id)initWithIdentifier:(id)arg1;

@end

