//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSExtension;
@protocol CNDonationExtensionLogger;

@interface CNDDonorExtension : NSObject
{
    NSExtension *_extension;
    id <CNDonationExtensionLogger> _logger;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNDonationExtensionLogger> logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
- (void)redonateAllValuesWithReason:(unsigned long long)arg1;
- (void)renewExpirationDateForDonatedValue:(id)arg1 acknowledgementHandler:(CDUnknownBlockType)arg2;
- (id)description;
- (id)initWithExtension:(id)arg1 logger:(id)arg2;
- (id)initWithExtension:(id)arg1;

@end

