//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface SCNJSValueTmpImp : NSObject
{
}

+ (id)valueWithTransform3D:(struct SCNMatrix4)arg1 inContext:(id)arg2;
+ (id)valueWithVector3:(struct SCNVector3)arg1 inContext:(id)arg2;
+ (id)valueWithVector4:(struct SCNVector4)arg1 inContext:(id)arg2;
- (struct SCNMatrix4)toTransform3D;
- (struct SCNVector3)toVector3;
- (struct SCNVector4)toVector4;

@end

