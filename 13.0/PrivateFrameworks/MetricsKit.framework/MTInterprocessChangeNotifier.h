//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MTInterprocessChangeNotifier : NSObject
{
    NSString *_identifier;
    int _token;
}

- (void).cxx_destruct;
- (void)stop;
- (void)notify;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 onChange:(CDUnknownBlockType)arg2;

@end

