//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface LPImagePresentationProperties : NSObject
{
    _Bool _shouldApplyBackground;
    _Bool _requireFixedSize;
    long long _filter;
    long long _scalingMode;
    UIColor *_backgroundColor;
    UIColor *_maskColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *maskColor; // @synthesize maskColor=_maskColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool requireFixedSize; // @synthesize requireFixedSize=_requireFixedSize;
@property(nonatomic) _Bool shouldApplyBackground; // @synthesize shouldApplyBackground=_shouldApplyBackground;
@property(nonatomic) long long scalingMode; // @synthesize scalingMode=_scalingMode;
@property(nonatomic) long long filter; // @synthesize filter=_filter;
- (id)init;

@end

