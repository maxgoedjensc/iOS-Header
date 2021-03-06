//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGadgetDataSourceManager.h>

@class NSArray, PUSessionInfo, PXExtendedTraitCollection;

__attribute__((visibility("hidden")))
@interface PUAlbumsGadgetDataSourceManager : PXGadgetDataSourceManager
{
    PXExtendedTraitCollection *_traitCollection;
    PUSessionInfo *_sessionInfo;
    NSArray *_providers;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *providers; // @synthesize providers=_providers;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) PXExtendedTraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
- (id)gadgetProviders;
- (id)initWithTraitCollection:(id)arg1 sessionInfo:(id)arg2;

@end

