//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, NSDate, SPUnauthorizedTrackingAdvertisement;

@interface SPUnauthorizedTrackingObservation : NSObject <NSSecureCoding>
{
    SPUnauthorizedTrackingAdvertisement *_trackingIdentifier;
    NSArray *_observedLocations;
    NSDate *_observedAt;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSDate *observedAt; // @synthesize observedAt=_observedAt;
@property(copy, nonatomic) NSArray *observedLocations; // @synthesize observedLocations=_observedLocations;
@property(retain, nonatomic) SPUnauthorizedTrackingAdvertisement *trackingIdentifier; // @synthesize trackingIdentifier=_trackingIdentifier;
// - (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCurrentAdvertisementAndLocationHistory:(id)arg1 observedLocations:(id)arg2;

@end

