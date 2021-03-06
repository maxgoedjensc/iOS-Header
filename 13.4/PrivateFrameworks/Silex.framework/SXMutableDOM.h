//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Silex/SXDOM.h>

@class NSMutableDictionary, SXMutableComponents;
@protocol SXAutoPlacement, SXDocumentStyle;

@interface SXMutableDOM : SXDOM
{
}

- (id)debugDescription;
@property(retain, nonatomic) id <SXDocumentStyle> documentStyle;
@property(retain, nonatomic) id <SXAutoPlacement> autoPlacement;
- (id)initWithComponents:(id)arg1 componentLayouts:(id)arg2 componentStyles:(id)arg3 componentTextStyles:(id)arg4 textStyles:(id)arg5 resources:(id)arg6 autoPlacement:(id)arg7 documentStyle:(id)arg8;

// Remaining properties
@property(readonly, copy, nonatomic) NSMutableDictionary *componentLayouts;
@property(readonly, copy, nonatomic) NSMutableDictionary *componentStyles;
@property(readonly, copy, nonatomic) NSMutableDictionary *componentTextStyles;
@property(readonly, copy, nonatomic) SXMutableComponents *components;
@property(readonly, copy, nonatomic) NSMutableDictionary *resources;
@property(readonly, copy, nonatomic) NSMutableDictionary *textStyles;

@end

