//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

#import <UIKitCore/_UIDrawsTextInRect-Protocol.h>
#import <UIKitCore/_UITextTiledLayerDelegate-Protocol.h>

@class NSArray, NSMutableSet, _UISceneDisplayLink;
@protocol _UITextCanvasViewContext;

__attribute__((visibility("hidden")))
@interface _UITextCanvasView : UIView <_UITextTiledLayerDelegate, _UIDrawsTextInRect>
{
    NSMutableSet *_ghostedRanges;
    NSMutableSet *_invisibleRanges;
    NSArray *_maskedRects;
    _UISceneDisplayLink *_sceneDisplayLink;
    id <_UITextCanvasViewContext> _context;
}

+ (Class)layerClass;
@property(nonatomic) __weak id <_UITextCanvasViewContext> context; // @synthesize context=_context;
// - (void).cxx_destruct;
- (void)drawRect:(CGRect)arg1;
- (void)drawTextInRect:(CGRect)arg1;
- (void)setNeedsLayout;
- (void)removeInvisibleRange:(NSRange *)arg1;
- (void)addInvisibleRange:(NSRange *)arg1;
- (void)removeAllGhostedRanges;
- (void)addGhostedRange:(NSRange *)arg1;
- (id)_textTiledLayer:(id)arg1 maskedRectsInVisibleRect:(CGRect)arg2;
@property(nonatomic, setter=_setDrawsDebugBaselines:) BOOL _drawsDebugBaselines;
- (void)resumeTiling;
- (void)suspendTiling;
@property(nonatomic) double maxTileHeight;
@property(nonatomic, getter=isTilingEnabled) BOOL tilingEnabled;
- (void)setFrame:(CGRect)arg1;
- (void)setBounds:(CGRect)arg1;
- (void)_updateTilingViewportLayer;
- (void)_updateTilingViewportBookkeeping;
- (void)_windowDidMoveToScreen;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (BOOL)_enableAutoConstraining;
- (id)initWithFrame:(CGRect)arg1;

@end

