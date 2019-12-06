//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AKPageController, AKPageModelController, CALayer, CAShapeLayer, NSMapTable;

@interface AKLayerPresentationManager : NSObject
{
    BOOL _shouldPixelate;
    BOOL _adornmentsHidden;
    BOOL _isObservingModel;
    AKPageController *_pageController;
    CALayer *_rootLayer;
    double _alignmentGuidePositionX;
    double _alignmentGuidePositionY;
    NSMapTable *_annotationsToAnnotationLayers;
    NSMapTable *_annotationsToAdornmentLayers;
    CALayer *_cropAnnotationLayer;
    CALayer *_cropAdornmentLayer;
    CAShapeLayer *_alignmentGuideXLayer;
    CAShapeLayer *_alignmentGuideYLayer;
    AKPageModelController *_pageModelController;
    double _currentScaleFactor;
}

@property double currentScaleFactor; // @synthesize currentScaleFactor=_currentScaleFactor;
@property BOOL isObservingModel; // @synthesize isObservingModel=_isObservingModel;
@property(retain) AKPageModelController *pageModelController; // @synthesize pageModelController=_pageModelController;
@property(retain) CAShapeLayer *alignmentGuideYLayer; // @synthesize alignmentGuideYLayer=_alignmentGuideYLayer;
@property(retain) CAShapeLayer *alignmentGuideXLayer; // @synthesize alignmentGuideXLayer=_alignmentGuideXLayer;
@property(retain) CALayer *cropAdornmentLayer; // @synthesize cropAdornmentLayer=_cropAdornmentLayer;
@property(retain) CALayer *cropAnnotationLayer; // @synthesize cropAnnotationLayer=_cropAnnotationLayer;
@property(retain) NSMapTable *annotationsToAdornmentLayers; // @synthesize annotationsToAdornmentLayers=_annotationsToAdornmentLayers;
@property(retain) NSMapTable *annotationsToAnnotationLayers; // @synthesize annotationsToAnnotationLayers=_annotationsToAnnotationLayers;
@property(nonatomic) double alignmentGuidePositionY; // @synthesize alignmentGuidePositionY=_alignmentGuidePositionY;
@property(nonatomic) double alignmentGuidePositionX; // @synthesize alignmentGuidePositionX=_alignmentGuidePositionX;
@property(nonatomic) BOOL adornmentsHidden; // @synthesize adornmentsHidden=_adornmentsHidden;
@property(nonatomic) BOOL shouldPixelate; // @synthesize shouldPixelate=_shouldPixelate;
@property(retain) CALayer *rootLayer; // @synthesize rootLayer=_rootLayer;
@property __weak AKPageController *pageController; // @synthesize pageController=_pageController;
// - (void).cxx_destruct;
- (void)_removeAdornmentLayerForAnnotation:(id)arg1;
- (void)_addAdornmentLayerForAnnotation:(id)arg1;
- (void)_removeLayerForAnnotation:(id)arg1;
- (void)_addLayerForAnnotation:(id)arg1;
- (void)_stopObservingModel;
- (void)_startObservingModel;
- (double)_hiDPIScaleFactor;
- (void)_applyUpdatesWithScale:(double)arg1 toLayers:(id)arg2 isLiveUpdate:(BOOL)arg3 forceUpdate:(BOOL)arg4;
- (void)_setNeedsDisplayOnNewLayer:(id)arg1;
- (void)forceUpdateAnnotationLayer:(id)arg1;
- (void)_updateLoupeAnnotationsIntersectingRemovedAnnotation:(id)arg1;
- (void)_updateLoupeAnnotationsContributedToByAnnotation:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void )arg4;
- (void)updateScaleFactor:(double)arg1 isLiveUpdate:(BOOL)arg2 forceUpdate:(BOOL)arg3;
- (void)teardown;
- (void)setup;
- (void)dealloc;
- (id)initWithPageController:(id)arg1;

@end

