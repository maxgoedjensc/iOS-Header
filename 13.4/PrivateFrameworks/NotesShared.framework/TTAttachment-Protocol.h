//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>
#import <NotesShared/TTModelAttributeComparable-Protocol.h>

@class ICAttachment, NSManagedObjectContext, NSString;

@protocol TTAttachment <TTModelAttributeComparable, NSObject>
- (ICAttachment *)attachmentInContext:(NSManagedObjectContext *)arg1;
- (NSString *)attachmentUTI;
- (NSString *)attachmentIdentifier;
@end

