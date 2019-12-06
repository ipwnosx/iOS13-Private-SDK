//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, UIFocusSystem, UIView;
@protocol UICoordinateSpace;

@protocol _UILegacyFocusRegion <NSObject>
- (UIView *)_focusDebugOverlayParentView;
- (NSArray *)_focusRegionGuides;
- (UIView *)_focusRegionView;
- (BOOL)_isTransparentFocusRegion;
- (UIView *)_fulfillPromisedFocusRegion;
- (BOOL)_isPromiseFocusRegion;
- (NSArray *)_childFocusRegionsInRect:(CGRect)arg1 inCoordinateSpace:(id <UICoordinateSpace>)arg2;
- (BOOL)canBecomeFocused;
- (BOOL)_legacy_isEligibleForFocusInteraction;
- (CGRect)_focusRegionFrame;
- (UIFocusSystem *)_focusRegionFocusSystem;
@end

