//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSURL, SKUIScreenshotDataConsumer, UIImage, UIViewController;

@protocol SKUISlideshowViewControllerDataSource <NSObject>
- (UIImage *)slideshowViewController:(UIViewController *)arg1 placeholderImageAtIndex:(long long)arg2;
- (NSURL *)slideshowViewController:(UIViewController *)arg1 imageURLAtIndex:(long long)arg2;
- (SKUIScreenshotDataConsumer *)slideshowViewController:(UIViewController *)arg1 dataConsumerAtIndex:(long long)arg2;
- (long long)numberOfItemsInSlideshowViewController:(UIViewController *)arg1;
@end

