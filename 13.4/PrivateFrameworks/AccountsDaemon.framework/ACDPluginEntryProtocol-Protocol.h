//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSSet, NSString;

@protocol ACDPluginEntryProtocol
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) id principalObject;
@property(readonly, nonatomic) NSSet *supportedDataclasses;
@property(readonly, nonatomic) NSSet *supportedAccountTypes;
- (_Bool)principalObjectRespondsToSelector:(SEL)arg1;
@end

