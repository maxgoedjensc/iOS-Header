//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactTargetActionWrapper, NSString;

__attribute__((visibility("hidden")))
@interface CNCustomCardAction : NSObject
{
    _Bool _destructive;
    NSString *_title;
    CNContactTargetActionWrapper *_targetActionWrapper;
    NSString *_contactIdentifier;
    long long _placement;
}

+ (id)groupForActionGivenPlacement:(long long)arg1 inContactContentViewController:(id)arg2;
+ (long long)placementForGroup:(id)arg1 inContactContentViewController:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isDestructive) _Bool destructive; // @synthesize destructive=_destructive;
@property(readonly, nonatomic) long long placement; // @synthesize placement=_placement;
@property(readonly, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property(readonly, nonatomic) CNContactTargetActionWrapper *targetActionWrapper; // @synthesize targetActionWrapper=_targetActionWrapper;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
- (_Bool)matchesTarget:(id)arg1 selector:(SEL)arg2 group:(id)arg3 inContactContentViewController:(id)arg4;
- (_Bool)isValidForContact:(id)arg1;
- (id)initWithTitle:(id)arg1 targetActionWrapper:(id)arg2 contactIdentifier:(id)arg3 placement:(long long)arg4 isDesctructive:(_Bool)arg5;

@end

