//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LinkPresentation/LPComponentView.h>

#import <LinkPresentation/LPContentInsettable-Protocol.h>
#import <LinkPresentation/LPTextStyleable-Protocol.h>

@class LPCaptionButtonPresentationProperties, LPTextView, UIButton;

__attribute__((visibility("hidden")))
@interface LPHorizontalCaptionPairView : LPComponentView <LPTextStyleable, LPContentInsettable>
{
    LPTextView *_leftView;
    LPTextView *_rightView;
    LPCaptionButtonPresentationProperties *_buttonProperties;
    UIEdgeInsets _contentInset;
    long long _balancingMode;
    UIButton *_button;
}

// - (void).cxx_destruct;
- (void)buttonPressed:(id)arg1;
- (CGSize)_layoutCaptionPairForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutComponentView;
- (void)setOverrideMaximumNumberOfLines:(long long)arg1;
- (long long)computedNumberOfLines;
- (double)descender;
- (double)ascender;
- (double)lastLineDescent;
- (double)firstLineLeading;
- (void)setContentInset:(UIEdgeInsets)arg1;
- (id)initWithLeadingText:(id)arg1 leadingStyle:(id)arg2 trailingText:(id)arg3 trailingStyle:(id)arg4 button:(id)arg5 balancingMode:(long long)arg6;
- (id)init;

@end

