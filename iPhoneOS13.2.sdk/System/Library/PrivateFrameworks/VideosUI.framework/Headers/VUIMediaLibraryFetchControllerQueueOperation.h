//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryFetchControllerQueueOperation : VUIAsynchronousOperation
{
    NSArray *_fetchControllers;
    NSUInteger _mediaLibraryRevision;
}

@property(nonatomic) NSUInteger mediaLibraryRevision; // @synthesize mediaLibraryRevision=_mediaLibraryRevision;
@property(copy, nonatomic) NSArray *fetchControllers; // @synthesize fetchControllers=_fetchControllers;
// - (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithFetchControllers:(id)arg1 mediaLibraryRevision:(NSUInteger)arg2;
- (id)init;

@end

