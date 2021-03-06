//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFImage.h>

@class UIImage;

@interface SearchUIImage : SFImage
{
    _Bool _useFastPathShadow;
    _Bool _needsTinting;
    UIImage *_uiImage;
    SFImage *_sfImage;
}

+ (id)imageForSuggestionCardSectionType:(int)arg1;
+ (_Bool)isEqualHasSubclassOverrideForImage:(id)arg1;
+ (_Bool)isEqualHasSubclassOverrideForImage1:(id)arg1 image2:(id)arg2;
+ (_Bool)image:(id)arg1 isEqualToImage:(id)arg2;
+ (id)imageWithSFImage:(id)arg1 variantForAppIcon:(unsigned long long)arg2;
+ (id)imageWithSFImage:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool needsTinting; // @synthesize needsTinting=_needsTinting;
@property(nonatomic) _Bool useFastPathShadow; // @synthesize useFastPathShadow=_useFastPathShadow;
@property(retain, nonatomic) SFImage *sfImage; // @synthesize sfImage=_sfImage;
@property(retain, nonatomic) UIImage *uiImage; // @synthesize uiImage=_uiImage;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)imageData;
- (double)scale;
- (_Bool)isTemplate;
- (_Bool)shouldCropToCircle;
- (double)cornerRadius;
- (struct CGSize)size;
- (id)loadImage;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithSFImage:(id)arg1;

@end

