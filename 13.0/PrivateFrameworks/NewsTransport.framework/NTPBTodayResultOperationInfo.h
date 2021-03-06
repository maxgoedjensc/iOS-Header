//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString, NTPBSectionSlotCostInfo;

@interface NTPBTodayResultOperationInfo : PBCodable <NSCopying>
{
    long long _embedsLimit;
    long long _leadingCellThumbnailSizePreset;
    long long _nonLeadingCellThumbnailSizePreset;
    long long _qualityOfService;
    double _scale;
    double _slotsLimit;
    long long _sourceNameImageSizePreset;
    NSString *_assetsDirectoryFileURLString;
    unsigned int _dynamicThumbnailSizePresetMinimumHeightInPixels;
    unsigned int _dynamicThumbnailSizePresetMinimumWidthInPixels;
    NSString *_keyboardInputMode;
    NTPBSectionSlotCostInfo *_nonVideoSectionSlotCostInfo;
    NTPBSectionSlotCostInfo *_videoSectionSlotCostInfo;
    _Bool _allowLeadingCell;
    _Bool _allowOnlyWatchEligibleSections;
    _Bool _allowSectionTitles;
    _Bool _fetchWidgetConfig;
    _Bool _preferCompactSectionName;
    _Bool _preferCompactSourceName;
    _Bool _respectsWidgetSlotsLimit;
    _Bool _respectsWidgetVisibleSectionsPerQueueLimit;
    struct {
        unsigned int embedsLimit:1;
        unsigned int leadingCellThumbnailSizePreset:1;
        unsigned int nonLeadingCellThumbnailSizePreset:1;
        unsigned int qualityOfService:1;
        unsigned int scale:1;
        unsigned int slotsLimit:1;
        unsigned int sourceNameImageSizePreset:1;
        unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels:1;
        unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels:1;
        unsigned int allowLeadingCell:1;
        unsigned int allowOnlyWatchEligibleSections:1;
        unsigned int allowSectionTitles:1;
        unsigned int fetchWidgetConfig:1;
        unsigned int preferCompactSectionName:1;
        unsigned int preferCompactSourceName:1;
        unsigned int respectsWidgetSlotsLimit:1;
        unsigned int respectsWidgetVisibleSectionsPerQueueLimit:1;
    } _has;
}

@property(retain, nonatomic) NSString *keyboardInputMode; // @synthesize keyboardInputMode=_keyboardInputMode;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) long long embedsLimit; // @synthesize embedsLimit=_embedsLimit;
@property(nonatomic) _Bool allowSectionTitles; // @synthesize allowSectionTitles=_allowSectionTitles;
@property(nonatomic) unsigned int dynamicThumbnailSizePresetMinimumHeightInPixels; // @synthesize dynamicThumbnailSizePresetMinimumHeightInPixels=_dynamicThumbnailSizePresetMinimumHeightInPixels;
@property(nonatomic) unsigned int dynamicThumbnailSizePresetMinimumWidthInPixels; // @synthesize dynamicThumbnailSizePresetMinimumWidthInPixels=_dynamicThumbnailSizePresetMinimumWidthInPixels;
@property(nonatomic) long long leadingCellThumbnailSizePreset; // @synthesize leadingCellThumbnailSizePreset=_leadingCellThumbnailSizePreset;
@property(nonatomic) _Bool allowLeadingCell; // @synthesize allowLeadingCell=_allowLeadingCell;
@property(retain, nonatomic) NSString *assetsDirectoryFileURLString; // @synthesize assetsDirectoryFileURLString=_assetsDirectoryFileURLString;
@property(nonatomic) _Bool respectsWidgetVisibleSectionsPerQueueLimit; // @synthesize respectsWidgetVisibleSectionsPerQueueLimit=_respectsWidgetVisibleSectionsPerQueueLimit;
@property(nonatomic) _Bool allowOnlyWatchEligibleSections; // @synthesize allowOnlyWatchEligibleSections=_allowOnlyWatchEligibleSections;
@property(nonatomic) _Bool fetchWidgetConfig; // @synthesize fetchWidgetConfig=_fetchWidgetConfig;
@property(retain, nonatomic) NTPBSectionSlotCostInfo *nonVideoSectionSlotCostInfo; // @synthesize nonVideoSectionSlotCostInfo=_nonVideoSectionSlotCostInfo;
@property(retain, nonatomic) NTPBSectionSlotCostInfo *videoSectionSlotCostInfo; // @synthesize videoSectionSlotCostInfo=_videoSectionSlotCostInfo;
@property(nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(nonatomic) long long sourceNameImageSizePreset; // @synthesize sourceNameImageSizePreset=_sourceNameImageSizePreset;
@property(nonatomic) long long nonLeadingCellThumbnailSizePreset; // @synthesize nonLeadingCellThumbnailSizePreset=_nonLeadingCellThumbnailSizePreset;
@property(nonatomic) _Bool preferCompactSourceName; // @synthesize preferCompactSourceName=_preferCompactSourceName;
@property(nonatomic) _Bool preferCompactSectionName; // @synthesize preferCompactSectionName=_preferCompactSectionName;
@property(nonatomic) _Bool respectsWidgetSlotsLimit; // @synthesize respectsWidgetSlotsLimit=_respectsWidgetSlotsLimit;
@property(nonatomic) double slotsLimit; // @synthesize slotsLimit=_slotsLimit;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasKeyboardInputMode;
@property(nonatomic) _Bool hasScale;
@property(nonatomic) _Bool hasEmbedsLimit;
@property(nonatomic) _Bool hasAllowSectionTitles;
@property(nonatomic) _Bool hasDynamicThumbnailSizePresetMinimumHeightInPixels;
@property(nonatomic) _Bool hasDynamicThumbnailSizePresetMinimumWidthInPixels;
@property(nonatomic) _Bool hasLeadingCellThumbnailSizePreset;
@property(nonatomic) _Bool hasAllowLeadingCell;
@property(readonly, nonatomic) _Bool hasAssetsDirectoryFileURLString;
@property(nonatomic) _Bool hasRespectsWidgetVisibleSectionsPerQueueLimit;
@property(nonatomic) _Bool hasAllowOnlyWatchEligibleSections;
@property(nonatomic) _Bool hasFetchWidgetConfig;
@property(readonly, nonatomic) _Bool hasNonVideoSectionSlotCostInfo;
@property(readonly, nonatomic) _Bool hasVideoSectionSlotCostInfo;
@property(nonatomic) _Bool hasQualityOfService;
@property(nonatomic) _Bool hasSourceNameImageSizePreset;
@property(nonatomic) _Bool hasNonLeadingCellThumbnailSizePreset;
@property(nonatomic) _Bool hasPreferCompactSourceName;
@property(nonatomic) _Bool hasPreferCompactSectionName;
@property(nonatomic) _Bool hasRespectsWidgetSlotsLimit;
@property(nonatomic) _Bool hasSlotsLimit;

@end

