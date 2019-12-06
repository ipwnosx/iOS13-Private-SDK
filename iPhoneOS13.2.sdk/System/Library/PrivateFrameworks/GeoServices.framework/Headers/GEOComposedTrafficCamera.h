//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOComposedEnrouteNotice.h>


@class GEOTrafficCamera, NSString;

@interface GEOComposedTrafficCamera : GEOComposedEnrouteNotice <NSSecureCoding>
{
    GEOTrafficCamera *_trafficCamera;
}

+ (BOOL)supportsSecureCoding;
// - (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) unsigned int cameraPriority;
@property(readonly, nonatomic) BOOL hasCameraPriority;
@property(readonly, nonatomic) double speedThreshold;
@property(readonly, nonatomic) BOOL hasSpeedThreshold;
@property(readonly, nonatomic) NSString *speedLimitText;
@property(readonly, nonatomic) BOOL hasSpeedLimitText;
@property(readonly, nonatomic) unsigned int highlightDistance;
@property(readonly, nonatomic) int type;
- (id)detailFormatForLocation:(id)arg1;
- (id)titleFormatForLocation:(id)arg1;
- (id)position;
- (id)description;
- (id)initWithEnrouteNotice:(id)arg1 trafficCamera:(id)arg2 onRoute:(id)arg3;

@end

