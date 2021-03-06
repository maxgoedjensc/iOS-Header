//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ARKit/NSObject-Protocol.h>

@class ARImageData, NSArray;

@protocol ARResultDataContext <NSObject>
- (NSArray *)resultDataOfClass:(Class)arg1;
- (long long)cameraPosition;
- (ARImageData *)imageData;

@optional
- (NSArray *)anchorsToRemove;
- (NSArray *)anchorsToAdd;
@end

