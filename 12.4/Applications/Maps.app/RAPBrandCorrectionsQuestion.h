//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPPlaceCorrectionsQuestion.h"

@class NSArray, RAPPlaceCorrectableString;

__attribute__((visibility("hidden")))
@interface RAPBrandCorrectionsQuestion : RAPPlaceCorrectionsQuestion
{
    RAPPlaceCorrectableString *_name;
    NSArray *_correctableItems;
}

- (void).cxx_destruct;
- (id)_userPathItems;
- (int)userAction;
- (id)correctableItems;
- (id)correctableCoreItems;
- (int)analyticTarget;
- (long long)questionCategory;
- (id)localizedCorrectionsPrompt;
- (id)localizedTitle;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 place:(id)arg3;

@end

