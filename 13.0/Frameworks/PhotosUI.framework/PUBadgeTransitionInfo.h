//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIView;

__attribute__((visibility("hidden")))
@interface PUBadgeTransitionInfo : NSObject
{
    UIView *_snapshotView;
    unsigned long long _badgesCorner;
    struct UIOffset _badgesOffset;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) unsigned long long badgesCorner; // @synthesize badgesCorner=_badgesCorner;
@property(nonatomic) struct UIOffset badgesOffset; // @synthesize badgesOffset=_badgesOffset;
@property(retain, nonatomic) UIView *snapshotView; // @synthesize snapshotView=_snapshotView;
- (void).cxx_destruct;

@end

