//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDAssertion.h>

@class NSString;

@interface _HDCarouselSessionAssertion : HDAssertion
{
    _Bool _supportsAOT;
    NSString *_applicationBundleIdentifier;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool supportsAOT; // @synthesize supportsAOT=_supportsAOT;
@property(readonly, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
- (id)initWithOwnerIdentifier:(id)arg1;

@end

