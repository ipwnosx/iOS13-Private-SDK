//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SVVisibilityMonitoring <NSObject>
@property(readonly, nonatomic) __weak id object;
@property(readonly, nonatomic) double visiblePercentage;
@property(readonly, nonatomic) BOOL appeared;
@property(readonly, nonatomic) NSUInteger state;
- (void)onDidDisappear:(void (^)(id <SVVisibilityMonitoring>))arg1;
- (void)onWillDisappear:(void (^)(id <SVVisibilityMonitoring>))arg1;
- (void)onVisiblePercentageChange:(void (^)(id <SVVisibilityMonitoring>, double))arg1;
- (void)onDidAppear:(void (^)(id <SVVisibilityMonitoring>))arg1;
- (void)onWillAppear:(void (^)(id <SVVisibilityMonitoring>))arg1;
@end

