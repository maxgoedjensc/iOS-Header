//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableString, NSString, NSURLComponents, TracePickerController, UIViewController;

__attribute__((visibility("hidden")))
@interface MapsRadarComposerController : NSObject
{
    _Bool _showTracePicker;
    UIViewController *_viewController;
    TracePickerController *_tracePicker;
    NSURLComponents *_urlComponents;
    NSMutableArray *_queryItems;
    NSMutableString *_attachmentsPath;
    _Bool _isCrash;
    unsigned long long _component;
    NSString *_radarTitle;
    NSString *_descriptionText;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property(nonatomic) _Bool isCrash; // @synthesize isCrash=_isCrash;
@property(retain, nonatomic) NSString *radarTitle; // @synthesize radarTitle=_radarTitle;
@property(nonatomic) unsigned long long component; // @synthesize component=_component;
@property(nonatomic) _Bool showTracePicker; // @synthesize showTracePicker=_showTracePicker;
- (void)_skipAttachingTrace;
- (void)_cancelRadarCompose;
- (void)showTracePickerForRadarLaunchUsingViewController:(id)arg1;
- (void)_selectTraceWithName:(id)arg1 path:(id)arg2;
- (void)addToAttachmentsPath:(id)arg1;
- (id)_generateURL;
- (void)_launchTapToRadar;

@end

