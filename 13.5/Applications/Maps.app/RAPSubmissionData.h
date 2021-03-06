//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEORPFeedbackSubmissionParameters, NSArray;

__attribute__((visibility("hidden")))
@interface RAPSubmissionData : NSObject
{
    GEORPFeedbackSubmissionParameters *_correctionParameters;
    GEORPFeedbackSubmissionParameters *_imageUploadParameters;
    NSArray *_imageUploadInformation;
    NSArray *_photoList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *photoList; // @synthesize photoList=_photoList;
@property(retain, nonatomic) NSArray *imageUploadInformation; // @synthesize imageUploadInformation=_imageUploadInformation;
@property(retain, nonatomic) GEORPFeedbackSubmissionParameters *imageUploadParameters; // @synthesize imageUploadParameters=_imageUploadParameters;
@property(retain, nonatomic) GEORPFeedbackSubmissionParameters *correctionParameters; // @synthesize correctionParameters=_correctionParameters;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

