//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSString;

@interface AXCustomizableMouse : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_identifier;
    long long _vendorId;
    long long _productId;
    NSMutableDictionary *_buttonMap;
}

+ (id)_newOrExistingMouseForIdentifier:(id)arg1 name:(id)arg2 vendorId:(id)arg3 productId:(id)arg4;
+ (id)_existingMouseForIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3;
+ (id)mouseForHIDServiceClient:(struct __IOHIDServiceClient *)arg1;
+ (id)mouseForHIDDevice:(struct __IOHIDDevice *)arg1;
+ (id)serialize:(id)arg1;
+ (id)deserialize:(id)arg1;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *buttonMap; // @synthesize buttonMap=_buttonMap;
@property(readonly, nonatomic) long long productId; // @synthesize productId=_productId;
@property(readonly, nonatomic) long long vendorId; // @synthesize vendorId=_vendorId;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (id)debugDescription;
- (_Bool)isEqualToIdentifier:(id)arg1 vendorId:(long long)arg2 productId:(long long)arg3;
- (_Bool)isEqualToMouse:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)customActionForButtonNumber:(long long)arg1;
@property(readonly, nonatomic) NSArray *buttonsWithCustomActions;
@property(readonly, nonatomic) _Bool customActionsRequireAssistiveTouch;
@property(readonly, nonatomic) _Bool hasCustomActions;
- (void)setCustomAction:(id)arg1 forButtonNumber:(long long)arg2;
- (void)setDefaultActionForButtonNumber:(long long)arg1;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 vendorId:(long long)arg3 productId:(long long)arg4;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

