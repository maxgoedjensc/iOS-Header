//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MDM/MCBlockOperationContext-Protocol.h>

@class MCBlockOperation;

@interface _MCBlockOperationContext : NSObject <MCBlockOperationContext>
{
    MCBlockOperation *_operation;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MCBlockOperation *operation; // @synthesize operation=_operation;
- (void)endBlockOperation;

@end

