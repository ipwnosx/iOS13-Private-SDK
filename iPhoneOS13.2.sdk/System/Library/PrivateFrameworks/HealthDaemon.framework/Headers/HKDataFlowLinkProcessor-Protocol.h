//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class HKDataFlowLink;

@protocol HKDataFlowLinkProcessor <NSObject>

@optional
- (void)dataFlowLink:(HKDataFlowLink *)arg1 didAddDestination:(HKDataFlowLink *)arg2 direct:(BOOL)arg3;
- (void)dataFlowLink:(HKDataFlowLink *)arg1 didAddSource:(HKDataFlowLink *)arg2 direct:(BOOL)arg3;
@end

