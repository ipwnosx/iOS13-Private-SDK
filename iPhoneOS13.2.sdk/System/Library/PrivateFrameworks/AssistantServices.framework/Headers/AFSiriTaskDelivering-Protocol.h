//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AFSiriTask;

@protocol AFSiriTaskDelivering <NSObject>
- (void)deliverSiriTask:(AFSiriTask *)arg1 completionHandler:(void (^)(NSError *))arg2;

@optional
- (void)siriTaskDidFinish;
@end

