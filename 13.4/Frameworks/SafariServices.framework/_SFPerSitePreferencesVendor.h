//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, WBSAutomaticReaderActivationManager, _SFContentBlockersPreferenceManager, _SFGeolocationPermissionManager, _SFPageZoomPreferenceManager, _SFRequestDesktopSitePreferenceManager, _SFUserMediaPermissionController;

@interface _SFPerSitePreferencesVendor : NSObject
{
    NSMutableDictionary *_preferenceToManager;
    WBSAutomaticReaderActivationManager *_automaticReaderPreferenceManager;
    _SFContentBlockersPreferenceManager *_contentBlockersPreferenceManager;
    _SFRequestDesktopSitePreferenceManager *_requestDesktopSitePreferenceManager;
    _SFPageZoomPreferenceManager *_pageZoomPreferenceManager;
}

- (void).cxx_destruct;
- (id)managerForPreference:(id)arg1;
@property(readonly, nonatomic) _SFPageZoomPreferenceManager *pageZoomPreferenceManager; // @synthesize pageZoomPreferenceManager=_pageZoomPreferenceManager;
@property(readonly, nonatomic) _SFRequestDesktopSitePreferenceManager *requestDesktopSitePreferenceManager; // @synthesize requestDesktopSitePreferenceManager=_requestDesktopSitePreferenceManager;
@property(readonly, nonatomic) _SFGeolocationPermissionManager *sharedGeolocationPermissionManager;
@property(readonly, nonatomic) _SFUserMediaPermissionController *sharedUserMediaPermissionController;
@property(readonly, nonatomic) _SFContentBlockersPreferenceManager *contentBlockersPreferenceManager; // @synthesize contentBlockersPreferenceManager=_contentBlockersPreferenceManager;
@property(readonly, nonatomic) WBSAutomaticReaderActivationManager *automaticReaderActivationManager; // @synthesize automaticReaderActivationManager=_automaticReaderPreferenceManager;

@end

