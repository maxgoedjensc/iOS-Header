//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSString;

@protocol PLUniformTypeIdentifierIdentity <NSObject>
@property(readonly, nonatomic) _Bool isPlayableVideo;
@property(readonly, nonatomic, getter=isPrimaryImageFormat) _Bool primaryImageFormat;
@property(readonly, nonatomic) _Bool conformsToMovie;
@property(readonly, nonatomic) _Bool conformsToImage;
@property(readonly, nonatomic) _Bool conformsToRawImage;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

