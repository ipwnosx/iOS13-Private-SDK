//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, OITSUNoCopyDictionary;

__attribute__((visibility("hidden")))
@interface OADGraphicFeatureCache : NSObject
{
    NSMutableArray *mFeatureUsageArray;
    OITSUNoCopyDictionary *mFeatureMap;
}

// - (void).cxx_destruct;
- (id)featuresSortedByUsageCount;
- (id)countedFeatureAtIndex:(NSUInteger)arg1;
- (NSUInteger)cacheFeature:(id)arg1;
- (void)dealloc;
- (id)init;

@end

