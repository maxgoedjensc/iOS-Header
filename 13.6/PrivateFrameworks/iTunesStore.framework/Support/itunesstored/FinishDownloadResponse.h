//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DownloadHandle, DownloadHandlerSession, NSError, NSString;

@interface FinishDownloadResponse : NSObject
{
    long long _assetBlockedReason;
    long long _assetID;
    DownloadHandle *_downloadHandle;
    DownloadHandlerSession *_downloadHandlerSession;
    long long _downloadID;
    NSError *_error;
    NSString *_mediaAssetInstallPath;
    long long _result;
}

- (void).cxx_destruct;
@property(nonatomic) long long result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *mediaAssetInstallPath; // @synthesize mediaAssetInstallPath=_mediaAssetInstallPath;
@property(nonatomic) long long mediaAssetIdentifier; // @synthesize mediaAssetIdentifier=_assetID;
@property(copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long downloadIdentifier; // @synthesize downloadIdentifier=_downloadID;
@property(copy, nonatomic) DownloadHandlerSession *downloadHandlerSession; // @synthesize downloadHandlerSession=_downloadHandlerSession;
@property(retain, nonatomic) DownloadHandle *downloadHandle; // @synthesize downloadHandle=_downloadHandle;
@property(nonatomic) long long assetBlockedReason; // @synthesize assetBlockedReason=_assetBlockedReason;

@end

