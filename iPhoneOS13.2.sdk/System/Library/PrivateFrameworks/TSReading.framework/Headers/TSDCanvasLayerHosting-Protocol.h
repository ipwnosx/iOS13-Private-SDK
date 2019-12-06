//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDErrorPresenter-Protocol.h>
#import <TSReading/TSDLayerAndSubviewHosting-Protocol.h>
#import <TSReading/TSDModalOperationPresenter-Protocol.h>
#import <TSReading/TSDMovieCompatibilityAlertPresenter-Protocol.h>

@class CALayer, NSUndoManager, TSDCanvasLayer, TSDCanvasView, TSDInteractiveCanvasController, TSDMacCanvasViewController, TSDiOSCanvasViewController, UIViewController;

@protocol TSDCanvasLayerHosting <NSObject, TSDErrorPresenter, TSDModalOperationPresenter, TSDMovieCompatibilityAlertPresenter, TSDLayerAndSubviewHosting>
@property(readonly, nonatomic) CALayer *clippingLayer;
@property(readonly, nonatomic) TSDCanvasLayer *canvasLayer;
@property(readonly, nonatomic) CALayer *layer;
@property(readonly, nonatomic) TSDCanvasView *canvasView;
@property(nonatomic) TSDInteractiveCanvasController *interactiveCanvasController;
- (BOOL)isInFocusedContainer;
- (void)canvasDidUpdateRepsFromLayouts;
- (NSUndoManager *)undoManager;
- (void)teardown;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)isViewLoaded;
- (void)viewDidLoad;

@optional
- (UIViewController *)viewController;
- (TSDMacCanvasViewController *)asMacCVC;
- (TSDiOSCanvasViewController *)asiOSCVC;
@end

