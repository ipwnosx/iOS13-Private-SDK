//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class MPRequestResponseController, NSError;

@protocol MPRequestResponseControllerDelegate <NSObject>

@optional
- (void)didFinishLoadingRequestForController:(MPRequestResponseController *)arg1;
- (void)willBeginLoadingRequestForController:(MPRequestResponseController *)arg1;
- (BOOL)controller:(MPRequestResponseController *)arg1 shouldRetryFailedRequestWithError:(NSError *)arg2;
- (void)controller:(MPRequestResponseController *)arg1 defersResponseReplacement:(void (^)(void))arg2;
@end

