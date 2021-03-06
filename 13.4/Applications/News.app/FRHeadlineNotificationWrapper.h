//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FRHeadlineNotificationProviding-Protocol.h"

@class NSString;

@interface FRHeadlineNotificationWrapper : NSObject <FRHeadlineNotificationProviding>
{
    NSString *_headlineNotification_identifier;
    NSString *_headlineNotification_title;
    NSString *_headlineNotification_date;
    NSString *_headlineNotification_base64Image;
    NSString *_headlineNotification_publisher;
    NSString *_headlineNotification_base64PublisherImage;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *headlineNotification_base64PublisherImage; // @synthesize headlineNotification_base64PublisherImage=_headlineNotification_base64PublisherImage;
@property(readonly, nonatomic) NSString *headlineNotification_publisher; // @synthesize headlineNotification_publisher=_headlineNotification_publisher;
@property(readonly, nonatomic) NSString *headlineNotification_base64Image; // @synthesize headlineNotification_base64Image=_headlineNotification_base64Image;
@property(readonly, nonatomic) NSString *headlineNotification_date; // @synthesize headlineNotification_date=_headlineNotification_date;
@property(readonly, nonatomic) NSString *headlineNotification_title; // @synthesize headlineNotification_title=_headlineNotification_title;
@property(readonly, nonatomic) NSString *headlineNotification_identifier; // @synthesize headlineNotification_identifier=_headlineNotification_identifier;
- (id)headlineNotification_dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHeadline:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

