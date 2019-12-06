//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class PKLinkedAppIconView, PKPass, PKPaymentPass, UIButton;
@protocol PKPassFooterContentViewDelegate;

@interface PKPassFooterContentView : UIView
{
    BOOL _userIntentRequired;
    BOOL _invalidated;
    BOOL _requestPileSuppression;
    long long _style;
    id <PKPassFooterContentViewDelegate> _delegate;
    PKPass *_pass;
    PKLinkedAppIconView *_appIconView;
    UIButton *_infoButton;
    UIView *_bottomRule;
    long long _coachingState;
}

@property(readonly, nonatomic) BOOL requestPileSuppression; // @synthesize requestPileSuppression=_requestPileSuppression;
@property(readonly, nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, nonatomic) long long coachingState; // @synthesize coachingState=_coachingState;
@property(readonly, nonatomic, getter=isUserIntentRequired) BOOL userIntentRequired; // @synthesize userIntentRequired=_userIntentRequired;
@property(readonly, nonatomic) UIView *bottomRule; // @synthesize bottomRule=_bottomRule;
@property(readonly, nonatomic) UIButton *infoButton; // @synthesize infoButton=_infoButton;
@property(readonly, nonatomic) PKLinkedAppIconView *appIconView; // @synthesize appIconView=_appIconView;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(nonatomic) id <PKPassFooterContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (id)_buttonWithTitle:(id)arg1;
- (void)_infoButtonPressed:(id)arg1;
- (void)_setRequestPileSuppression:(BOOL)arg1;
- (void)_setCoachingState:(long long)arg1;
- (void)_setUserIntentRequired:(BOOL)arg1;
@property(readonly, nonatomic, getter=isPassAuthorized) BOOL passAuthorized;
- (void)invalidate;
- (void)didBecomeHiddenAnimated:(BOOL)arg1;
- (void)willBecomeHiddenAnimated:(BOOL)arg1;
- (void)didBecomeVisibleAnimated:(BOOL)arg1;
- (void)willBecomeVisibleAnimated:(BOOL)arg1;
- (void)layoutSubviews;
@property(readonly, nonatomic) PKPaymentPass *paymentPass;
- (void)dealloc;
- (id)initWithPass:(id)arg1;
- (id)init;

@end

