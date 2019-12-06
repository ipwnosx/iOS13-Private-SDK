//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ETCanvasView, ETMessage, UITapGestureRecognizer;

@protocol ETCanvasViewDelegate <NSObject>
- (long long)recentHeartRate;
- (BOOL)canvasViewShouldSendWithTimer:(ETCanvasView *)arg1;
- (void)canvasViewWillReachComposingSizeLimit:(ETCanvasView *)arg1;
- (void)canvasViewDidEndStroke:(ETCanvasView *)arg1;
- (void)canvasViewDidBeginStroke:(ETCanvasView *)arg1;
- (void)canvasView:(ETCanvasView *)arg1 sendMessage:(ETMessage *)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didEndComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didUpdateComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didBeginComposingMessageType:(unsigned short)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didEndPlayingMessage:(ETMessage *)arg2;
- (void)canvasView:(ETCanvasView *)arg1 willEndPlayingMessage:(ETMessage *)arg2;
- (void)canvasView:(ETCanvasView *)arg1 didBeginPlayingMessage:(ETMessage *)arg2;

@optional
- (void)canvasView:(ETCanvasView *)arg1 angerUsesForceTouch:(BOOL)arg2;
- (void)canvasViewDidEndMediaAppearance:(ETCanvasView *)arg1;
- (void)canvasViewDidStartMediaAppearance:(ETCanvasView *)arg1;
- (BOOL)canvasView:(ETCanvasView *)arg1 tapRecognizerShouldBegin:(UITapGestureRecognizer *)arg2;
- (void)canvasViewDidUnpause:(ETCanvasView *)arg1;
- (void)canvasViewDidPause:(ETCanvasView *)arg1;
- (BOOL)canvasViewShouldUseFastVerticalWisp:(ETCanvasView *)arg1;
@end

