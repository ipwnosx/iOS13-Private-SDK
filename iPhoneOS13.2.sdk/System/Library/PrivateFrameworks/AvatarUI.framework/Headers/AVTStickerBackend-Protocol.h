//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVTStickerFetchRequest, NSArray, NSString;
@protocol AVTAvatarRecordChangeTracker, AVTStickerBackendDelegate;

@protocol AVTStickerBackend <NSObject>
- (void)deleteRecentStickersForChangeTracker:(id <AVTAvatarRecordChangeTracker>)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)deleteRecentStickersWithAvatarIdentifier:(NSString *)arg1 stickerIdentifier:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)didUseStickerWithAvatarIdentifier:(NSString *)arg1 stickerIdentifier:(NSString *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (NSArray *)recentStickersForFetchRequest:(AVTStickerFetchRequest *)arg1 error:(id )arg2;

@optional
@property(nonatomic) __weak id <AVTStickerBackendDelegate> stickerBackendDelegate;
@end

