//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class AKCalloutBar;

@interface AKCalloutButton : UIButton
{
    int _position;
    AKCalloutBar *_bar;
}

@property(nonatomic) __weak AKCalloutBar *bar; // @synthesize bar=_bar;
@property(nonatomic) int position; // @synthesize position=_position;
// - (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg1;
- (id)initWithFrame:(CGRect)arg1;

@end

