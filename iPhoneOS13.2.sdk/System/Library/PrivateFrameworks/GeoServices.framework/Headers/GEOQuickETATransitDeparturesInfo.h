//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface GEOQuickETATransitDeparturesInfo : NSObject
{
    NSString *_direction;
    NSString *_headsign;
    BOOL _departuresHaveFrequency;
    double _departureFrequency;
    NSDate *_departureFrequencyValidUntil;
}

@property(readonly, nonatomic) NSDate *departureFrequencyValidUntil; // @synthesize departureFrequencyValidUntil=_departureFrequencyValidUntil;
@property(readonly, nonatomic) double departureFrequency; // @synthesize departureFrequency=_departureFrequency;
@property(readonly, nonatomic) BOOL departuresHaveFrequency; // @synthesize departuresHaveFrequency=_departuresHaveFrequency;
@property(readonly, nonatomic) NSString *headsign; // @synthesize headsign=_headsign;
@property(readonly, nonatomic) NSString *direction; // @synthesize direction=_direction;
// - (void).cxx_destruct;
- (id)_chooseMostImportantTransitLegInRoute:(id)arg1;
- (id)description;
- (id)initWithComposedRoute:(id)arg1;

@end

