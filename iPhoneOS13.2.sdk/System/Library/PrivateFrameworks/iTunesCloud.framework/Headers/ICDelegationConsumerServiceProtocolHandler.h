//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;
@protocol OS_dispatch_queue;

@interface ICDelegationConsumerServiceProtocolHandler : NSObject
{
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSOperationQueue *_operationQueue;
}

// - (void).cxx_destruct;
- (void)getResponseForStartDelegationRequest:(id)arg1 requestContext:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)getResponseForFinishDelegationRequest:(id)arg1 withSessionIDToRequestInfoMap:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;

@end

