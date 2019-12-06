//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNInstructionContents-Protocol.h>

@class GEOComposedWaypoint, NSArray, NSString;
@protocol GEOServerFormattedString;

@interface MNListInstructionContents : NSObject <MNInstructionContents>
{
    double _distance;
    id <GEOServerFormattedString> _distanceFormat;
    NSArray *_instructionFormats;
    int _maneuverType;
    int _transportType;
    NSString *_intersectionName;
    NSString *_destinationName;
    NSString *_exitNumber;
    NSArray *_branchNames;
    NSArray *_towardNames;
    int _junctionAngle;
    BOOL _toFreeway;
    BOOL _suppressNames;
    BOOL _suppressFallback;
    NSString *_roadName;
    GEOComposedWaypoint *_destination;
}

+ (id)contentsWithStep:(id)arg1 transportType:(int)arg2;
@property(nonatomic) BOOL suppressFallback; // @synthesize suppressFallback=_suppressFallback;
@property(nonatomic) BOOL suppressNames; // @synthesize suppressNames=_suppressNames;
@property(retain, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(retain, nonatomic) GEOComposedWaypoint *destination; // @synthesize destination=_destination;
@property(nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(retain, nonatomic) NSArray *instructionFormats; // @synthesize instructionFormats=_instructionFormats;
@property(retain, nonatomic) id <GEOServerFormattedString> distanceFormat; // @synthesize distanceFormat=_distanceFormat;
@property(nonatomic) double distance; // @synthesize distance=_distance;
@property(retain, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL hasServerContent;
- (id)instructionForStage:(NSUInteger)arg1 distance:(double)arg2;
- (id)instruction;
- (id)instructionWithShorterAlternatives;
- (id)_instructionsForFormats:(id)arg1;
- (id)stringForDistance:(double)arg1;
@property(readonly, nonatomic) long long context;
- (id)description;
- (void)_populateFromStep:(id)arg1;
- (id)init;

@end

