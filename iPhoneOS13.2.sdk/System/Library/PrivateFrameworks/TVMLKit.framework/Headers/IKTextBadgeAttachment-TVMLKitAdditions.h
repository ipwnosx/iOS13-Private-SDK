//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKTextBadgeAttachment.h>

@class IKColor;

@interface IKTextBadgeAttachment (TVMLKitAdditions)
- (void)tv_resolveWithTextLayoutDirection:(long long)arg1 layoutObserver:(CDUnknownBlockType)arg2;
- (void)tv_setImage:(id)arg1;
@property(retain, nonatomic, setter=tv_setCurrentTintColor:) IKColor *tv_currentTintColor;
@property(retain, nonatomic, setter=tv_setHighlightColor:) IKColor *tv_highlightColor;
- (void)tv_setResolving:(BOOL)arg1;
@property(readonly, nonatomic, getter=tv_isResolving) BOOL tv_resolving;
- (void)tv_setImageProxy:(id)arg1;
- (id)tv_imageProxy;
@end

