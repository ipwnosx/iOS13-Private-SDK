//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary;

@protocol AKAppleIDSigningDaemonProtocol <NSObject>
- (void)signaturesForData:(NSDictionary *)arg1 options:(NSDictionary *)arg2 completion:(void (^)(NSDictionary *, NSData *, NSError *))arg3;
- (void)absintheSignatureForData:(NSData *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
@end

