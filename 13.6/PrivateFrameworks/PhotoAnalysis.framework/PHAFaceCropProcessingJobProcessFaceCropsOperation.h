//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, PHAVisionServiceFaceProcessingWorker;
@protocol PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate;

@interface PHAFaceCropProcessingJobProcessFaceCropsOperation : NSOperation
{
    id <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate> _delegate;
    PHAVisionServiceFaceProcessingWorker *_faceProcessingWorker;
    NSArray *_faceCrops;
    unsigned long long _totalSteps;
    unsigned long long _currentStep;
}

- (void).cxx_destruct;
- (float)percentComplete;
- (void)main;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)initWithFaceProcessingWorker:(id)arg1 faceCrops:(id)arg2;

@end

