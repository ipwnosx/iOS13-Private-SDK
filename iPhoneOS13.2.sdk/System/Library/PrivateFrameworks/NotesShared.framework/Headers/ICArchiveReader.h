//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ICArchiveReader : NSObject
{
//    struct archive _archive;
    NSString *_sourcePath;
    NSString *_destinationPath;
}

@property(retain, nonatomic) NSString *destinationPath; // @synthesize destinationPath=_destinationPath;
@property(retain, nonatomic) NSString *sourcePath; // @synthesize sourcePath=_sourcePath;
// - (void).cxx_destruct;
- (id)incrementalPathInDirectory:(id)arg1 withFilename:(id)arg2 andExtension:(id)arg3;
- (BOOL)moveContentsOfDirectory:(id)arg1 toDirectory:(id)arg2 resultURLs:(id )arg3 error:(id )arg4;
- (BOOL)unarchiveSourcePath:(id)arg1 toDestinationPath:(id)arg2 error:(id )arg3;
- (BOOL)unarchiveResultURLs:(id )arg1 error:(id )arg2;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2;

@end

