//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_protocol_definition-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_protocol_definition : NSObject <OS_nw_protocol_definition>
{
    struct nw_protocol_identifier identifier;
    unsigned char unique_identifier[16];
    int variant;
    CDUnknownFunctionPointerType allocate_globals;
    CDUnknownFunctionPointerType deallocate_globals;
    CDUnknownFunctionPointerType allocate_instance_state;
    CDUnknownFunctionPointerType deallocate_instance_state;
    CDUnknownFunctionPointerType allocate_flow_state;
    CDUnknownFunctionPointerType deallocate_flow_state;
    CDUnknownFunctionPointerType allocate_options;
    CDUnknownFunctionPointerType copy_options;
    CDUnknownFunctionPointerType deallocate_options;
    CDUnknownFunctionPointerType check_equality_options;
    CDUnknownFunctionPointerType allocate_metadata;
    CDUnknownFunctionPointerType deallocate_metadata;
    CDUnknownFunctionPointerType deallocate_cache_entry;
    CDUnknownFunctionPointerType should_flush_cache;
    CDUnknownFunctionPointerType initialize;
    CDUnknownFunctionPointerType destroy;
    CDUnknownFunctionPointerType handle_inbound;
    CDUnknownFunctionPointerType handle_outbound;
    CDUnknownFunctionPointerType handle_error;
    CDUnknownFunctionPointerType inbound_starting;
    CDUnknownFunctionPointerType inbound_stopping;
    CDUnknownFunctionPointerType outbound_starting;
    CDUnknownFunctionPointerType outbound_stopping;
    CDUnknownFunctionPointerType start;
    CDUnknownFunctionPointerType stop;
    CDUnknownFunctionPointerType copy_metadata;
    unsigned int custom_flow_map_key_size;
}

@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

