//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class _SFBrowserView;

__attribute__((visibility("hidden")))
@interface SFNanoDomainContainerView : UIView
{
    double _maximumHeight;
    _SFBrowserView *_browserView;
}

+ (double)defaultHeightInsideQuickboard;
+ (double)defaultHeight;
+ (double)defaultTopOffset;
- (void).cxx_destruct;
@property(nonatomic) __weak _SFBrowserView *browserView; // @synthesize browserView=_browserView;
@property(nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
- (void)updateWithDomain:(id)arg1 isSecure:(_Bool)arg2 showsNotSecureAnotation:(_Bool)arg3;

@end

