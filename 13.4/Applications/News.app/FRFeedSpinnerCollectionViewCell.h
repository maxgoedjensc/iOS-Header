//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIActivityIndicatorView;

@interface FRFeedSpinnerCollectionViewCell : UICollectionViewCell
{
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

