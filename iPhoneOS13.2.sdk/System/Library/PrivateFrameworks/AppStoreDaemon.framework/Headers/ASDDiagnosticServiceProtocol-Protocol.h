//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol ASDDiagnosticServiceProtocol
- (void)sendCommandWithReplyHandler:(long long)arg1 handler:(void (^)(void))arg2;
- (void)sendCommandWithDetailedReplyHandler:(long long)arg1 handler:(void (^)(NSDictionary *))arg2;
- (void)pingWithReplyHandler:(void (^)(void))arg1;
- (void)activeClientsWithReplyHandler:(void (^)(NSArray *))arg1;
@end

