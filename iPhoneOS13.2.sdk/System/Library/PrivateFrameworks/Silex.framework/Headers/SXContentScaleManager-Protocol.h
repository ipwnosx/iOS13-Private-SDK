//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SXContentScaleManagerDelegate;

@protocol SXContentScaleManager <NSObject>
@property(nonatomic) __weak id <SXContentScaleManagerDelegate> delegate;
@property(readonly, nonatomic) double contentScaleFactor;
@property(readonly, nonatomic) long long contentScale;
- (void)reset;
- (void)decrease;
- (void)increase;
@end

