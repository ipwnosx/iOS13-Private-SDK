//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIColor, UIImage;
@protocol SUICFlamesViewProvidingDelegate;

@protocol SUICFlamesViewProviding <NSObject>
@property(nonatomic) BOOL accelerateTransitions;
@property(nonatomic) double horizontalScaleFactor;
@property(nonatomic) BOOL flamesPaused;
@property(nonatomic) BOOL renderInBackground;
@property(retain, nonatomic) UIColor *dictationColor;
@property(retain, nonatomic) UIImage *overlayImage;
@property(nonatomic) CGRect activeFrame;
@property(nonatomic) BOOL reduceThinkingFramerate;
@property(nonatomic) BOOL reduceFrameRate;
@property(nonatomic) BOOL freezesAura;
@property(nonatomic) BOOL showAura;
@property(nonatomic) long long state;
@property(nonatomic) long long mode;
@property(nonatomic) __weak id <SUICFlamesViewProvidingDelegate> flamesDelegate;
@property(readonly, nonatomic) BOOL isRenderingEnabled;
- (void)resetAndReinitialize:(BOOL)arg1;
- (void)fadeOutCurrentAura;
- (void)setRenderingEnabled:(BOOL)arg1 forReason:(NSString *)arg2;
- (void)prewarmShadersForCurrentMode;
@end

