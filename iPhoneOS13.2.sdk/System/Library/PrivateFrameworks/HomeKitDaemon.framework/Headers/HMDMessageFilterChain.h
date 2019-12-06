//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSMutableArray;
@protocol HMFLocking;

@interface HMDMessageFilterChain : HMFObject
{
    id <HMFLocking> _lock;
    NSMutableArray *_filters;
}

// - (void).cxx_destruct;
- (void)resetConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)shouldCloudSyncData;
- (BOOL)acceptMessage:(id)arg1 error:(id )arg2;
- (void)removeMessageFilter:(id)arg1;
- (void)addMessageFilter:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *filters;
- (id)init;

@end

