//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError;

@protocol DDRClientObserverProtocol <NSObject>
- (void)didCompleteDataResetMode:(long long)arg1 withError:(NSError *)arg2 completion:(void (^)(void))arg3;
- (void)didBeginDataResetWithMode:(long long)arg1;
- (void)willBeginDataResetWithMode:(long long)arg1;
@end

