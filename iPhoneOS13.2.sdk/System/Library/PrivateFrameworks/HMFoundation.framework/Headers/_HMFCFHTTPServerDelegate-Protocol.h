//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class _HMFCFHTTPServer, _HMFCFHTTPServerConnection;

@protocol _HMFCFHTTPServerDelegate <NSObject>
- (void)server:(_HMFCFHTTPServer *)arg1 didCloseConnection:(_HMFCFHTTPServerConnection *)arg2;
- (void)server:(_HMFCFHTTPServer *)arg1 didOpenConnection:(_HMFCFHTTPServerConnection *)arg2;
- (void)serverDidInvalidate:(_HMFCFHTTPServer *)arg1;
@end

