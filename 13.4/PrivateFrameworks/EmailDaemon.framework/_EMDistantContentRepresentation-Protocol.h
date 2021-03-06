//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class EMContentRequestOptions, EMObjectID, NSProgress;
@protocol EMContentItemRequestDelegate;

@protocol _EMDistantContentRepresentation <NSObject>
- (void)invalidate;
- (NSProgress *)requestUpdatedRepresentationWithCompletion:(void (^)(EMContentRepresentation *, NSError *))arg1;
- (NSProgress *)requestRepresentationForItemWithObjectID:(EMObjectID *)arg1 options:(EMContentRequestOptions *)arg2 delegate:(id <EMContentItemRequestDelegate>)arg3 completionHandler:(void (^)(id <_EMDistantContentRepresentation>, EMContentRepresentation *, NSError *))arg4;
@end

