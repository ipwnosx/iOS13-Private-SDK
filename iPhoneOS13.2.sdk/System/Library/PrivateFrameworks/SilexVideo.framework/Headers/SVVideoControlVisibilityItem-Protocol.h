//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@protocol SVVideoControlItemAnimating;

@protocol SVVideoControlVisibilityItem <NSObject>
@property(readonly, nonatomic) BOOL hideable;
- (void)hide:(BOOL)arg1 withAnimationCoordinator:(id <SVVideoControlItemAnimating>)arg2;
- (BOOL)isVisible;
@end

