//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleSpecArgument.h>

@class NSSet;

@interface PGTitleSpecLocationArgument : PGTitleSpecArgument
{
    BOOL _filterLocations;
    NSUInteger _type;
    NSSet *_usedLocationNodes;
    NSUInteger _lineBreakBehavior;
}

+ (id)argumentWithLocationType:(NSUInteger)arg1 filterLocations:(BOOL)arg2;
@property NSUInteger lineBreakBehavior; // @synthesize lineBreakBehavior=_lineBreakBehavior;
@property(retain) NSSet *usedLocationNodes; // @synthesize usedLocationNodes=_usedLocationNodes;
@property(readonly) BOOL filterLocations; // @synthesize filterLocations=_filterLocations;
@property(readonly) NSUInteger type; // @synthesize type=_type;
// - (void).cxx_destruct;
- (id)_generateLocationTitleWithOptions:(id)arg1;
- (id)_generateBusinessItemTitleWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1;
- (id)initWithLocationType:(NSUInteger)arg1 filterLocations:(BOOL)arg2;

@end

