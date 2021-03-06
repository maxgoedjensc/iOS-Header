//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUSelectableServiceGridViewController.h>

@class HFServiceGroupBuilder, HUServiceGroupEditorGridItemManager;
@protocol HUServiceGroupEditorGridViewControllerDelegate;

@interface HUServiceGroupEditorGridViewController : HUSelectableServiceGridViewController
{
    HFServiceGroupBuilder *_serviceGroupBuilder;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) HFServiceGroupBuilder *serviceGroupBuilder; // @synthesize serviceGroupBuilder=_serviceGroupBuilder;
- (id)_serviceVendorItemForItem:(id)arg1;
- (id)layoutOptionsForSection:(long long)arg1;
- (void)didDeselectItem:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)itemManager:(id)arg1 performUpdateRequest:(id)arg2;
- (void)viewDidLoad;
- (id)initWithServiceGroupBuilder:(id)arg1;
- (id)initWithServiceGridItemManager:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <HUServiceGroupEditorGridViewControllerDelegate> delegate;
@property(retain, nonatomic) HUServiceGroupEditorGridItemManager *itemManager; // @dynamic itemManager;

@end

