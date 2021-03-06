//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUNavigationItem.h>

@protocol ServiceBridgedNavigationItemProxy;

@interface ServiceBridgedNavigationItem : SUNavigationItem
{
    id <ServiceBridgedNavigationItemProxy> _proxyHandler;
}

+ (id)itemFromItem:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <ServiceBridgedNavigationItemProxy> proxyHandler; // @synthesize proxyHandler=_proxyHandler;
- (void)setTitle:(id)arg1;
- (void)setRightBarButtonItem:(id)arg1 animated:(_Bool)arg2;
- (void)setHidesBackButton:(_Bool)arg1;
- (void)setBackButtonTitle:(id)arg1;
- (id)rightBarButtonItem;

@end

