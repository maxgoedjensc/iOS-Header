//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWorkoutTrigger : WFTrigger
{
    _Bool _onStart;
    _Bool _onEnd;
    unsigned long long _selection;
    NSArray *_selectedWorkoutTypes;
}

+ (_Bool)supportsSecureCoding;
+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (_Bool)isSupportedOnThisDevice;
+ (_Bool)isAllowedToRunAutomatically;
- (void).cxx_destruct;
@property(nonatomic) _Bool onEnd; // @synthesize onEnd=_onEnd;
@property(nonatomic) _Bool onStart; // @synthesize onStart=_onStart;
@property(copy, nonatomic) NSArray *selectedWorkoutTypes; // @synthesize selectedWorkoutTypes=_selectedWorkoutTypes;
@property(nonatomic) unsigned long long selection; // @synthesize selection=_selection;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)localizedPastTenseDescription;
- (id)localizedDescriptionWithConfigurationSummary;
- (_Bool)hasValidConfiguration;
- (id)init;

@end

