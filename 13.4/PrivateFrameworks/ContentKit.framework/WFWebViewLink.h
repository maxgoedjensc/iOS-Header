//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface WFWebViewLink : NSObject
{
    NSURL *_href;
    struct CGRect _rect;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect rect; // @synthesize rect=_rect;
@property(readonly, nonatomic) NSURL *href; // @synthesize href=_href;
- (id)initWithHref:(id)arg1 rect:(struct CGRect)arg2;

@end

