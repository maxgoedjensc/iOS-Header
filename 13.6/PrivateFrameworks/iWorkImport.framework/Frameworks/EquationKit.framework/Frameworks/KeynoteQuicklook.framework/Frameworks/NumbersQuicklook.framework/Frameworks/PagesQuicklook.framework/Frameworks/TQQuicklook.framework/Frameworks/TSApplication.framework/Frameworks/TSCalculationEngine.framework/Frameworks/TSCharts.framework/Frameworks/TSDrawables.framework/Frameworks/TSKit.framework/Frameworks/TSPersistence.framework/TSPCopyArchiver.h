//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSPersistence/TSPArchiver.h>

#import <TSPersistence/TSPProxyObjectMappingProvider-Protocol.h>

@protocol TSPProxyObjectMapping;

@interface TSPCopyArchiver : TSPArchiver <TSPProxyObjectMappingProvider>
{
    id <TSPProxyObjectMapping> _proxyObjectMapping;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TSPProxyObjectMapping> proxyObjectMapping; // @synthesize proxyObjectMapping=_proxyObjectMapping;
- (void)setStrongLazyReference:(id)arg1 message:(struct Reference *)arg2;
- (void)setStrongReference:(id)arg1 message:(struct Reference *)arg2;
@property(readonly, nonatomic) long long targetType;

@end

