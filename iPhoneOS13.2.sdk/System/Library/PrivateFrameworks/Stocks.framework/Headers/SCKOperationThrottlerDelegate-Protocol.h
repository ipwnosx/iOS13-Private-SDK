//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SCKOperationThrottler;

@protocol SCKOperationThrottlerDelegate <NSObject>

@optional
- (void)operationThrottler:(id <SCKOperationThrottler>)arg1 performAsyncOperationWithCompletion:(void (^)(void))arg2;
- (void)operationThrottlerPerformOperation:(id <SCKOperationThrottler>)arg1;
@end

