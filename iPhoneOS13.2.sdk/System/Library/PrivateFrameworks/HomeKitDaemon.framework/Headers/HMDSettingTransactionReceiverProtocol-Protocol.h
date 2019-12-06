//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol HMDSettingConstraintModelProtocol, HMDSettingGroupModelProtocol, HMDSettingModelProtocol;

@protocol HMDSettingTransactionReceiverProtocol <NSObject>
- (void)transactionSettingConstraintModelRemoved:(id <HMDSettingConstraintModelProtocol>)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)transactionSettingConstraintModelUpdated:(id <HMDSettingConstraintModelProtocol>)arg1 previousModel:(id <HMDSettingConstraintModelProtocol>)arg2 completion:(void (^)(HMBAction *))arg3;
- (void)transactionSettingModelRemoved:(id <HMDSettingModelProtocol>)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)transactionSettingModelUpdated:(id <HMDSettingModelProtocol>)arg1 previousModel:(id <HMDSettingModelProtocol>)arg2 completion:(void (^)(HMBAction *))arg3;
- (void)transactionSettingGroupModelRemoved:(id <HMDSettingGroupModelProtocol>)arg1 completion:(void (^)(HMBAction *))arg2;
- (void)transactionSettingGroupModelUpdated:(id <HMDSettingGroupModelProtocol>)arg1 previousModel:(id <HMDSettingGroupModelProtocol>)arg2 completion:(void (^)(HMBAction *))arg3;
@end

