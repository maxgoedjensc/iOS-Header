//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/JSExport-Protocol.h>

@class IKDOMNode, IKDOMXPathExpression, JSValue, NSString;

@protocol IKJSDOMXPathEvaluator <JSExport>
- (id)evaluate:(NSString *)arg1:(IKDOMNode *)arg2:(JSValue *)arg3:(long long)arg4:(id)arg5;
- (IKDOMXPathExpression *)createExpression:(NSString *)arg1:(JSValue *)arg2;
@end

