//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, NSHTTPURLResponse, NSURLAuthenticationChallenge, NSURLRequest, NSURLResponse, NSURLSessionConfiguration, RUIActionSignal, RUILoader, RUIObjectModel;

@protocol RUILoaderDelegate <NSObject>

@optional
- (void)loader:(RUILoader *)arg1 receivedObjectModel:(RUIObjectModel *)arg2 actionSignal:(NSUInteger)arg3;
- (void)loader:(RUILoader *)arg1 didFailWithError:(NSError *)arg2;
- (NSURLSessionConfiguration *)sessionConfigurationForLoader:(RUILoader *)arg1;
- (void)loader:(RUILoader *)arg1 willLoadRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3 completionHandler:(void (^)(NSURLRequest *, NSError *))arg4;
- (NSURLRequest *)loader:(RUILoader *)arg1 willLoadRequest:(NSURLRequest *)arg2 redirectResponse:(NSURLResponse *)arg3;
- (void)loader:(RUILoader *)arg1 didReceiveChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)loader:(RUILoader *)arg1 didReceiveHTTPResponse:(NSHTTPURLResponse *)arg2;
- (void)loader:(RUILoader *)arg1 didFinishLoadWithError:(NSError *)arg2;
- (void)loader:(RUILoader *)arg1 receivedObjectModel:(RUIObjectModel *)arg2 topActionSignal:(RUIActionSignal *)arg3;
@end

