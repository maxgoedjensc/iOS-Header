//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTDataProviderDuet.h>

@interface RTDataProviderNowPlaying : RTDataProviderDuet
{
}

- (id)supportedEventClasses;
- (void)populateDataProviderWithHandler:(CDUnknownBlockType)arg1;
- (id)supportedEventStreams;
- (void)internalRemoveObserver:(id)arg1 name:(id)arg2;
- (void)internalAddObserver:(id)arg1 name:(id)arg2;
- (id)initWithPurgeManager:(id)arg1 locationTagger:(id)arg2 defaultsManager:(id)arg3;
- (id)init;

@end

