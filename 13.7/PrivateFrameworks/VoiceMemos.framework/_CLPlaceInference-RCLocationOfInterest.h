//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/_CLPlaceInference.h>

#import <VoiceMemos/RCLocationOfInterest-Protocol.h>

@class CLLocation, NSString;

@interface _CLPlaceInference (RCLocationOfInterest) <RCLocationOfInterest>
+ (void)initialize;
@property(readonly, nonatomic) NSString *preferredName;
@property(readonly, nonatomic) CLLocation *location;

// Remaining properties
@property(readonly, nonatomic) double confidence;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

