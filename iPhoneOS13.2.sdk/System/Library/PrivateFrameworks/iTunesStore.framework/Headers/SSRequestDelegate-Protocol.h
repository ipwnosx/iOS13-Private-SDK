//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSError, SSRequest;

@protocol SSRequestDelegate <NSObject>

@optional
- (void)requestDidFinish:(SSRequest *)arg1;
- (void)request:(SSRequest *)arg1 didFailWithError:(NSError *)arg2;
@end

