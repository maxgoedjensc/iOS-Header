//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PhotosControlCommand.h>

@class NSManagedObjectContext, NSObject, NSURL, PHPhotoLibrary, PLPhotosCTL;
@protocol OS_dispatch_group;

@interface PhotosControlPhotoLibraryCommand : PhotosControlCommand
{
    NSManagedObjectContext *_moc;
    PHPhotoLibrary *_photoLibrary;
    NSURL *_libraryURL;
    NSObject<OS_dispatch_group> *_group;
    PLPhotosCTL *_ctl;
}

+ (const char *)libraryOptstring;
+ (struct option *)libraryLongopts;
+ (id)libraryUsagesummary;
+ (id)libraryUsage;
+ (struct option *)longopts;
+ (const char *)optstring;
+ (id)usage;
+ (id)usagesummary;
- (void).cxx_destruct;
@property(readonly) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
- (int)runOnPhotoKitAssetArgumentsAllowAll:(_Bool)arg1 propertySets:(id)arg2 additionalPredicate:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)managedObjectContext;
- (id)photoLibrary;
- (id)plPhotoLibrary;
- (_Bool)libraryProcessOption:(BOOL)arg1 arg:(id)arg2;
- (_Bool)processOption:(BOOL)arg1 arg:(id)arg2;
- (id)processBooleanOptionArg:(id)arg1;
- (int)save;
- (id)jsonDictionaryFromError:(id)arg1;
- (id)jsonDictionaryFromManagedObject:(id)arg1 maxDepth:(unsigned long long)arg2;
- (id)_jsonDictionaryFromManagedObject:(id)arg1 allPreviousObjects:(id)arg2 currentDepth:(unsigned long long)arg3 maxDepth:(unsigned long long)arg4;
- (int)runOnAssetArgumentsAllowAll:(_Bool)arg1 additionalPredicate:(id)arg2 block:(CDUnknownBlockType)arg3;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 allowAll:(_Bool)arg3 additionalPredicate:(id)arg4 sortDescriptors:(id)arg5 block:(CDUnknownBlockType)arg6;
- (int)runOnManagedObjectArgumentsWithEntityName:(id)arg1 identifierPropertyKey:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)argument:(id)arg1 isValidDouble:(double *)arg2;
- (id)photosCtl;
- (void)configureWithAlternateURLToLibraryDatabase:(id)arg1;
- (void)waitForGroup;
- (void)leaveGroup;
- (void)enterGroup;
- (id)initWithArgc:(int)arg1 argv:(char **)arg2 options:(unsigned char)arg3 ctl:(id)arg4;

@end

