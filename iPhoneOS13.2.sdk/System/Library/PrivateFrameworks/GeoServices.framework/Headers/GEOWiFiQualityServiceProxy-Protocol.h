//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class GEOApplicationAuditToken, GEOWiFiQualityServiceRequest, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol GEOWiFiQualityServiceProxy <NSObject>
- (void)submitWiFiQualityTileLoadForKey:(NSString *)arg1 eTag:(NSString *)arg2 requestId:(NSString *)arg3 auditToken:(GEOApplicationAuditToken *)arg4 completionQueue:(NSObject<OS_dispatch_queue> *)arg5 completion:(void (^)(NSString *, NSString *, NSData *, NSError *))arg6;
- (void)cancelRequestId:(NSString *)arg1;
- (void)submitWiFiQualityServiceRequest:(GEOWiFiQualityServiceRequest *)arg1 requestId:(NSString *)arg2 auditToken:(GEOApplicationAuditToken *)arg3 completionQueue:(NSObject<OS_dispatch_queue> *)arg4 completion:(void (^)(GEOWiFiQualityServiceResponse *, NSError *))arg5;
@end

