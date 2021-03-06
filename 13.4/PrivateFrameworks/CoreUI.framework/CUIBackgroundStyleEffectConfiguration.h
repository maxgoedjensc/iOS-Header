//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIStyleEffectConfiguration.h>

@class NSString;

@interface CUIBackgroundStyleEffectConfiguration : CUIStyleEffectConfiguration
{
    NSString *_backgroundType;
    _Bool _effectShowsValue;
    int _shouldRespectOutputBlending;
}

@property(nonatomic) _Bool effectShowsValue; // @synthesize effectShowsValue=_effectShowsValue;
@property(copy, nonatomic) NSString *backgroundType; // @synthesize backgroundType=_backgroundType;
- (void)setSelectionType:(long long)arg1;
- (id)description;
- (_Bool)shouldRespectOutputBlending;
- (void)setShouldRespectOutputBlending:(_Bool)arg1;
- (_Bool)shouldIgnoreForegroundColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

