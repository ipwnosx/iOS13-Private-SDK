//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary, NSError, NSHTTPURLResponse, SOAuthorization, UIViewController;

@protocol SOAuthorizationDelegate <NSObject>

@optional
- (void)authorization:(SOAuthorization *)arg1 presentViewController:(UIViewController *)arg2 withCompletion:(void (^)(BOOL, NSError *))arg3;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithHTTPResponse:(NSHTTPURLResponse *)arg2 httpBody:(NSData *)arg3;
- (void)authorization:(SOAuthorization *)arg1 didCompleteWithHTTPAuthorizationHeaders:(NSDictionary *)arg2;
- (void)authorizationDidComplete:(SOAuthorization *)arg1;
- (void)authorizationDidCancel:(SOAuthorization *)arg1;
- (void)authorizationDidNotHandle:(SOAuthorization *)arg1;
@end

