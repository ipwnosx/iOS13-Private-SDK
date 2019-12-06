//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface HUColoredButton : UIButton
{
    BOOL _backgroundColorFollowsTintColor;
    double _highlightedAlpha;
    double _highlightedTextAlpha;
}

@property(nonatomic) double highlightedTextAlpha; // @synthesize highlightedTextAlpha=_highlightedTextAlpha;
@property(nonatomic) double highlightedAlpha; // @synthesize highlightedAlpha=_highlightedAlpha;
@property(nonatomic) BOOL backgroundColorFollowsTintColor; // @synthesize backgroundColorFollowsTintColor=_backgroundColorFollowsTintColor;
- (void)tintColorDidChange;
- (void)setHighlighted:(BOOL)arg1;
@property(nonatomic) double cornerRadius;
- (id)initWithFrame:(CGRect)arg1 highlightedAlpha:(double)arg2 highlightedTextAlpha:(double)arg3;
- (id)initWithFrame:(CGRect)arg1;

@end

