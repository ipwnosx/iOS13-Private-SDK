//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoUniverse/NUAnimatable-Protocol.h>
#import <NanoUniverse/NURotatable-Protocol.h>

@class MISSING_TYPE, NUScene;

@interface NUSpheroid : NSObject <NUAnimatable, NURotatable>
{
    NUScene *_scene;
    BOOL _visible;
    BOOL _facing;
    float _distance;
    float _distanceScale;
    float _angle;
    float _rotation;
    float _opacity;
    float _radius;
    float _radiusScale;
    NSUInteger _type;
    NUSpheroid *_parent;
    MISSING_TYPE *_light;
    NSUInteger _programType;
    NSUInteger _spriteType;
    MISSING_TYPE *_colorize;
    MISSING_TYPE *_position;
//    struct CLLocationCoordinate2D _homeCoordinate;
//    struct CLLocationCoordinate2D _centerCoordinate;
}

@property(nonatomic, getter=isFacing) BOOL facing; // @synthesize facing=_facing;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
// property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
// property(nonatomic) struct CLLocationCoordinate2D homeCoordinate; // @synthesize homeCoordinate=_homeCoordinate;
@property(nonatomic) NSUInteger spriteType; // @synthesize spriteType=_spriteType;
@property(readonly, nonatomic) NSUInteger programType; // @synthesize programType=_programType;
@property(readonly, nonatomic) MISSING_TYPE *light; // @synthesize light=_light;
@property(readonly, nonatomic) MISSING_TYPE *position; // @synthesize position=_position;
@property(nonatomic) float radiusScale; // @synthesize radiusScale=_radiusScale;
@property(readonly, nonatomic) float radius; // @synthesize radius=_radius;
@property(nonatomic) MISSING_TYPE *colorize; // @synthesize colorize=_colorize;
@property(nonatomic) float opacity; // @synthesize opacity=_opacity;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) float angle; // @synthesize angle=_angle;
@property(nonatomic) float distanceScale; // @synthesize distanceScale=_distanceScale;
@property(nonatomic) float distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) NUSpheroid *parent; // @synthesize parent=_parent;
@property(readonly, nonatomic) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (void)setCenter:(CGPoint)arg1;
- (void)_updateCamera;
//  (void)setCenterCoordinate:(struct CLLocationCoordinate2D)arg1 animated:(BOOL)arg2;
- (MISSING_TYPE *)animatedFloatForKey:(NSUInteger)arg1;
- (void)centerOnCity:(id)arg1;
- (void)updateSunLocationForDate:(id)arg1;
- (void)date:(id)arg1 toRotation:(float )arg2 toAngle:(float )arg3 toLight:(MISSING_TYPE *)arg4 toDistance:(float )arg5 toRadius:(float )arg6;
- (void)date:(id)arg1 toCameraPosition:(MISSING_TYPE *)arg2 toCameraTarget:(MISSING_TYPE *)arg3;
- (void)_updatePositionFromAngle;
- (id)initWithScene:(id)arg1 parent:(id)arg2 type:(NSUInteger)arg3;

@end

