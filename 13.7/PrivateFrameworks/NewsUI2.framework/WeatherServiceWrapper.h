//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WFServiceConnection;

@interface WeatherServiceWrapper : NSObject
{
    WFServiceConnection *_connection;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) WFServiceConnection *connection; // @synthesize connection=_connection;
- (void)enqueueRequest:(id)arg1;
- (id)init;

@end

