//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TextInputCore/NSObject-Protocol.h>

@protocol TIKeyboardAssertionManagerDelegate;

@protocol TIKeyboardAssertionManaging <NSObject>
@property(nonatomic) id <TIKeyboardAssertionManagerDelegate> delegate;
@property(readonly, nonatomic) _Bool hasBackgroundActivityAssertions;
@property(readonly, nonatomic) _Bool hasAssertions;
- (void)releaseBackgroundActivityAssertion;
- (void)retainBackgroundActivityAssertion;
- (void)removeAssertionForObject:(id)arg1;
- (void)addAssertionForObject:(id)arg1;
@end

