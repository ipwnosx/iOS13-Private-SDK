//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress;

__attribute__((visibility("hidden")))
@interface _CopyfileCallbackCtx : NSObject
{
    BOOL _doArchive;
    BOOL _doUnarchive;
    NSProgress *_progress;
    NSUInteger _generationSize;
}

@property(readonly, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(nonatomic) NSUInteger generationSize; // @synthesize generationSize=_generationSize;
@property(nonatomic) BOOL doUnarchive; // @synthesize doUnarchive=_doUnarchive;
@property(nonatomic) BOOL doArchive; // @synthesize doArchive=_doArchive;
// - (void).cxx_destruct;
- (id)initWithPath:(const char )arg1 error:(id )arg2;

@end

