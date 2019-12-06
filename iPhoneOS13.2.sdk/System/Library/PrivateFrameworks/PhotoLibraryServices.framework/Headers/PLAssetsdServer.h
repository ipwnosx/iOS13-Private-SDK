//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSMutableSet, NSXPCListener, PLBackgroundJobService, PLDistributedNotificationHandler, PLPhotoLibraryBundleController, PLXPCMessageLogger;

@interface PLAssetsdServer : NSObject <NSXPCListenerDelegate>
{
    NSXPCListener *_listener;
    PLXPCMessageLogger *_connectionLogger;
//    struct os_unfair_lock_s _servicesLock;
    NSMutableSet *_services;
    PLPhotoLibraryBundleController *_libraryBundleController;
    PLBackgroundJobService *_backgroundJobService;
    PLDistributedNotificationHandler *_distributedNotificationHandler;
    NSArray *_previewRenderedContentURLs;
    NSArray *_previewAssetLocalIdentifiers;
}

+ (id)sharedServer;
@property(retain, nonatomic) NSArray *previewAssetLocalIdentifiers; // @synthesize previewAssetLocalIdentifiers=_previewAssetLocalIdentifiers;
// - (void).cxx_destruct;
- (id)previewRenderedContentURLAtIndex:(NSUInteger)arg1;
@property(readonly, nonatomic) NSUInteger previewRenderedContentURLCount;
- (void)setPreviewRenderedContentURLs:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)handleInvalidation:(id)arg1;
- (void)handleInterruption:(id)arg1;
- (void)removeService:(id)arg1;
- (void)addService:(id)arg1;
- (void)logStatus;
- (void)_checkInWithLaunchd;
- (void)start;
- (id)init;

@end

