//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LocationOfInterestType : NSObject
{
    NSString *_customLabel;
    long long _labelType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long labelType; // @synthesize labelType=_labelType;
@property(copy, nonatomic) NSString *customLabel; // @synthesize customLabel=_customLabel;
- (id)debugDescription;
@property(readonly, nonatomic) NSString *label;
- (id)initWithLabelType:(long long)arg1 customLabel:(id)arg2;
- (id)initWithLabelType:(long long)arg1;
- (id)initWithContactAddressType:(int)arg1 customLabel:(id)arg2;

@end

