//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DAEAS/ASItem.h>

@class ASSettingsTaskOofGetResponse, NSNumber;

@interface ASSettingsTaskOofResponse : ASItem
{
    NSNumber *_status;
    ASSettingsTaskOofGetResponse *_oofGetResult;
}

+ (id)asParseRules;
+ (_Bool)notifyOfUnknownTokens;
+ (_Bool)frontingBasicTypes;
+ (_Bool)parsingWithSubItems;
+ (_Bool)parsingLeafNode;
+ (_Bool)acceptsTopLevelLeaves;
- (void).cxx_destruct;
@property(retain, nonatomic) ASSettingsTaskOofGetResponse *oofGetResult; // @synthesize oofGetResult=_oofGetResult;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;
- (void)parseASParseContext:(id)arg1 root:(id)arg2 parent:(id)arg3 callbackDict:(id)arg4 streamCallbackDict:(id)arg5 account:(id)arg6;
- (id)description;

@end

