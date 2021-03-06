//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVTAvatarAttributeEditorColorSection;
@protocol AVTAvatarAttributeEditorSectionColorDataSourceDelegate;

@interface AVTAvatarAttributeEditorSectionColorDataSource : NSObject
{
    AVTAvatarAttributeEditorColorSection *_colorSection;
    id <AVTAvatarAttributeEditorSectionColorDataSourceDelegate> _delegate;
    long long _selectedPrimaryColorIndex;
    long long _selectedExtendedColorIndex;
    long long _displayMode;
}

+ (long long)indexOfItem:(id)arg1 inItems:(id)arg2;
+ (id)selectedItemFromItems:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long displayMode; // @synthesize displayMode=_displayMode;
@property(nonatomic) long long selectedExtendedColorIndex; // @synthesize selectedExtendedColorIndex=_selectedExtendedColorIndex;
@property(nonatomic) long long selectedPrimaryColorIndex; // @synthesize selectedPrimaryColorIndex=_selectedPrimaryColorIndex;
@property(nonatomic) id <AVTAvatarAttributeEditorSectionColorDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) AVTAvatarAttributeEditorColorSection *colorSection; // @synthesize colorSection=_colorSection;
- (id)indexPathOfExtendedIcon;
- (void)selectSectionItemAtIndexPath:(id)arg1;
- (id)sectionItemAtIndex:(long long)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (void)resetToDefaultDisplayMode;
- (void)toggleExtendedMode;
- (void)toggleSliderMode;
@property(readonly, nonatomic) _Bool isShowingExtended;
@property(readonly, nonatomic) _Bool isShowingSlider;
- (void)updateSelectedIndexesSelectingItem:(id)arg1 fromUserInteraction:(_Bool)arg2;
@property(readonly, nonatomic) long long selectedItemIndex;
- (id)init;

@end

