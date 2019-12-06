//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIColor;

@protocol FBSceneHostAppearance <NSObject>
@property(readonly, nonatomic) double level;
@property(readonly, nonatomic) CGRect referenceFrame;
@property(readonly, nonatomic, getter=isHosting) BOOL hosting;
@property(nonatomic) NSUInteger appearanceStyle;
@property(copy, nonatomic) NSString *minificationFilterName;
@property(nonatomic) NSUInteger renderingMode;
@property(nonatomic) NSUInteger hostedLayerTypes;
@property(retain, nonatomic) UIColor *backgroundColorWhileNotHosting;
@property(retain, nonatomic) UIColor *backgroundColorWhileHosting;
@property(nonatomic) CGAffineTransform hostViewTransform;
@property(nonatomic, getter=isClippingDisabled) BOOL clippingDisabled;
@end

