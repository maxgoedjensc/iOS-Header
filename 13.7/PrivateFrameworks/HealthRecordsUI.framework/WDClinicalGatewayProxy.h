//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WDClinicalGatewayProxy : NSObject
{
    NSString *_gatewayID;
    NSString *_batchID;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *batchID; // @synthesize batchID=_batchID;
@property(readonly, copy, nonatomic) NSString *gatewayID; // @synthesize gatewayID=_gatewayID;
- (id)initWithGatewayID:(id)arg1 batchID:(id)arg2;
- (id)init;

@end

