//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SetupAssistantSupport/SASProximityAction.h>

@class NSString;

@interface SASProximityMigrationTransferPreparationAction : SASProximityAction
{
    NSString *_deviceName;
}

+ (id)actionFromDictionary:(id)arg1;
+ (unsigned long long)actionID;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (_Bool)hasResponse;
- (id)requestPayload;

@end

