//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MREmulatedGameController, _MRGameControllerPropertiesProtobuf;

@protocol MREmulatedGameControllerDelegate <NSObject>
- (void)gameController:(MREmulatedGameController *)arg1 propertiesDidChange:(_MRGameControllerPropertiesProtobuf *)arg2;
@end

