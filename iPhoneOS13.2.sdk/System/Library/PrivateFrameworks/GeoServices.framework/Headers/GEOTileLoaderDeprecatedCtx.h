//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderDeprecatedCtx : NSObject
{
//     struct __CFRunLoop _runloop;
    GEOTileKeyList *_originalList;
    GEOTileKeyList *_submittedList;
    GEOTileKeyList *_satisfiedList;
    GEOTileKeyList *_notLoaded;
    id /* CDUnknownBlockType */ _callback;
    id /* CDUnknownBlockType */ _progress;
    id /* CDUnknownBlockType */ _error;
    id /* CDUnknownBlockType */ _finished;
}

@property(copy, nonatomic) id /* CDUnknownBlockType */ callback; // @synthesize callback=_callback;
@property(copy, nonatomic) id /* CDUnknownBlockType */ finished; // @synthesize finished=_finished;
@property(copy, nonatomic) id /* CDUnknownBlockType */ error; // @synthesize error=_error;
@property(copy, nonatomic) id /* CDUnknownBlockType */ progress; // @synthesize progress=_progress;
// - (void).cxx_destruct;
// - (void)failure:(const struct _GEOTileKey )arg1 error:(id)arg2 info:(id)arg3;
// - (void)success:(const struct _GEOTileKey )arg1 tile:(id)arg2 info:(id)arg3;
- (void)breakCycle;
- (void)cancel;
- (void)dealloc;
- (id)initWithList:(id)arg1;

@end

