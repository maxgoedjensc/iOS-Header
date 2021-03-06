//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUILeadingViewController.h>

#import <SearchUI/CNAvatarViewDelegate-Protocol.h>

@class NSString, SearchUIContactsThumbnailView;

@interface SearchUILeadingContactViewController : SearchUILeadingViewController <CNAvatarViewDelegate>
{
}

+ (_Bool)supportsRowModel:(id)arg1;
- (unsigned long long)type;
- (id)contactsForPreviewInteractionForAvatarView:(id)arg1 suggestedKeysToFetch:(id)arg2;
- (void)willBeginPreviewInteractionForAvatarView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)updateWithContacts:(id)arg1;
- (void)updateWithRowModel:(id)arg1;
- (id)setupView;
- (void)hide;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) SearchUIContactsThumbnailView *view; // @dynamic view;

@end

