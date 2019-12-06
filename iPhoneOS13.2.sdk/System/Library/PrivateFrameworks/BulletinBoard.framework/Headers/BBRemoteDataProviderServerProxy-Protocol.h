//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class BBBulletinRequest, BBDataProviderIdentity, BBSectionInfo, NSString;

@protocol BBRemoteDataProviderServerProxy <NSObject>
- (void)setSectionInfo:(BBSectionInfo *)arg1;
- (void)getSectionInfoWithCompletion:(void (^)(BBSectionInfo *, NSError *))arg1;
- (void)setClearedInfo:(id)arg1;
- (void)getClearedInfoWithCompletion:(void (^)(id, NSError *))arg1;
- (void)reloadDefaultSectionInfo:(BBDataProviderIdentity *)arg1;
- (void)reloadSectionParameters:(BBDataProviderIdentity *)arg1;
- (void)withdrawBulletinWithPublisherBulletinID:(NSString *)arg1;
- (void)withdrawBulletinsWithRecordID:(NSString *)arg1;
- (void)modifyBulletin:(BBBulletinRequest *)arg1;
- (void)addBulletin:(BBBulletinRequest *)arg1 forDestinations:(NSUInteger)arg2;
- (void)invalidateBulletins;
@end

