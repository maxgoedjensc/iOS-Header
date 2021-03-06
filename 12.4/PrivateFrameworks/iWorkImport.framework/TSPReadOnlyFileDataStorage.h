//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface TSPReadOnlyFileDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
}

- (void).cxx_destruct;
- (id)writeData:(id)arg1 toPackageWriter:(id)arg2 infoMessage:(struct DataInfo *)arg3 preferredFilename:(id)arg4;
- (_Bool)readOnly;
- (void)performReadWithAccessor:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end

