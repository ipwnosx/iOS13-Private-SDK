//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPNumberPad.h>

@protocol SBNumberPadDelegate;

@interface SBNumberPadWithDelegate : TPNumberPad
{
    id <SBNumberPadDelegate> _delegate;
}

@property(nonatomic) __weak id <SBNumberPadDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (id)hitTest:(CGPoint)arg1 withEvent:(id)arg2;
- (id)buttonForPoint:(CGPoint)arg1 forEvent:(id)arg2;
- (void)buttonCancelled:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonUp:(id)arg1;

@end

