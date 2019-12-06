//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <MediaControls/MTVisualStylingProviderObservingPrivate-Protocol.h>

@class MPCPlayerResponse, MTVisualStylingProvider, MediaControlsTransportButton, NSArray;
@protocol MediaControlsActionsDelegate;

__attribute__((visibility("hidden")))
@interface MediaControlsTransportStackView : UIView <MTVisualStylingProviderObservingPrivate>
{
    BOOL _empty;
    long long _style;
    MPCPlayerResponse *_response;
    MTVisualStylingProvider *_visualStylingProvider;
    id <MediaControlsActionsDelegate> _actionsDelegate;
    MediaControlsTransportButton *_tvRemoteButton;
    MediaControlsTransportButton *_leftButton;
    MediaControlsTransportButton *_middleButton;
    MediaControlsTransportButton *_rightButton;
    MediaControlsTransportButton *_languageOptionsButton;
    NSArray *_threeButtonContraints;
    NSArray *_fiveButtonContraints;
}

@property(retain, nonatomic) NSArray *fiveButtonContraints; // @synthesize fiveButtonContraints=_fiveButtonContraints;
@property(retain, nonatomic) NSArray *threeButtonContraints; // @synthesize threeButtonContraints=_threeButtonContraints;
@property(retain, nonatomic) MediaControlsTransportButton *languageOptionsButton; // @synthesize languageOptionsButton=_languageOptionsButton;
@property(retain, nonatomic) MediaControlsTransportButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) MediaControlsTransportButton *middleButton; // @synthesize middleButton=_middleButton;
@property(retain, nonatomic) MediaControlsTransportButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) MediaControlsTransportButton *tvRemoteButton; // @synthesize tvRemoteButton=_tvRemoteButton;
@property(nonatomic) __weak id <MediaControlsActionsDelegate> actionsDelegate; // @synthesize actionsDelegate=_actionsDelegate;
@property(retain, nonatomic) MTVisualStylingProvider *visualStylingProvider; // @synthesize visualStylingProvider=_visualStylingProvider;
@property(nonatomic, getter=isEmpty) BOOL empty; // @synthesize empty=_empty;
@property(retain, nonatomic) MPCPlayerResponse *response; // @synthesize response=_response;
@property(nonatomic) long long style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)_updateButtonConfiguration;
- (void)_updateButtonLayout;
- (void)_resetTransportButton:(id)arg1;
- (id)_createTransportButton;
- (void)_updateButtonVisualStyling:(id)arg1;
- (void)_updateVisualStylingForButtons;
- (void)providedStylesDidChangeForProvider:(id)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateOnRouteChange;
- (void)buttonHoldReleased:(id)arg1;
- (void)buttonHoldBegan:(id)arg1;
- (void)touchUpInsideCaptionsButton:(id)arg1;
- (void)touchUpInsideRightButton:(id)arg1;
- (void)touchUpInsideMiddleButton:(id)arg1;
- (void)touchUpInsideLeftButton:(id)arg1;
- (void)touchUpInsideHangdogButton:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1;

@end

