//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/UITextInput-Protocol.h>

@class NSAttributedString, NSSet, NSString, UIColor, UIFont;
@protocol WFVariableProvider, WFVariableUIDelegate;

@protocol WFTextField <UITextInput>
@property(nonatomic) unsigned long long syntaxHighlightingType;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(retain, nonatomic) UIColor *textColor;
@property(copy, nonatomic) NSString *textContentType;
@property(nonatomic) long long textAlignment;
@property(retain, nonatomic) UIFont *font;
@property(copy, nonatomic) NSAttributedString *attributedText;
@property(copy, nonatomic) NSString *placeholder;
@property(copy, nonatomic) NSString *text;
@property(nonatomic, getter=isEditable) _Bool editable;
@property(nonatomic) __weak id <WFVariableUIDelegate> variableUIDelegate;
@property(nonatomic) __weak id <WFVariableProvider> variableProvider;
@property(copy, nonatomic) NSSet *allowedVariableTypes;
@property(nonatomic) _Bool variablesDisabled;
@end

