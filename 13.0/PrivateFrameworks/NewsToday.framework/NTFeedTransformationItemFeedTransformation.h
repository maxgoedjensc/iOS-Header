//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTFeedTransforming-Protocol.h>

@class NSString;
@protocol FCFeedTransforming;

@interface NTFeedTransformationItemFeedTransformation : NSObject <NTFeedTransforming>
{
    id <FCFeedTransforming> _feedItemTransformation;
}

@property(retain, nonatomic) id <FCFeedTransforming> feedItemTransformation; // @synthesize feedItemTransformation=_feedItemTransformation;
- (void).cxx_destruct;
- (id)transformFeedItems:(id)arg1;
- (id)initWithFeedItemTransformation:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

