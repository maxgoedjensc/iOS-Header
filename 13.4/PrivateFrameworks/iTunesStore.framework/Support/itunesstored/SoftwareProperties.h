//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData, NSDictionary, NSNumber, NSString;

@interface SoftwareProperties : NSObject <NSCopying>
{
    NSData *_appReceiptData;
    NSData *_artworkData;
    NSString *_bundleIdentifier;
    NSString *_bundleVersion;
    NSNumber *_installType;
    _Bool _isFromStore;
    NSDictionary *_iTunesMetadata;
    NSData *_newsstandArtworkData;
    NSString *_packagePath;
    NSData *_sinfData;
    NSData *_transitMapData;
    long long _downloadIdentifier;
    NSString *_scratchDirectory;
}

@property(copy, nonatomic) NSString *scratchDirectory; // @synthesize scratchDirectory=_scratchDirectory;
@property(nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadIdentifier;
@property(copy, nonatomic) NSData *transitMapData; // @synthesize transitMapData=_transitMapData;
@property(copy, nonatomic) NSData *sinfData; // @synthesize sinfData=_sinfData;
@property(copy, nonatomic) NSString *packagePath; // @synthesize packagePath=_packagePath;
@property(copy, nonatomic) NSData *newsstandArtworkData; // @synthesize newsstandArtworkData=_newsstandArtworkData;
@property(copy, nonatomic) NSDictionary *ITunesMetadata; // @synthesize ITunesMetadata=_iTunesMetadata;
@property(nonatomic) _Bool isFromStore; // @synthesize isFromStore=_isFromStore;
@property(copy, nonatomic) NSNumber *installType; // @synthesize installType=_installType;
@property(copy, nonatomic) NSString *bundleVersion; // @synthesize bundleVersion=_bundleVersion;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(copy, nonatomic) NSData *artworkData; // @synthesize artworkData=_artworkData;
@property(copy, nonatomic) NSData *appReceiptData; // @synthesize appReceiptData=_appReceiptData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

@end

