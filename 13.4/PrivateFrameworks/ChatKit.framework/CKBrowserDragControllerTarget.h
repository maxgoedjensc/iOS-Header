//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKBrowserDragControllerTarget : NSObject
{
    double _scale;
    double _meshScaleFactor;
    double _rotation;
    unsigned long long _associatedLayoutIntent;
    struct CGPoint _screenCoordiante;
    struct CGSize _initialSize;
}

+ (id)targetWithScreenCoordiante:(struct CGPoint)arg1 initialSize:(struct CGSize)arg2 scale:(double)arg3 meshScaleFactor:(double)arg4 rotation:(double)arg5 associatedLayoutIntent:(unsigned long long)arg6;
@property(nonatomic) unsigned long long associatedLayoutIntent; // @synthesize associatedLayoutIntent=_associatedLayoutIntent;
@property(nonatomic) double rotation; // @synthesize rotation=_rotation;
@property(nonatomic) double meshScaleFactor; // @synthesize meshScaleFactor=_meshScaleFactor;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic) struct CGSize initialSize; // @synthesize initialSize=_initialSize;
@property(nonatomic) struct CGPoint screenCoordiante; // @synthesize screenCoordiante=_screenCoordiante;
- (id)description;

@end

