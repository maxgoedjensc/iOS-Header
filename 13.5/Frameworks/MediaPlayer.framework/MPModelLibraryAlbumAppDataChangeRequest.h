//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class MPMediaLibraryAlbumAppData, MPModelObject;

@interface MPModelLibraryAlbumAppDataChangeRequest : NSObject <NSCopying>
{
    MPModelObject *_modelObject;
    MPMediaLibraryAlbumAppData *_albumAppData;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MPMediaLibraryAlbumAppData *albumAppData; // @synthesize albumAppData=_albumAppData;
@property(retain, nonatomic) MPModelObject *modelObject; // @synthesize modelObject=_modelObject;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

