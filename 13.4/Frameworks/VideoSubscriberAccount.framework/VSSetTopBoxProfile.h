//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface VSSetTopBoxProfile : NSObject
{
    _Bool _isDeveloper;
    NSString *_providerID;
    NSString *_userToken;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isDeveloper; // @synthesize isDeveloper=_isDeveloper;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
- (id)description;
- (id)initWithProviderID:(id)arg1 userToken:(id)arg2 isDeveloper:(_Bool)arg3;

@end

