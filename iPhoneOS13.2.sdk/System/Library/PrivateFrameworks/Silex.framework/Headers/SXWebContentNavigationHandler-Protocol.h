//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSURLRequest, UIViewController;

@protocol SXWebContentNavigationHandler <NSObject>
- (NSUInteger)handleRequest:(NSURLRequest *)arg1;

@optional
- (void)commitViewController:(UIViewController *)arg1 URLRequest:(NSURLRequest *)arg2;
- (UIViewController *)previewViewControllerForRequest:(NSURLRequest *)arg1;
@end

