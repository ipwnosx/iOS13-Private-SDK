//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface PLDataCluster : NSObject
{
    NSArray *_objects;
    double _diameter;
    id _clustroid;
    double _score;
}

+ (id)clusterWithObjects:(id)arg1;
+ (id)clusterWithObjects:(id)arg1 clustroid:(id)arg2 diameter:(double)arg3;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) id clustroid; // @synthesize clustroid=_clustroid;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
// - (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)meanUniversalDate;
- (id)meanRegion:(double)arg1;
- (id)approximateRegionWithMaximumRadius:(double)arg1;
- (id)universalDates;
- (id)locations;

@end

