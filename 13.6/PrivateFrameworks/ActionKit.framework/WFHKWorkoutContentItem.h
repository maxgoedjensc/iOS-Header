//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContentKit/WFContentItem.h>

#import <ActionKit/WFContentItemClass-Protocol.h>

@interface WFHKWorkoutContentItem : WFContentItem <WFContentItemClass>
{
}

+ (id)outputTypes;
+ (id)ownedTypes;
+ (id)contentCategories;
+ (id)countDescription;
+ (id)pluralTypeDescription;
+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)itemWithWorkout:(id)arg1 distanceUnit:(id)arg2 caloriesUnit:(id)arg3;
+ (id)itemWithWorkout:(id)arg1;
- (void)generateObjectRepresentations:(CDUnknownBlockType)arg1 options:(id)arg2 forClass:(Class)arg3;
- (id)sourceName;
- (id)workoutContainer;
- (id)workout;
- (id)readableActivityType;

@end

