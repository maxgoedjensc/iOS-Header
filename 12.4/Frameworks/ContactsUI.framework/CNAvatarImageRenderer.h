//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNScheduler, CNUILikenessRendering, CNUIPRLikenessResolver;

@interface CNAvatarImageRenderer : NSObject
{
    id <CNUIPRLikenessResolver> _resolver;
    id <CNUILikenessRendering> _renderer;
    id <CNScheduler> _backgroundScheduler;
}

+ (id)descriptorForRequiredKeys;
@property(readonly, nonatomic) id <CNScheduler> backgroundScheduler; // @synthesize backgroundScheduler=_backgroundScheduler;
@property(readonly, nonatomic) id <CNUILikenessRendering> renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) id <CNUIPRLikenessResolver> resolver; // @synthesize resolver=_resolver;
- (void).cxx_destruct;
- (id)loadingPlaceholderImageProvider;
- (id)placeholderImageProvider;
- (id)renderedMonogramObservableForString:(id)arg1 scope:(id)arg2;
- (id)renderedLikenessesForContacts:(id)arg1 scope:(id)arg2;
- (id)runScopeBasedImageObservable:(CDUnknownBlockType)arg1 scope:(id)arg2 imageHandler:(CDUnknownBlockType)arg3;
- (id)renderMonogramForString:(id)arg1 scope:(id)arg2 imageHandler:(CDUnknownBlockType)arg3;
- (id)renderAvatarsForContacts:(id)arg1 scope:(id)arg2 imageHandler:(CDUnknownBlockType)arg3;
- (id)renderMonogramForString:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)renderAvatarsForContacts:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)initWithSettings:(id)arg1;
- (id)init;

@end

