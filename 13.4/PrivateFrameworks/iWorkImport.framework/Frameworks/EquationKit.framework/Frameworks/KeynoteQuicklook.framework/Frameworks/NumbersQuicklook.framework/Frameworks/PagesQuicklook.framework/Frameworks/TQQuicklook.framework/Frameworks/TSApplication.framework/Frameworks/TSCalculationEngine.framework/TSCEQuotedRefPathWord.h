//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSCEQuotedRefPathWord : NSObject
{
    _Bool _wasQuoted;
    _Bool _hasPreserveFlag;
    NSString *_rawString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *rawString; // @synthesize rawString=_rawString;
@property(nonatomic) _Bool hasPreserveFlag; // @synthesize hasPreserveFlag=_hasPreserveFlag;
@property(nonatomic) _Bool wasQuoted; // @synthesize wasQuoted=_wasQuoted;
- (id)description;
- (id)quoteStringIfNeeded;
- (id)trimmedString;
- (id)trimmedStringWithPreserveFlag:(_Bool)arg1;
- (id)initWithRawString:(id)arg1;

@end

