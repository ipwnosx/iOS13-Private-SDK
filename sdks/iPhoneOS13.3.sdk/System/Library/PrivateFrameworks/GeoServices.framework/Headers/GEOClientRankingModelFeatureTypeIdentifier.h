//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOClientRankingModelFeatureIdentifier.h>

@interface GEOClientRankingModelFeatureTypeIdentifier : GEOClientRankingModelFeatureIdentifier
{
    long long _featureType;
}

@property(readonly, nonatomic) long long featureType; // @synthesize featureType=_featureType;
- (long long)featureIdentifierType;
- (id)initWithFeatureType:(long long)arg1;
- (id)init;

@end
