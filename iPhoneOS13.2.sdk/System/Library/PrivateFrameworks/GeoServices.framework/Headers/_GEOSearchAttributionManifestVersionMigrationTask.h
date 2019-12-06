//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOActiveTileGroupMigrationTask-Protocol.h>

@class GEOActiveTileGroup, GEOActiveTileGroupMigrationTaskOptions, GEOReportedProgress, GEOSearchAttributionManifest, GEOSearchAttributionManifestVersionMigrator, NSProgress, NSURL, NSURLSession, NSURLSessionDataTask;
@protocol GEORequestCounterTicket, NSObject, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _GEOSearchAttributionManifestVersionMigrationTask : NSObject <GEOActiveTileGroupMigrationTask>
{
    GEOSearchAttributionManifestVersionMigrator *_migrator;
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _running;
    NSURL *_newSearchAttributionManifestURL;
    GEOActiveTileGroup *_oldTileGroup;
    id /* CDUnknownBlockType */ _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    GEOReportedProgress *_progress;
    NSURLSession *_urlSession;
    NSURLSessionDataTask *_downloadTask;
    id <GEORequestCounterTicket> _requestCounterTicket;
    GEOSearchAttributionManifest *_attributionManifest;
    id <NSObject> _transaction;
    GEOActiveTileGroupMigrationTaskOptions *_options;
}

@property(retain, nonatomic) GEOActiveTileGroupMigrationTaskOptions *options; // @synthesize options=_options;
@property(retain, nonatomic) id <NSObject> transaction; // @synthesize transaction=_transaction;
// - (void).cxx_destruct;
- (void)removeOldData:(id)arg1;
- (void)_completeWithError:(id)arg1;
- (void)populateTileGroup:(id)arg1;
- (void)cancel;
- (void)_handleResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;
@property(readonly) NSProgress *progress;
@property(readonly, nonatomic) long long estimatedWeight;
- (void)dealloc;
- (id)initWithMigrator:(id)arg1 newSearchAttributionManifestURL:(id)arg2 oldTileGroup:(id)arg3;
- (id)init;

@end

