//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VectorKit/VKLabelNavFeature-Protocol.h>

@class NSString, VKLabelNavRoadLabel;

__attribute__((visibility("hidden")))
@interface VKLabelNavManeuver : NSObject <VKLabelNavFeature>
{
    VKLabelNavRoadLabel *_maneuverSign;
    Matrix_6e1d3589 _worldPoint;
//    struct PolylineCoordinate _routeOffset;
    NSString *_name;
    int _type;
    int _drivingSide;
    BOOL _isVisible;
    BOOL _isPicked;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) BOOL isPicked; // @synthesize isPicked=_isPicked;
@property(readonly, nonatomic) BOOL isVisible; // @synthesize isVisible=_isVisible;
// property(readonly, nonatomic) struct PolylineCoordinate routeOffset; // @synthesize routeOffset=_routeOffset;
@property(readonly, nonatomic) VKLabelNavRoadLabel *maneuverSign; // @synthesize maneuverSign=_maneuverSign;
- (id).cxx_construct;
@property(readonly, nonatomic) BOOL isTrafficCameraFeature;
@property(readonly, nonatomic) BOOL isEtaFeature;
@property(readonly, nonatomic) BOOL isGuidanceStepStart;
@property(readonly, nonatomic) NSString *shieldDisplayGroup;
@property(readonly, nonatomic) BOOL isInGuidance;
@property(readonly, nonatomic) BOOL isStartOfRoadName;
@property(readonly, nonatomic) BOOL isAwayFromRoute;
@property(readonly, nonatomic) BOOL isRamp;
@property(readonly, nonatomic) long long intraRoadPriority;
@property(readonly, nonatomic) BOOL isOnRoute;
//  (void)prepareStyleVarsWithContext:(struct NavContext )arg1;
//  (void)layoutWithNavContext:(struct NavContext )arg1;
//  (void)createLabelWithNavContext:(struct NavContext )arg1 artworkCache:(struct VKLabelNavArtworkCache )arg2;
- (id)description;
- (void)dealloc;
- (id)initWithGEOComposedRouteStep:(id)arg1;

@end

