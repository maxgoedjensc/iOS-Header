//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EquationKit/EQKitMathMLNode.h>

#import <EquationKit/EQKitLayoutSchemataStackCarry-Protocol.h>
#import <EquationKit/EQKitMathMLNode-Protocol.h>

@class NSArray, NSString;

@interface EQKitMathMLMStackCarry : EQKitMathMLNode <EQKitMathMLNode, EQKitLayoutSchemataStackCarry>
{
    NSArray *mChildren;
}

- (id)schemataChildren;
- (struct Schemata)layoutSchemata;
- (void)dealloc;
- (id)initWithChild:(id)arg1;
- (id)initWithChildren:(id)arg1;
- (const set_c5c159f9 *)mathMLAttributes;
- (id)initFromXMLNode:(struct _xmlNode *)arg1 parser:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

