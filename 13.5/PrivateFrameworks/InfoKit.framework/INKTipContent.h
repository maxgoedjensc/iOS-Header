//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <InfoKit/INKContent.h>

@class TPSDiscoverabilityTip;

@interface INKTipContent : INKContent
{
    TPSDiscoverabilityTip *_tip;
}

+ (_Bool)supportsSecureCoding;
+ (id)classSet;
- (void).cxx_destruct;
@property(readonly, nonatomic) TPSDiscoverabilityTip *tip; // @synthesize tip=_tip;
- (id)initWithTip:(id)arg1 dismissalEvents:(id)arg2 customizationID:(long long)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

