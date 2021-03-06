//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <VoiceShortcuts/MTLJSONSerializing-Protocol.h>

@class NSDate, NSDictionary, NSString;

@interface VCIDApplicationSyncState : MTLModel <MTLJSONSerializing>
{
    NSString *_checksum;
    NSDate *_registeredDate;
}

+ (id)JSONKeyPathsByPropertyKey;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDate *registeredDate; // @synthesize registeredDate=_registeredDate;
@property(copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

