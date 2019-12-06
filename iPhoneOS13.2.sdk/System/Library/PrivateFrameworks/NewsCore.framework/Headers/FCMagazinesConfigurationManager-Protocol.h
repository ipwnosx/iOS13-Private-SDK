//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSData, NSObject;
@protocol OS_dispatch_queue;

@protocol FCMagazinesConfigurationManager <NSObject>
@property(readonly, nonatomic) NSArray *segmentSetIDs;
@property(readonly, nonatomic) NSArray *treatmentIDs;
@property(readonly, nonatomic) NSData *magazinesConfigurationData;
- (void)fetchMagazinesConfigurationIfNeededWithCompletionQueue:(NSObject<OS_dispatch_queue> *)arg1 completion:(void (^)(NSData *, NSError *))arg2;
@end

