//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Task.h"

@interface ODRAssetPackValidationMaintenanceTask : Task
{
}

+ (_Bool)_removeItemAtURL:(id)arg1 withDescription:(id)arg2;
+ (void)_enumerateURLs:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)_validateMetadataURL:(id)arg1 matchesContents:(id)arg2;
- (_Bool)_validateAssetsForHashURL:(id)arg1;
- (_Bool)_validateAssetPackURL:(id)arg1;
- (void)_main;
- (void)main;

@end

