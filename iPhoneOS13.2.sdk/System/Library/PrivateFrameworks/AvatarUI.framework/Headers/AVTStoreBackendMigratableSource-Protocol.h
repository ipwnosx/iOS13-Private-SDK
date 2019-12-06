//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AVTAvatarRecord;
@protocol AVTStoreBackend;

@protocol AVTStoreBackendMigratableSource <NSObject>
- (AVTAvatarRecord *)migratedRecordFromRecord:(AVTAvatarRecord *)arg1 index:(NSUInteger)arg2 totalCount:(NSUInteger)arg3;
- (BOOL)finalizeMigration:(id )arg1;
- (id <AVTStoreBackend>)createSourceBackend;
- (BOOL)migrationNeeded;
@end

