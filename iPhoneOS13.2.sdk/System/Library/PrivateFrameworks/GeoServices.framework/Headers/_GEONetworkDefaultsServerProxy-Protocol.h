//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol _GEONetworkDefaultsServerProxyDelegate;

@protocol _GEONetworkDefaultsServerProxy <NSObject>
@property(nonatomic) __weak id <_GEONetworkDefaultsServerProxyDelegate> delegate;
- (void)updateNetworkDefaults:(void (^)(NSError *))arg1;
@end

