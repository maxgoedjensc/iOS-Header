//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIActivityViewController.h>

@class LPMetadataProvider, NSString, NSURL, TVImageProxy;

__attribute__((visibility("hidden")))
@interface VUIShareActivityViewController : UIActivityViewController
{
    LPMetadataProvider *_pendingMessageMetadataProvider;
    NSURL *_sharingURL;
    TVImageProxy *_imageProxy;
    NSURL *_itemImageURL;
    NSString *_itemTitle;
    NSString *_itemSubtitle;
}

+ (void)shareMediaItem:(id)arg1 title:(id)arg2 subtitle:(id)arg3 imageURLStr:(id)arg4 sourceView:(id)arg5;
@property(retain, nonatomic) NSString *itemSubtitle; // @synthesize itemSubtitle=_itemSubtitle;
@property(retain, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
@property(retain, nonatomic) NSURL *itemImageURL; // @synthesize itemImageURL=_itemImageURL;
- (void).cxx_destruct;
- (void)_prepareActivity:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithActivityItems:(id)arg1 applicationActivities:(id)arg2;

@end

