//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIView;
@protocol TPDialerKeypadDelegate, TPNumberPadButtonProtocol;

@protocol TPDialerKeypadProtocol <NSObject>
- (void)setPlaysSounds:(BOOL)arg1;
- (long long)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(long long)arg1;
- (void)setDelegate:(id <TPDialerKeypadDelegate>)arg1;

@optional
- (void)replaceButton:(UIView<TPNumberPadButtonProtocol> *)arg1 atIndex:(NSUInteger)arg2;
- (void)performTapActionCancelForHighlightedKey;
- (void)performTapActionEndForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
@end

