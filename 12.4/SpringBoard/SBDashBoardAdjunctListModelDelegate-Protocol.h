//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SBDashBoardAdjunctListModel;
@protocol SBDashBoardAdjunctListItemProviding;

@protocol SBDashBoardAdjunctListModelDelegate <NSObject>
- (void)adjunctListModel:(SBDashBoardAdjunctListModel *)arg1 didRemoveItem:(id <SBDashBoardAdjunctListItemProviding>)arg2;
- (void)adjunctListModel:(SBDashBoardAdjunctListModel *)arg1 didAddItem:(id <SBDashBoardAdjunctListItemProviding>)arg2;
@end

