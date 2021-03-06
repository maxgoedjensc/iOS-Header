//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MSVSystemDialogOptions : NSObject
{
    _Bool _showAsTopmost;
    _Bool _forceModalAlertAppearance;
    _Bool _showOnLockscreen;
    _Bool _dismissOverlaysOnLockscreen;
    NSString *_alertHeader;
    NSString *_alertMessage;
    NSURL *_alertIconURL;
    NSArray *_allowedApplicationBundleIDs;
    NSString *_defaultButtonTitle;
    NSString *_alternateButtonTitle;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool dismissOverlaysOnLockscreen; // @synthesize dismissOverlaysOnLockscreen=_dismissOverlaysOnLockscreen;
@property(nonatomic) _Bool showOnLockscreen; // @synthesize showOnLockscreen=_showOnLockscreen;
@property(nonatomic) _Bool forceModalAlertAppearance; // @synthesize forceModalAlertAppearance=_forceModalAlertAppearance;
@property(nonatomic) _Bool showAsTopmost; // @synthesize showAsTopmost=_showAsTopmost;
@property(copy, nonatomic) NSString *alternateButtonTitle; // @synthesize alternateButtonTitle=_alternateButtonTitle;
@property(copy, nonatomic) NSString *defaultButtonTitle; // @synthesize defaultButtonTitle=_defaultButtonTitle;
@property(copy, nonatomic) NSArray *allowedApplicationBundleIDs; // @synthesize allowedApplicationBundleIDs=_allowedApplicationBundleIDs;
@property(copy, nonatomic) NSURL *alertIconURL; // @synthesize alertIconURL=_alertIconURL;
@property(copy, nonatomic) NSString *alertMessage; // @synthesize alertMessage=_alertMessage;
@property(copy, nonatomic) NSString *alertHeader; // @synthesize alertHeader=_alertHeader;

@end

