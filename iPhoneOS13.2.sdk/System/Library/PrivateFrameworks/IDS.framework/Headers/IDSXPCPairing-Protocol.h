//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class IDSLocalPairingAddPairedDeviceInfo, NSSet, NSString, NSUUID;

@protocol IDSXPCPairing
- (void)pairedDevicesInfo:(void (^)(NSArray *, NSError *))arg1;
- (void)dropAllMessagesWithoutAnyAllowedClassifierForDevice:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)setAllowedTrafficClassifiersForDevice:(NSString *)arg1 classifiers:(NSSet *)arg2 completion:(void (^)(NSError *))arg3;
- (void)redeliverMessagesForDevice:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)disconnectActivePairedDevice:(void (^)(NSError *))arg1;
- (void)switchActivePairedDeviceWithID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)forgetDeviceWithID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unpairDeviceWithID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)stopLocalPairingForDeviceWithID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)unpairStartForDeviceWithID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)deletePairedDeviceWithID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)updatePairedDeviceWithID:(NSUUID *)arg1 supportIPsec:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)getPairingRecordsWithCompletion:(void (^)(IDSLocalPairingLocalDeviceRecord *, NSDictionary *, NSError *))arg1;
- (void)getPairedDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)getPairingDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)setupCompletedForPairedDeviceWithID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)connectPairedDeviceWithID:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addPairedDeviceWithInfo:(IDSLocalPairingAddPairedDeviceInfo *)arg1 completion:(void (^)(NSError *))arg2;
- (void)addPairedDevice:(NSUUID *)arg1 completion:(void (^)(NSError *))arg2;
@end

