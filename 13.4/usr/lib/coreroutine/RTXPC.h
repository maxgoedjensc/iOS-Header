//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTXPC : NSObject
{
}

+ (id)signingIdentifierOfConnection:(id)arg1;
+ (id)executablePathOfConnection:(id)arg1;
+ (_Bool)xpcConnection:(id)arg1 hasEntitlement:(id)arg2;
+ (_Bool)checkClientCodeSigning:(id)arg1 error:(id *)arg2;
+ (id)allowInternalFrameworkAccessForConnection:(id)arg1;
+ (id)checkClientConnection:(id)arg1 forEntitlements:(id)arg2;

@end

