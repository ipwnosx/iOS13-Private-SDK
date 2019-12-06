//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class RTMapItem;

@interface RTInferredMapItem : NSObject <NSCopying, NSSecureCoding>
{
    RTMapItem *_mapItem;
    double _confidence;
    NSUInteger _source;
}

+ (BOOL)supportsSecureCoding;
+ (id)heaviestMapItemFrom:(id)arg1 closestToLocation:(id)arg2 distanceCalculator:(id)arg3 error:(id )arg4;
+ (id)dedupeInferredMapItems:(id)arg1;
+ (NSUInteger)consolidatedSourceFromInferredMapItems:(id)arg1;
+ (double)consolidatedConfidenceFromConfidences:(id)arg1;
+ (BOOL)hasKnownTypeItem:(id)arg1;
@property(readonly, nonatomic) NSUInteger source; // @synthesize source=_source;
@property(readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property(readonly, nonatomic) RTMapItem *mapItem; // @synthesize mapItem=_mapItem;
// - (void).cxx_destruct;
- (BOOL)isEqual:(id)arg1;
- (NSUInteger)hash;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)description;
- (id)initWithMapItem:(id)arg1 confidence:(double)arg2 source:(NSUInteger)arg3;
- (id)init;

@end

