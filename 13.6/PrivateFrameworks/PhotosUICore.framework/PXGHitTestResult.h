//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PXGLayout, PXGSpriteReference;

@interface PXGHitTestResult : NSObject
{
    _Bool _isDecorated;
    PXGSpriteReference *_spriteReference;
    PXGLayout *_layout;
    NSString *_identifier;
    id _userData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isDecorated; // @synthesize isDecorated=_isDecorated;
@property(readonly, nonatomic) id userData; // @synthesize userData=_userData;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) PXGLayout *layout; // @synthesize layout=_layout;
@property(readonly, nonatomic) PXGSpriteReference *spriteReference; // @synthesize spriteReference=_spriteReference;
- (id)description;
- (id)initWithSpriteReference:(id)arg1 layout:(id)arg2 identifier:(id)arg3 userData:(id)arg4;
- (id)init;

@end

