//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSVComplexOperation.h>

@class NSError, NSString;

@interface MusicTermsSendByEmailOperation : SSVComplexOperation
{
    NSError *_error;
    NSString *_emailAddress;
}

@property(readonly, copy) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
- (void).cxx_destruct;
- (id)error;
- (void)main;
- (id)initWithEmailAddress:(id)arg1;

@end

