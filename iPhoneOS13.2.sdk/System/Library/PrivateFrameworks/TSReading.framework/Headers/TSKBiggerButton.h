//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@interface TSKBiggerButton : UIButton
{
    BOOL mHitTestWithOutsets;
    UIEdgeInsets mOutsets;
}

+ (id)tsdPlatformButtonWithFrame:(CGRect)arg1;
- (void)setHitBufferTop:(double)arg1 left:(double)arg2 bottom:(double)arg3 right:(double)arg4;
- (BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2;

@end

