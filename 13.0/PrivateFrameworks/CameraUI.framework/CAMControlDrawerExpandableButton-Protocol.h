//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol CAMControlDrawerExpandableButtonDelegate;

@protocol CAMControlDrawerExpandableButton
@property(nonatomic, getter=isExpanded) _Bool expanded;
@property(nonatomic) __weak id <CAMControlDrawerExpandableButtonDelegate> delegate;
@property(nonatomic) struct UIEdgeInsets expansionInsets;
- (void)setExpanded:(_Bool)arg1 animated:(_Bool)arg2;
@end

