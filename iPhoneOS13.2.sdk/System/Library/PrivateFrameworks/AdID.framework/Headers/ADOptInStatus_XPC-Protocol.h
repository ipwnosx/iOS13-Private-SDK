//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol ADOptInStatus_XPC
- (void)clearAdvertisingIdentifier;
- (void)advertisingIdentifier:(void (^)(NSUUID *))arg1;
- (void)advertisingIdentifierChanged:(void (^)(void))arg1;
- (void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(void (^)(long long))arg2;
- (void)setOptInStatus:(BOOL)arg1 completionHandler:(void (^)(long long))arg2;
@end

