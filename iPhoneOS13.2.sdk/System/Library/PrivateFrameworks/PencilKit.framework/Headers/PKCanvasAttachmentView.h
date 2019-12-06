//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKAttachmentView.h>

@class NSMutableArray, PKCanvasView;

@interface PKCanvasAttachmentView : PKAttachmentView
{
    BOOL __wantsFullyRenderedNotification;
    PKCanvasView *_canvasView;
    double _drawingWidth;
    NSMutableArray *_fullyRenderedCompletionBlocks;
}

@property(retain, nonatomic) NSMutableArray *fullyRenderedCompletionBlocks; // @synthesize fullyRenderedCompletionBlocks=_fullyRenderedCompletionBlocks;
@property(nonatomic) double drawingWidth; // @synthesize drawingWidth=_drawingWidth;
@property(nonatomic) BOOL _wantsFullyRenderedNotification; // @synthesize _wantsFullyRenderedNotification=__wantsFullyRenderedNotification;
@property(nonatomic) __weak PKCanvasView *canvasView; // @synthesize canvasView=_canvasView;
// - (void).cxx_destruct;
- (double)drawingScale;
- (BOOL)disableTileAnimations;
- (void)fullyRendered;
- (BOOL)wantsFullyRendered;
- (void)drawingDidChange;

@end

