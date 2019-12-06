//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CALayer, CLKDevice, NSArray, NTKCaliforniaColorPalette, NTKCaliforniaStyleTransitionHandler;

@interface NTKCaliforniaContentView : UIView
{
    BOOL _showingStatusIcon;
    BOOL _circularPillMarkersCenterPointsCalculated;
    NSUInteger _style;
    NSUInteger _dial;
    NSUInteger _color;
    CLKDevice *_device;
    CALayer *_hourTicks;
    CALayer *_minuteTicks;
    CALayer *_circularHourTicks;
    CALayer *_circularMinuteTicks;
    NSArray *_hourMarkers;
    NSArray *_temporaryHourMarkers;
    NSUInteger _temporaryHourMarkersStyle;
    NSUInteger _temporaryHourMarkersDial;
    NTKCaliforniaColorPalette *_colorPalette;
    NTKCaliforniaStyleTransitionHandler *_styleTransitionHandler;
}

+ (id)_disabledLayerActions;
@property(nonatomic) BOOL circularPillMarkersCenterPointsCalculated; // @synthesize circularPillMarkersCenterPointsCalculated=_circularPillMarkersCenterPointsCalculated;
@property(nonatomic) BOOL showingStatusIcon; // @synthesize showingStatusIcon=_showingStatusIcon;
@property(retain, nonatomic) NTKCaliforniaStyleTransitionHandler *styleTransitionHandler; // @synthesize styleTransitionHandler=_styleTransitionHandler;
@property(retain, nonatomic) NTKCaliforniaColorPalette *colorPalette; // @synthesize colorPalette=_colorPalette;
@property(nonatomic) NSUInteger temporaryHourMarkersDial; // @synthesize temporaryHourMarkersDial=_temporaryHourMarkersDial;
@property(nonatomic) NSUInteger temporaryHourMarkersStyle; // @synthesize temporaryHourMarkersStyle=_temporaryHourMarkersStyle;
@property(retain, nonatomic) NSArray *temporaryHourMarkers; // @synthesize temporaryHourMarkers=_temporaryHourMarkers;
@property(retain, nonatomic) NSArray *hourMarkers; // @synthesize hourMarkers=_hourMarkers;
@property(retain, nonatomic) CALayer *circularMinuteTicks; // @synthesize circularMinuteTicks=_circularMinuteTicks;
@property(retain, nonatomic) CALayer *circularHourTicks; // @synthesize circularHourTicks=_circularHourTicks;
@property(retain, nonatomic) CALayer *minuteTicks; // @synthesize minuteTicks=_minuteTicks;
@property(retain, nonatomic) CALayer *hourTicks; // @synthesize hourTicks=_hourTicks;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(nonatomic) NSUInteger color; // @synthesize color=_color;
@property(nonatomic) NSUInteger dial; // @synthesize dial=_dial;
@property(nonatomic) NSUInteger style; // @synthesize style=_style;
// - (void).cxx_destruct;
- (void)applyTransitionFraction:(double)arg1 fromStyle:(NSUInteger)arg2 toStyle:(NSUInteger)arg3;
- (void)applyTransitionFraction:(double)arg1 fromDial:(NSUInteger)arg2 toDial:(NSUInteger)arg3;
- (void)applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3;
- (id)hourTicksForStatus:(BOOL)arg1;
- (void)setHourTicksColor:(id)arg1;
- (void)setMinuteTicksColor:(id)arg1;
- (void)configureTicksForStatus:(BOOL)arg1;
- (id)imageNameComponentForDial:(NSUInteger)arg1;
- (id)_createLayersWithCount:(NSUInteger)arg1;
- (id)_createLayer;
- (id)imageNameComponentForStyle:(NSUInteger)arg1;
- (id)imageNameForDigit:(NSUInteger)arg1 style:(NSUInteger)arg2 dial:(NSUInteger)arg3;
- (id)createPillViewWithAngle:(double)arg1 size:(const CGSize )arg2;
- (id)createPillAtIndex:(NSUInteger)arg1 dial:(NSUInteger)arg2;
- (id)createCaliforniaGraphicAtIndex:(NSUInteger)arg1 dial:(NSUInteger)arg2;
- (id)_digitLayersForStyle:(NSUInteger)arg1 dial:(NSUInteger)arg2;
- (id)textForDigit:(NSUInteger)arg1 style:(NSUInteger)arg2;
- (id)createLabelForStyle:(NSUInteger)arg1 dial:(NSUInteger)arg2;
- (id)pillLayerFromHourMarkerView:(id)arg1;
- (void)setColorInHourMarkerView:(id)arg1 color:(id)arg2;
- (void)_createTemporaryDigitsIfNeededWithStyle:(NSUInteger)arg1 dial:(NSUInteger)arg2;
- (void)_createDigitsIfNeededWithStyle:(NSUInteger)arg1 dial:(NSUInteger)arg2;
- (void)removeHourMarkers;
- (void)removeTemporaryHourMarkers;
- (id)layerWithImage:(id)arg1;
- (void)addCircularTicksIfNeeded;
- (void)addFullscreenTicksIfNeeded;
- (void)setCircularTicksHidden:(BOOL)arg1;
- (CGPoint )circularPillMarkersCenterPoints;
- (CGPoint )hourMarkersCenterPointConstantsForStyle:(NSUInteger)arg1 dial:(NSUInteger)arg2;
- (void)_layoutHourMarkersLayers:(id)arg1 style:(NSUInteger)arg2 dialShape:(NSUInteger)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(CGRect)arg1 dial:(NSUInteger)arg2 style:(NSUInteger)arg3 color:(NSUInteger)arg4 device:(id)arg5;

@end

