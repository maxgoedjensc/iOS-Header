//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PUAssetsDataSource;
@protocol PUAssetsDataSourceManagerDelegate;

@interface PUAssetsDataSourceManager : NSObject
{
    PUAssetsDataSource *_assetsDataSource;
    id <PUAssetsDataSourceManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUAssetsDataSourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;

@end

