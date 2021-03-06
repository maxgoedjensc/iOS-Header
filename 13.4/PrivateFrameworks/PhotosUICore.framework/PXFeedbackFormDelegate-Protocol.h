//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol PXFeedbackFormDelegate <NSObject>
- (void)userSentPositiveFeedback:(NSDictionary *)arg1 negativeFeedback:(NSDictionary *)arg2 customFeedback:(NSString *)arg3;
- (void)userIndicatedDislike;
- (void)userIndicatedLike;
- (_Bool)shouldDisplaySecondaryFeedbackButtons;
- (NSArray *)positiveFeedbackKeys;
- (NSArray *)negativeFeedbackKeys;
- (NSString *)viewTitleForRadar;
- (NSString *)longTitleText;

@optional
- (void)userDidFinish:(_Bool)arg1;
- (_Bool)shouldContinuePresentingFormAfterFeedback;
- (_Bool)wantsPositiveFeedbackSection;
- (_Bool)wantsCustomFeedbackSection;
@end

