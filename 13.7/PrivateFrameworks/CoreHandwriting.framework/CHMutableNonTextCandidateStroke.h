//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHandwriting/CHNonTextCandidateStroke.h>

@class NSDictionary;

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke
{
}

- (id)description;
- (_Bool)_adjustSupportForContainerClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;
- (_Bool)_adjustSupportForLineClassificationByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;
- (_Bool)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2;
- (_Bool)adjustSupportByRemovingStrokeIdentifier:(id)arg1;
- (_Bool)_removeSupportForStrokeIdentifier:(id)arg1;
- (void)_setSupportForStrokeIdentifier:(id)arg1 support:(double)arg2;
@property(retain, nonatomic) NSDictionary *supportByStrokeIdentifier; // @dynamic supportByStrokeIdentifier;

@end

