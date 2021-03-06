//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHChangeRequest-Protocol.h>

@class NSManagedObject, NSString, PLPhotoLibrary;

@protocol PHUpdateChangeRequest <PHChangeRequest>
@property(readonly, getter=isMutated) _Bool mutated;
- (_Bool)applyMutationsToManagedObject:(NSManagedObject *)arg1 photoLibrary:(PLPhotoLibrary *)arg2 error:(id *)arg3;
- (_Bool)validateMutationsToManagedObject:(NSManagedObject *)arg1 error:(id *)arg2;
- (_Bool)allowMutationToManagedObject:(NSManagedObject *)arg1 propertyKey:(NSString *)arg2 error:(id *)arg3;
@end

