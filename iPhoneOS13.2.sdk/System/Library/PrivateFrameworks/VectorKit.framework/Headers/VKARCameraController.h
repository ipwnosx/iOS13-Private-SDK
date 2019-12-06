//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VectorKit/VKScreenCameraController.h>

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class VKTimedAnimation;

__attribute__((visibility("hidden")))
@interface VKARCameraController : VKScreenCameraController <VKGesturingCameraController>
{
    shared_ptr_e963992e _taskContext;
//    struct GlobeView _globeView;
//    struct MapEngine _mapEngine;
    double _currentZoomLevel;
    double _maxZoomLevel;
    double _height;
    double _altitudeOffset;
    Unit_3d259e8a _fovy;
    RigidTransform_b9386d13 _offsetTransform;
    CameraFrame_406dbd31 _cameraFrame;
    RigidTransform_b9386d13 _baseTransform;
    RigidTransform_b9386d13 _arTransform;
    RigidTransform_b9386d13 _currentARTransform;
    RigidTransform_b9386d13 _lastARTransform;
    Quaternion_febf9140 _arOrientation;
    VKTimedAnimation *_transitionAnimation;
    long long _interfaceOrientation;
    Quaternion_febf9140 _interfaceOrientationRotation;
//    struct Coordinate2D<Radians, double> _currentCoordinate;
    BOOL _overrideARFieldOfView;
    Unit_57582783 _fieldOfView;
}

@property(nonatomic) Unit_57582783 fieldOfView; // @synthesize fieldOfView=_fieldOfView;
@property(nonatomic) RigidTransform_b9386d13 offsetTransform; // @synthesize offsetTransform=_offsetTransform;
@property(nonatomic) BOOL overrideARFieldOfView; // @synthesize overrideARFieldOfView=_overrideARFieldOfView;
// property(nonatomic) struct MapEngine mapEngine; // @synthesize mapEngine=_mapEngine;
// property(nonatomic) struct GlobeView globeView; // @synthesize globeView=_globeView;
- (id).cxx_construct;
// - (void).cxx_destruct;
- (void)arSessionWasInterrupted:(NSUInteger)arg1;
- (void)updateCameraFrameFromARTransform;
@property(readonly, nonatomic) float heightScale;
- (RigidTransform_b9386d13)arCameraTransform;
- (void)trasitionToARModeFromCameraFrame:(const CameraFrame_406dbd31 )arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (CameraFrame_406dbd31)cameraFrame;
// - (void)trasitionToARModeAtCoordinate:(CDStruct_c3b9c2ee)arg1 withDuration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_setupPounceAnimation:(const Coordinate3D_bc242218 )arg1 duration:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateBaseTransform;
- (void)_updateARContext;
- (void)updateWithTimestamp:(double)arg1;
- (void)updateWithARSession:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setMaxZoomLevel:(double)arg1;
- (void)setCurrentZoomLevel:(double)arg1;
- (double)topDownMinimumZoomLevel;
- (double)currentZoomLevel;
- (double)maximumZoomLevel;
- (double)minimumZoomLevel;
- (double)_fovAdjustment;
- (double)pitch;
- (double)heading;
- (double)altitude;
- (double)distanceFromCenterCoordinate;
// - (CDStruct_c3b9c2ee)centerCoordinate;
- (id)mapRegion;
- (Matrix_6e1d3589)_intersectAndResolveWorldCollision:(const RigidTransform_b9386d13 )arg1;
- (void)setYaw:(double)arg1 animated:(BOOL)arg2;
- (double)presentationYaw;
- (BOOL)isFullyPitched;
- (BOOL)isPitched;
- (Geocentric_d8fde6f2)cameraPosition;
- (void)updateGlobeFromCamera;
- (long long)tileSize;
- (BOOL)restoreViewportFromInfo:(id)arg1;
- (id)viewportInfo;
- (void)dealloc;
//  (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(struct MapDataAccess )arg2 animationRunner:(struct AnimationRunner )arg3 runLoopController:(struct RunLoopController )arg4 cameraDelegate:(id)arg5;

@end

