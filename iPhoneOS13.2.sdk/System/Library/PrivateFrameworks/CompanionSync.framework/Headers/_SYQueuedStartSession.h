//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SYStartSyncSession;

@interface _SYQueuedStartSession : NSObject
{
    SYStartSyncSession *_request;
    id /* CDUnknownBlockType */ _completion;
}

@property(readonly, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) SYStartSyncSession *request; // @synthesize request=_request;
// - (void).cxx_destruct;
- (id)initWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

