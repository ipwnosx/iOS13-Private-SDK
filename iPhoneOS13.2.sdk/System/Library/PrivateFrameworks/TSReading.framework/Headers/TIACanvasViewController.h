//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSWPiOSCanvasViewController.h>

@class TSAInteractiveCanvasController, UIGestureRecognizer;

@interface TIACanvasViewController : TSWPiOSCanvasViewController
{
}

- (id)p_LocalGestureRecognizers;
@property(readonly, nonatomic) TSAInteractiveCanvasController *interactiveCanvasController;
- (BOOL)wantsHyperlinkGestureRecognizer;
@property UIGestureRecognizer *hyperlinkGestureRecognizer;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)setUpGestureRecognizers;
- (id)commonGestureRecognizers;

@end

