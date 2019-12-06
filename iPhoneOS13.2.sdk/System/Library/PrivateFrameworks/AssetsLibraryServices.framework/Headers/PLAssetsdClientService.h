//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssetsLibraryServices/PLAssetsdClientServiceProtocol-Protocol.h>

@class NSMutableArray;

@interface PLAssetsdClientService : NSObject <PLAssetsdClientServiceProtocol>
{
    NSMutableArray *_libraryUnavailabilityHandlers;
}

// - (void).cxx_destruct;
- (void)libraryBecameUnavailable:(id)arg1 reason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)resourceRepairIdentifier:(id)arg1 finishedWithSuccess:(BOOL)arg2 error:(id)arg3;
- (void)resourceURLReceivedForIdentifier:(id)arg1 url:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)assetAvailableForIdentifier:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)downloadFinishedForIdentifier:(id)arg1 success:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)downloadStatusForIdentifier:(id)arg1 progress:(double)arg2 completed:(BOOL)arg3 data:(id)arg4 error:(id)arg5;
- (void)addPhotoLibraryUnavailabilityHandler:(CDUnknownBlockType)arg1;

@end

