//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PLAssetDownloadManagerDelegate;

@interface PLAssetDownloadManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requestsById;
    NSMutableDictionary *_progressById;
    _Atomic int _currentRequestId;
    id <PLAssetDownloadManagerDelegate> _delegate;
}

+ (id)defaultManager;
@property(nonatomic) __weak id <PLAssetDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (void)cancelRequest:(int)arg1;
- (int)requestRequiredResourcesForManagedAssetObjectUUID:(id)arg1 library:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)_onQueueAsync:(CDUnknownBlockType)arg1;

@end

