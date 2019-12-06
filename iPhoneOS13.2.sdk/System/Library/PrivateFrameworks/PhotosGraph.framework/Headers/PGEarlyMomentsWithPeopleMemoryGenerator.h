//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGMemoryGenerator.h>

@class NSDate;

@interface PGEarlyMomentsWithPeopleMemoryGenerator : PGMemoryGenerator
{
    BOOL _shouldGenerateAllMemories;
    NSDate *_localDate;
}

+ (id)earlyMomentsByPeopleNodes:(id)arg1;
+ (NSUInteger)numberOfPotentialMemoriesForGraph:(id)arg1;
@property(nonatomic) BOOL shouldGenerateAllMemories; // @synthesize shouldGenerateAllMemories=_shouldGenerateAllMemories;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
// - (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateEarlyMomentsWithPeopleForLocalDate:(id)arg1 enumerationBlock:(CDUnknownBlockType)arg2;

@end

