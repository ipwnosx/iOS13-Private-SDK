//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSDate;

@interface PGPastSupersetMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSDate *_localDate;
}

@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
// - (void).cxx_destruct;
- (BOOL)canFallbackToDejunkAndDedupeForShowMore;
- (void)_potentialMemoryAssetsForSupersetLocationNodes:(id)arg1 interestingMomentNodes:(id)arg2 andMomentNodes:(id)arg3 result:(CDUnknownBlockType)arg4;
- (void)_generateExtendedCuratedSetForMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;

@end

