//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PARRequest, PARSession;

@interface PARTask : NSObject
{
    id /* CDUnknownBlockType */ _completionBlock;
    PARSession *_session;
    NSUInteger _queryId;
    PARRequest *_request;
}

@property(retain, nonatomic) PARRequest *request; // @synthesize request=_request;
@property NSUInteger queryId; // @synthesize queryId=_queryId;
@property(nonatomic) __weak PARSession *session; // @synthesize session=_session;
@property(copy, nonatomic) id /* CDUnknownBlockType */ completionBlock; // @synthesize completionBlock=_completionBlock;
// - (void).cxx_destruct;
- (void)resume;

@end

