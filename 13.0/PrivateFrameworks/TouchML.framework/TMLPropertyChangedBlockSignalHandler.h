//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchML/TMLBlockSignalHandler.h>

#import <TouchML/TMLBinder-Protocol.h>

@class NSString, TMLBinding;

@interface TMLPropertyChangedBlockSignalHandler : TMLBlockSignalHandler <TMLBinder>
{
    TMLBinding *_binding;
}

- (void).cxx_destruct;
- (void)bindingValueChanged:(id)arg1;
- (void)detach;
- (void)attach;
@property(readonly, nonatomic) long long bindingOrder;
- (id)initWithBlock:(CDUnknownBlockType)arg1 binding:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

