//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ScreenReaderCore/NSCopying-Protocol.h>

@interface SCRCWeakReferenceContainer : NSObject <NSCopying>
{
    id _weakReference;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)strongReference;
- (id)autoreleasedReference;
- (void)dealloc;
- (id)initWithObject:(id)arg1;

@end

