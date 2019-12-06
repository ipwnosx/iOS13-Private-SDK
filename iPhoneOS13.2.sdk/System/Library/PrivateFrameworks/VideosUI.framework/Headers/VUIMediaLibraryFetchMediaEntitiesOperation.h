//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIMediaLibraryOperation.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface VUIMediaLibraryFetchMediaEntitiesOperation : VUIMediaLibraryOperation
{
    NSArray *_responses;
    NSArray *_requests;
}

@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(copy, nonatomic) NSArray *responses; // @synthesize responses=_responses;
// - (void).cxx_destruct;
- (void)executionDidBegin;
- (id)initWithMediaLibrary:(id)arg1 requests:(id)arg2;
- (id)initWithMediaLibrary:(id)arg1;

@end

