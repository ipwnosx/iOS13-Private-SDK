//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL;

@interface DEArchive : NSObject
{
//     struct archive _archive;
    BOOL _hasClosedArchive;
    NSURL *_tarGzUrl;
    NSURL *_sourceDir;
}

@property(retain) NSURL *sourceDir; // @synthesize sourceDir=_sourceDir;
@property(retain) NSURL *tarGzUrl; // @synthesize tarGzUrl=_tarGzUrl;
// - (void).cxx_destruct;
// - (struct archive )archiverForUrl:(id)arg1;
- (void)dealloc;
- (void)closeArchive;
- (BOOL)addFile:(id)arg1 withPathName:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

