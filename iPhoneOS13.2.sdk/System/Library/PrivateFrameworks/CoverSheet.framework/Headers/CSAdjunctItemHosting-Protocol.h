//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoverSheet/MTVisualStylingRequiring-Protocol.h>

@class UIView;
@protocol PLPlatter;

@protocol CSAdjunctItemHosting <NSObject, MTVisualStylingRequiring>
- (UIView *)view;
- (CGSize)preferredContentSize;

@optional
- (UIView<PLPlatter> *)platterView;
- (void)setContainerSize:(CGSize)arg1;
@end

