//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSXPCConnection;
@protocol WBSCyclerTestTarget;

@interface WBSCyclerTestTargetProxyController : NSObject
{
    NSXPCConnection *_xpcConnection;
}

// - (void).cxx_destruct;
@property(readonly, nonatomic) id <WBSCyclerTestTarget> testTargetProxy;
@property(copy, nonatomic) id /* CDUnknownBlockType */ disconnectionHandler;
- (void)dealloc;
- (id)initWithEndpoint:(id)arg1;
- (id)init;

@end

