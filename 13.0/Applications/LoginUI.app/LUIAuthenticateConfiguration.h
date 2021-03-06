//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSString, UINavigationController, UMUser, UMUserSwitchContext;
@protocol LUIPasscodeVerificationResultResponder;

@interface LUIAuthenticateConfiguration : NSObject
{
    _Bool _userAlreadyExist;
    _Bool _passcodeResetRequired;
    _Bool _canLoginWithLocalAuthOnly;
    _Bool _doLocalAuthOnly;
    _Bool _hasDoneRemoteAuth;
    _Bool _shouldBypassSetupAssistant;
    UMUser *_user;
    UMUser *_currentUser;
    NSString *_passcode;
    NSData *_passcodeData;
    unsigned long long _authMode;
    id <LUIPasscodeVerificationResultResponder> _passcodeResultResponder;
    UMUserSwitchContext *_userSwitchContext;
    NSDictionary *_emcsInfoDict;
    NSDictionary *_preferencesToSet;
    UINavigationController *_navigationController;
    CDUnknownBlockType _completionHandler;
}

@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(retain, nonatomic) NSDictionary *preferencesToSet; // @synthesize preferencesToSet=_preferencesToSet;
@property(nonatomic) _Bool shouldBypassSetupAssistant; // @synthesize shouldBypassSetupAssistant=_shouldBypassSetupAssistant;
@property(retain, nonatomic) NSDictionary *emcsInfoDict; // @synthesize emcsInfoDict=_emcsInfoDict;
@property(nonatomic) _Bool hasDoneRemoteAuth; // @synthesize hasDoneRemoteAuth=_hasDoneRemoteAuth;
@property(retain, nonatomic) UMUserSwitchContext *userSwitchContext; // @synthesize userSwitchContext=_userSwitchContext;
@property(retain, nonatomic) id <LUIPasscodeVerificationResultResponder> passcodeResultResponder; // @synthesize passcodeResultResponder=_passcodeResultResponder;
@property(nonatomic) unsigned long long authMode; // @synthesize authMode=_authMode;
@property(nonatomic) _Bool doLocalAuthOnly; // @synthesize doLocalAuthOnly=_doLocalAuthOnly;
@property(nonatomic) _Bool canLoginWithLocalAuthOnly; // @synthesize canLoginWithLocalAuthOnly=_canLoginWithLocalAuthOnly;
@property(nonatomic) _Bool passcodeResetRequired; // @synthesize passcodeResetRequired=_passcodeResetRequired;
@property(retain, nonatomic) NSData *passcodeData; // @synthesize passcodeData=_passcodeData;
@property(retain, nonatomic) NSString *passcode; // @synthesize passcode=_passcode;
@property(nonatomic) _Bool userAlreadyExist; // @synthesize userAlreadyExist=_userAlreadyExist;
@property(retain, nonatomic) UMUser *currentUser; // @synthesize currentUser=_currentUser;
@property(retain, nonatomic) UMUser *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUser:(id)arg1 userAlreadyExist:(_Bool)arg2 currentUser:(id)arg3 passcode:(id)arg4 passcodeResetRequired:(_Bool)arg5 passcodeResultResponder:(id)arg6 authMode:(unsigned long long)arg7 canLoginWithLocalAuthOnly:(_Bool)arg8 doLocalAuthOnly:(_Bool)arg9 hasDoneRemoteAuth:(_Bool)arg10 userSwitchContext:(id)arg11 emcsInfoDict:(id)arg12 shouldBypassSetupAssistant:(_Bool)arg13 preferencesToSet:(id)arg14 navigationController:(id)arg15 completionHandler:(CDUnknownBlockType)arg16;

@end

