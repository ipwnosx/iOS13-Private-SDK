//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSURL;

@protocol PLAssetsdLibraryManagementServiceProtocol <NSObject>
- (void)getPhotoLibraryURLsWithReply:(void (^)(NSURL *, NSURL *, NSError *))arg1;
- (void)getActivePhotoLibrariesWithReply:(void (^)(NSSet *, NSError *))arg1;
- (void)setSystemPhotoLibraryURL:(NSURL *)arg1 bookmark:(NSData *)arg2 options:(unsigned short)arg3 reply:(void (^)(NSError *))arg4;
@end

