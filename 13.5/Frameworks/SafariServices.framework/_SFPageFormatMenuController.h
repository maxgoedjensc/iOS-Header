//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, _SFSettingsAlertItem;
@protocol _SFBrowserContentController;

@interface _SFPageFormatMenuController : NSObject
{
    _SFSettingsAlertItem *_readerAlertItem;
    id <_SFBrowserContentController> _browserContentController;
    UIViewController *_viewController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(readonly, nonatomic) __weak id <_SFBrowserContentController> browserContentController; // @synthesize browserContentController=_browserContentController;
- (id)_sitePreferencesAlertItem;
- (id)_contentBlockersToggleAlertItem;
- (_Bool)_canHideToolbar;
- (_Bool)_canToggleContentBlockers;
- (id)_readerFontAlertItem;
- (id)_readerThemeAlertItem;
- (id)_readerTextSizeAlertItem;
- (id)_pageZoomAlertItem;
- (void)_anchorInWindowCoordinatesForAlert:(id)arg1;
- (id)_fullScreenAlertItem;
- (id)_desktopMobileToggleAlertItem;
- (id)_readerAlertItem;
- (void)_readerAvailabilityDidChange:(id)arg1;
- (void)presentMenuFromViewController:(id)arg1 withSourceInfo:(id)arg2;
- (id)initWithBrowserContentController:(id)arg1;

@end

