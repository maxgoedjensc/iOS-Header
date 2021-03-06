//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsServicesInternal/NSSecureCoding-Protocol.h>

@class NSString, NTPBSession;

@interface NSSExternalAnalyticsRequestMetadata : NSObject <NSSecureCoding>
{
    int _eventType;
    NSString *_eventIdentifier;
    NSString *_externalAnalyticsIdentifier;
    NTPBSession *_session;
    NSString *_contentViewedIdentifier;
    NSString *_publisherIdentifier;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, nonatomic) int eventType; // @synthesize eventType=_eventType;
@property(readonly, copy, nonatomic) NSString *publisherIdentifier; // @synthesize publisherIdentifier=_publisherIdentifier;
@property(readonly, copy, nonatomic) NSString *contentViewedIdentifier; // @synthesize contentViewedIdentifier=_contentViewedIdentifier;
@property(readonly, copy, nonatomic) NTPBSession *session; // @synthesize session=_session;
@property(readonly, copy, nonatomic) NSString *externalAnalyticsIdentifier; // @synthesize externalAnalyticsIdentifier=_externalAnalyticsIdentifier;
@property(readonly, copy, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSession:(id)arg1 eventIdentifier:(id)arg2 externalAnalyticsIdentifier:(id)arg3 contentViewedIdentifier:(id)arg4 publisherIdentifier:(id)arg5 eventType:(int)arg6;

@end

