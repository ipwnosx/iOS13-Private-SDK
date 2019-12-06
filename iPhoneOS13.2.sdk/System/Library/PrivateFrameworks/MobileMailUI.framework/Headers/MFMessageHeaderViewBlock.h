//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <MobileMailUI/MFReusable-Protocol.h>

@class MFMessageDisplayMetrics, MessageHeaderViewModel, NSLayoutConstraint, SeparatorLayer, UILayoutGuide;
@protocol EFCancelable;

@interface MFMessageHeaderViewBlock : UIView <MFReusable>
{
    BOOL _separatorIsHidden;
    BOOL _separatorDrawsFlushWithLeadingEdge;
    BOOL _separatorDrawsFlushWithTrailingEdge;
    BOOL _usingLargeTextLayout;
    MessageHeaderViewModel *_viewModel;
    MFMessageDisplayMetrics *_displayMetrics;
    SeparatorLayer *_separator;
    UILayoutGuide *_trailingAccessoryViewLayoutGuide;
    NSLayoutConstraint *_trailingAccessoryViewLayoutGuideWidth;
    NSLayoutConstraint *_trailingAccessoryViewLayoutGuideTrailing;
    NSLayoutConstraint *_separatorLeading;
    NSLayoutConstraint *_separatorTrailing;
    id <EFCancelable> _observableCancelable;
}

@property(retain, nonatomic) id <EFCancelable> observableCancelable; // @synthesize observableCancelable=_observableCancelable;
@property(retain, nonatomic) NSLayoutConstraint *separatorTrailing; // @synthesize separatorTrailing=_separatorTrailing;
@property(retain, nonatomic) NSLayoutConstraint *separatorLeading; // @synthesize separatorLeading=_separatorLeading;
@property(retain, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideTrailing; // @synthesize trailingAccessoryViewLayoutGuideTrailing=_trailingAccessoryViewLayoutGuideTrailing;
@property(retain, nonatomic) NSLayoutConstraint *trailingAccessoryViewLayoutGuideWidth; // @synthesize trailingAccessoryViewLayoutGuideWidth=_trailingAccessoryViewLayoutGuideWidth;
@property(nonatomic) BOOL usingLargeTextLayout; // @synthesize usingLargeTextLayout=_usingLargeTextLayout;
@property(nonatomic) BOOL separatorDrawsFlushWithTrailingEdge; // @synthesize separatorDrawsFlushWithTrailingEdge=_separatorDrawsFlushWithTrailingEdge;
@property(nonatomic) BOOL separatorDrawsFlushWithLeadingEdge; // @synthesize separatorDrawsFlushWithLeadingEdge=_separatorDrawsFlushWithLeadingEdge;
@property(nonatomic) BOOL separatorIsHidden; // @synthesize separatorIsHidden=_separatorIsHidden;
@property(retain, nonatomic) UILayoutGuide *trailingAccessoryViewLayoutGuide; // @synthesize trailingAccessoryViewLayoutGuide=_trailingAccessoryViewLayoutGuide;
@property(retain, nonatomic) SeparatorLayer *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) MFMessageDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property(retain, nonatomic) MessageHeaderViewModel *viewModel; // @synthesize viewModel=_viewModel;
// - (void).cxx_destruct;
- (void)displayMessageUsingViewModel:(id)arg1;
- (void)prepareForReuse;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateConstraints;
- (void)initializePrimaryLayoutConstraints;
- (void)createPrimaryViews;
- (id)initWithFrame:(CGRect)arg1;

@end

