//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRCollectionHeaderReusableView, FRLikeDislikeControl, UIButton;

@protocol FRCollectionHeaderDelegate <NSObject>
- (void)header:(FRCollectionHeaderReusableView *)arg1 favoriteButtonTapped:(FRLikeDislikeControl *)arg2;
- (void)header:(FRCollectionHeaderReusableView *)arg1 likeDislikeButtonTapped:(FRLikeDislikeControl *)arg2;
- (void)header:(FRCollectionHeaderReusableView *)arg1 sectionLongPressed:(UIButton *)arg2;
- (void)headerTapped:(FRCollectionHeaderReusableView *)arg1;
@end

