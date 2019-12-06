//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGFeaturedMemoryGenerator.h>

@class NSString;

@interface PGPlaceBusinessMemoryGenerator : PGFeaturedMemoryGenerator
{
    NSString *_business;
    long long _year;
}

@property(nonatomic) long long year; // @synthesize year=_year;
@property(nonatomic) NSString *business; // @synthesize business=_business;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (void)_potentialMemoriesWithBusinessNode:(id)arg1 inYear:(long long)arg2 result:(CDUnknownBlockType)arg3;

@end

