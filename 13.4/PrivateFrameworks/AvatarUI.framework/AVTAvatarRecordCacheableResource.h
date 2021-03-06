//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCacheableResource-Protocol.h>

@class AVTUIEnvironment, NSString;
@protocol AVTAvatarRecord;

@interface AVTAvatarRecordCacheableResource : NSObject <AVTCacheableResource>
{
    _Bool _includeAvatarData;
    id <AVTAvatarRecord> _record;
    AVTUIEnvironment *_environment;
}

+ (id)persistentIdentifierForRecordData:(id)arg1;
+ (id)persistentIdentifierPrefixForRecordWithIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool includeAvatarData; // @synthesize includeAvatarData=_includeAvatarData;
@property(readonly, nonatomic) AVTUIEnvironment *environment; // @synthesize environment=_environment;
@property(readonly, nonatomic) id <AVTAvatarRecord> record; // @synthesize record=_record;
@property(readonly, copy) NSString *description;
- (id)tokenForObservingChangesWithHandler:(CDUnknownBlockType)arg1;
- (_Bool)requiresEncryption;
- (unsigned long long)costForScope:(id)arg1;
- (id)identifierForScope:(id)arg1;
- (id)persistentIdentifierForScope:(id)arg1;
- (id)volatileIdentifierForScope:(id)arg1;
- (id)initWithAvatarRecord:(id)arg1 includeAvatarData:(_Bool)arg2 environment:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

