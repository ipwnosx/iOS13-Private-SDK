//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUCacheNode.h>

@interface NUVideoCacheNode : NUCacheNode
{
}

- (id)newRenderRequestWithOriginalRequest:(id)arg1 error:(out id )arg2;
- (id)persistentURL;
- (id)outputSettings:(out id )arg1;
- (BOOL)tryLoadPersistentURL:(id)arg1 error:(out id )arg2;
- (id)nodeByReplayingAgainstCache:(id)arg1 pipelineState:(id)arg2 error:(out id )arg3;

@end

