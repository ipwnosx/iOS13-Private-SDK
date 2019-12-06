//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFFileCacheStore-Protocol.h>

@class NSString, NSURL;

@interface SBFFileCacheFileStore : NSObject <SBFFileCacheStore>
{
    NSURL *_directoryURL;
}

@property(readonly, copy, nonatomic) NSURL *directoryURL; // @synthesize directoryURL=_directoryURL;
// - (void).cxx_destruct;
- (void)removeAllFileWrappersForFileCache:(id)arg1;
- (void)fileCache:(id)arg1 removeFileWrapperNamed:(id)arg2;
- (id)fileCache:(id)arg1 loadFileWrapperNamed:(id)arg2;
- (void)fileCache:(id)arg1 storeFileWrapper:(id)arg2;
- (id)fileURLForFileNamed:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1;

@end

