//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVTAvatarFetchRequest, AVTAvatarRecord, NSArray, NSString;
@protocol AVTAvatarRecordChangeTracker, AVTStoreBackendDelegate;

@protocol AVTStoreBackend <NSObject>
@property(readonly, nonatomic) id <AVTAvatarRecordChangeTracker> recordChangeTracker;
@property(nonatomic) __weak id <AVTStoreBackendDelegate> backendDelegate;
- (BOOL)canCreateAvatarWithError:(id )arg1;
- (AVTAvatarRecord *)duplicateAvatarRecord:(AVTAvatarRecord *)arg1 error:(id )arg2;
- (BOOL)deleteAvatarWithIdentifier:(NSString *)arg1 error:(id )arg2;
- (BOOL)saveAvatars:(NSArray *)arg1 error:(id )arg2;
- (BOOL)saveAvatar:(AVTAvatarRecord *)arg1 error:(id )arg2;
- (NSArray *)avatarsForFetchRequest:(AVTAvatarFetchRequest *)arg1 error:(id )arg2;
@end

