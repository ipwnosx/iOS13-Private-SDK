//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSDictionary, NSString;
@protocol TUMomentsControllerDataSourceDelegate;

@protocol TUMomentsControllerDataSource <NSObject>
@property(nonatomic) __weak id <TUMomentsControllerDataSourceDelegate> delegate;
- (void)invalidate;
- (void)endRequestWithTransactionID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 requesteeID:(NSString *)arg3 completion:(void (^)(NSString *, NSError *))arg4;
- (void)unregisterStreamToken:(long long)arg1 completion:(void (^)(NSError *))arg2;
- (void)registerStreamToken:(long long)arg1 requesterID:(NSString *)arg2 remoteIDSDestinations:(NSDictionary *)arg3 remoteMomentsAvailable:(BOOL)arg4 completion:(void (^)(TUMomentsCapabilities *, NSError *))arg5;
@end

