//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface TSPPackageEntryInfo : NSObject
{
    unsigned int _CRC;
    unsigned long long _encodedLength;
    NSDate *_lastModificationDate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned int CRC; // @synthesize CRC=_CRC;
@property(readonly, nonatomic) NSDate *lastModificationDate; // @synthesize lastModificationDate=_lastModificationDate;
@property(readonly, nonatomic) unsigned long long encodedLength; // @synthesize encodedLength=_encodedLength;
- (id)initWithEncodedLength:(unsigned long long)arg1 lastModificationDate:(id)arg2 CRC:(unsigned int)arg3;
- (id)init;

@end

