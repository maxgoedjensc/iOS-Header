//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSURLRequestEncoder.h>

#import "AMSRequestEncoding-Protocol.h"

@class NSString, URLRequestProperties;

@interface URLRequestEncoder : AMSURLRequestEncoder <AMSRequestEncoding>
{
    URLRequestProperties *_requestProperties;
}

@property(readonly, copy) URLRequestProperties *requestProperties; // @synthesize requestProperties=_requestProperties;
- (void).cxx_destruct;
- (void)_configureUsingRequestProperties;
- (void)_addKBSyncDataToRequestParameters:(id)arg1;
- (void)_addGUIDToRequestParameters:(id)arg1;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)initWithRequestProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

