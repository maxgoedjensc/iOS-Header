//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdCore/NSCopying-Protocol.h>

@interface ADFlags : NSObject <NSCopying>
{
    unsigned long long _flags;
}

+ (id)initWithFlags:(unsigned long long)arg1;
@property unsigned long long flags; // @synthesize flags=_flags;
- (_Bool)noneSet;
- (_Bool)isEqual:(id)arg1;
- (_Bool)allSet:(unsigned long long)arg1;
- (unsigned long long)anySet:(unsigned long long)arg1;
- (_Bool)isSet:(unsigned long long)arg1;
- (void)reset;
- (void)unset:(unsigned long long)arg1;
- (void)set:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

