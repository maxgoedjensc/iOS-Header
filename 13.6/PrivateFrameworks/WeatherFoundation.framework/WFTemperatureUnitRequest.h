//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFTask.h>

@interface WFTemperatureUnitRequest : WFTask
{
    CDUnknownBlockType _resultHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType resultHandler; // @synthesize resultHandler=_resultHandler;
- (void)cleanup;
- (void)handleCancellation;
- (void)handleResponse:(id)arg1;
- (void)startWithService:(id)arg1;
- (_Bool)requiresResponse;
- (id)initWithResultHandler:(CDUnknownBlockType)arg1;

@end

