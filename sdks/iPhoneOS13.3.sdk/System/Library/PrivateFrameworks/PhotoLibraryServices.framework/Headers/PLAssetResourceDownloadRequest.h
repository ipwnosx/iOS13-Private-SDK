//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, NSManagedObjectID, NSObject, NSString, PLPhotoLibrary;
@protocol OS_dispatch_queue;

@interface PLAssetResourceDownloadRequest : NSOperation
{
    NSObject<OS_dispatch_queue> *_queue;
    PLPhotoLibrary *_library;
    id /* CDUnknownBlockType */ _progressHandler;
    NSString *_assetUUID;
    int _requestID;
    NSManagedObjectID *_objectID;
    NSUInteger _cloudResourceType;
    NSString *_cplTaskIdentifier;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) NSString *cplTaskIdentifier; // @synthesize cplTaskIdentifier=_cplTaskIdentifier;
@property(readonly, nonatomic) NSUInteger cloudResourceType; // @synthesize cloudResourceType=_cloudResourceType;
@property(readonly, nonatomic) NSManagedObjectID *objectID; // @synthesize objectID=_objectID;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
// - (void).cxx_destruct;
- (void)cancel;
- (void)main;
- (id)initWithRequestID:(int)arg1 library:(id)arg2 queue:(id)arg3 cloudResourceType:(NSUInteger)arg4 managedObjectID:(id)arg5 progressHandler:(id /* CDUnknownBlockType */)arg6;
- (void)_onQueueAsync:(id /* CDUnknownBlockType */)arg1;

@end
