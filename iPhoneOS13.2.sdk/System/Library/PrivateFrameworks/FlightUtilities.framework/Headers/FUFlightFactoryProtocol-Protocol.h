//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDate, NSString;

@protocol FUFlightFactoryProtocol <NSObject>
+ (void)loadFlightsWithNumber:(NSUInteger)arg1 airlineCode:(NSString *)arg2 date:(NSDate *)arg3 dateType:(long long)arg4 completionHandler:(void (^)(NSArray *, NSError *))arg5;
+ (void)loadFlightsWithNumber:(NSUInteger)arg1 airlineCode:(NSString *)arg2 date:(NSDate *)arg3 dateType:(long long)arg4 userAgent:(NSString *)arg5 sessionID:(NSString *)arg6 completionHandler:(void (^)(NSArray *, NSError *))arg7;
@end

