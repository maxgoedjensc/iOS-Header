//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, WDFont;

__attribute__((visibility("hidden")))
@interface WDSymbol : WDRun
{
    WDCharacterProperties *mProperties;
    WDFont *mFont;
    unsigned short mCharacter;
}

- (id)description;
- (int)runType;
- (void)setCharacter:(unsigned short)arg1;
- (unsigned short)character;
- (void)setFont:(id)arg1;
- (id)font;
- (void)clearProperties;
- (id)properties;
- (id)initWithParagraph:(id)arg1;
- (void)dealloc;

@end

