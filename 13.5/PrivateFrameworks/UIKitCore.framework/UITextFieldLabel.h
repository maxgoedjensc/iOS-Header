//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UILabel.h>

__attribute__((visibility("hidden")))
@interface UITextFieldLabel : UILabel
{
    _Bool _shouldRenderWithoutTextField;
}

+ (id)_defaultAttributes;
+ (id)defaultFont;
@property(nonatomic) _Bool shouldRenderWithoutTextField; // @synthesize shouldRenderWithoutTextField=_shouldRenderWithoutTextField;
- (_Bool)_shouldDrawUnderlinesLikeWebKit;
- (void)drawTextInRect:(struct CGRect)arg1;
- (void)_defaultDrawTextInRect:(struct CGRect)arg1;

@end

