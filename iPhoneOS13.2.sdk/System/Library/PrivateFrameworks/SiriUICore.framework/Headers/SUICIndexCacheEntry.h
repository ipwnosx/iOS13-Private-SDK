//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SUICIndexCacheEntry : NSObject
{
    unsigned int _numAuraIndices;
    unsigned int _numAuraIndicesCulled;
    unsigned int _numWaveIndices;
    unsigned int _metal_indices;
}

@property(nonatomic) unsigned int metal_indices; // @synthesize metal_indices=_metal_indices;
@property(nonatomic) unsigned int numWaveIndices; // @synthesize numWaveIndices=_numWaveIndices;
@property(nonatomic) unsigned int numAuraIndicesCulled; // @synthesize numAuraIndicesCulled=_numAuraIndicesCulled;
@property(nonatomic) unsigned int numAuraIndices; // @synthesize numAuraIndices=_numAuraIndices;
- (void)dealloc;

@end

