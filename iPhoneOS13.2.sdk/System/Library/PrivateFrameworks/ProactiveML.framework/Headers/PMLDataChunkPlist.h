//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveML/PMLDataChunk.h>

@interface PMLDataChunkPlist : PMLDataChunk
{
    id _plist;
    BOOL _parsed;
}

+ (id)chunkWithPlist:(id)arg1;
+ (unsigned int)dataChunkType;
// - (void).cxx_destruct;
@property(readonly, nonatomic) id plist;

@end

