//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStoreUI/SUSubtitledButton.h>

@class UIBezierPath, UIView;

@interface SURoundedCornersButton : SUSubtitledButton
{
    UIBezierPath *_bezierPath;
    UIView *_highlightedBackgroundView;
    UIBezierPath *_shadowPath;
}

- (id)_highlightedBackgroundView;
- (void)setFrame:(CGRect)arg1;
- (void)drawRect:(CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(CGRect)arg1;

@end

