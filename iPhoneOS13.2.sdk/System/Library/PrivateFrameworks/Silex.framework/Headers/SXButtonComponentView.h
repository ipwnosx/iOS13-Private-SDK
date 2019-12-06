//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXComponentView.h>

#import <Silex/SXTextViewDelegate-Protocol.h>

@class SXTextView;

@interface SXButtonComponentView : SXComponentView <SXTextViewDelegate>
{
    SXTextView *_textView;
    CGRect _typographicBounds;
}

@property(nonatomic) CGRect typographicBounds; // @synthesize typographicBounds=_typographicBounds;
@property(readonly, nonatomic) SXTextView *textView; // @synthesize textView=_textView;
// - (void).cxx_destruct;
- (CGRect)absoluteTextViewFrame;
- (id)accessibilityContextualLabelForTextView:(id)arg1;
- (id)accessibilityCustomRotorMembershipForTextView:(id)arg1;
- (id)textRulesForTextView:(id)arg1;
- (id)componentIdentifierForTextView:(id)arg1;
- (void)provideInfosLayoutTo:(id)arg1;
- (void)receivedInfo:(id)arg1 fromLayoutingPhaseWithIdentifier:(id)arg2;
- (void)setPresentationFrame:(CGRect)arg1;
- (void)setAbsoluteFrame:(CGRect)arg1;
- (void)didMoveToSuperview;
// - (void)presentComponentWithChanges:(CDStruct_1cc9d0d0)arg1;
- (id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4;

@end

