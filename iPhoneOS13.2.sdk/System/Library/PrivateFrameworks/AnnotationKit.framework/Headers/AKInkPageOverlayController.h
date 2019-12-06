//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AnnotationKit/AKInkOverlayViewDelegate-Protocol.h>
#import <AnnotationKit/AKShapeDetectionControllerDelegate-Protocol.h>

@class AKInkOverlayView, AKPageController, AKShapeDetectionController;
@protocol PKRulerHostingDelegate;

@interface AKInkPageOverlayController : NSObject <AKInkOverlayViewDelegate, AKShapeDetectionControllerDelegate>
{
    BOOL _ignoreAnnotationAndSelectionKVO;
    BOOL _onlyPencilDraws;
    AKInkOverlayView *_inkOverlayView;
    AKPageController *_pageController;
    AKShapeDetectionController *_shapeDetectionController;
    id <PKRulerHostingDelegate> _rulerHostingDelegate;
    id /* CDUnknownBlockType */ _delayedShapeDetectionBlock;
    double _lastStrokeEndTime;
}

+ (id)newInkOverlayDrawingUndoTargetWithPageController:(id)arg1;
@property double lastStrokeEndTime; // @synthesize lastStrokeEndTime=_lastStrokeEndTime;
@property(copy) id /* CDUnknownBlockType */ delayedShapeDetectionBlock; // @synthesize delayedShapeDetectionBlock=_delayedShapeDetectionBlock;
@property BOOL onlyPencilDraws; // @synthesize onlyPencilDraws=_onlyPencilDraws;
@property BOOL ignoreAnnotationAndSelectionKVO; // @synthesize ignoreAnnotationAndSelectionKVO=_ignoreAnnotationAndSelectionKVO;
@property(nonatomic) __weak id <PKRulerHostingDelegate> rulerHostingDelegate; // @synthesize rulerHostingDelegate=_rulerHostingDelegate;
@property(retain) AKShapeDetectionController *shapeDetectionController; // @synthesize shapeDetectionController=_shapeDetectionController;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
// - (void).cxx_destruct;
- (id)_convertCHDrawing:(id)arg1 fromDrawingInCanvasView:(id)arg2 toInkOverlayView:(id)arg3;
- (CGRect)_convertRect:(CGRect)arg1 fromDrawingInCanvasView:(id)arg2 toPageControllerModelSpace:(id)arg3;
- (CGSize)scaleFromDrawingInCanvasView:(id)arg1 toPageControllerModelSpace:(id)arg2;
- (void)_tearDownGestureDependencies;
- (void)_updateGestureDependencyPriority;
- (void)_setupGestureDependencies;
- (void)_updateAllowedTouchTypesAllEnabled:(BOOL)arg1 pencilEnabled:(BOOL)arg2;
- (void)_controllerWillSave:(id)arg1;
- (void)_toolStatusUpdated:(id)arg1;
- (void)_enclosingScrollViewDidScroll:(id)arg1;
- (void)didToggleRuler;
- (void)_inkDidChangeNotification:(id)arg1;
- (BOOL)shapeDetectionController:(id)arg1 shouldSelectCandidateAnnotation:(id)arg2;
- (BOOL)isWaitingToCoalesceStrokes;
- (BOOL)isIgnoringAnnotationAndSelectionKVO:(id)arg1;
- (void)endIgnoringAnnotationSelectionObservation:(id)arg1;
- (void)beginIgnoringAnnotationSelectionObservation:(id)arg1;
- (id)overlayView:(id)arg1;
- (CGRect)shapeDetectionControllerPositioningRectForCandidatePicker:(id)arg1;
- (void)shapeDetectionControllerWillPickCandidate:(id)arg1 isInk:(BOOL)arg2;
- (void)_performDelayedShapeDetection;
- (void)inputView:(id)arg1 didCollectDrawingForAnalysis:(id)arg2;
- (void)inputViewDidBeginStroke:(id)arg1;
- (BOOL)inputViewCanBeginDrawing:(id)arg1 withTouch:(id)arg2;
@property(retain) AKInkOverlayView *inkOverlayView; // @synthesize inkOverlayView=_inkOverlayView;
- (void)annotationEditingDidEndWithCompletion:(CDUnknownBlockType)arg1;
- (void)_partialTeardown;
- (void)teardown;
- (void)_fullSetup;
- (void)setup;
- (id)initWithPageController:(id)arg1;

@end

