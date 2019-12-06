//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGLocationTitleUtility : NSObject
{
}

+ (id)_peopleLocationFromAddressNode:(id)arg1;
+ (id)beautifiedLocationNodeStringWithLocationNode:(id)arg1;
+ (id)_twoPartLocationTitleWithFirstPartTitle:(id)arg1 withDimension:(NSUInteger)arg2 usedFirstPartLocationNode:(id)arg3 addressNode:(id)arg4;
+ (id)_titleWithLineBreakBehavior:(NSUInteger)arg1 forTitle:(id)arg2 titleComponents:(id)arg3;
+ (id)_sortedComponentsFromComponents:(id)arg1;
+ (id)_firstComponentInTimeFromComponents:(id)arg1 momentNodes:(id)arg2 curationAddressNodes:(id)arg3 allowFamilyHome:(BOOL)arg4;
+ (BOOL)_titleComponentsAreInSameSupersetCity:(id)arg1 graph:(id)arg2;
+ (id)_locationStringWithDistrictsFromTitleComponents:(id)arg1 momentNodes:(id)arg2 lineBreakBehavior:(NSUInteger)arg3 allowFamilyHome:(BOOL)arg4;
+ (id)_localizedStringForMultipleLocationsWithFirstComponentForTitle:(id)arg1 secondComponentForTitle:(id)arg2 firstLocation:(id)arg3 otherLocation:(id)arg4;
+ (id)_localizedStringForTwoLocationsWithFirstComponentForTitle:(id)arg1 secondComponentForTitle:(id)arg2 firstLocation:(id)arg3 otherLocation:(id)arg4;
+ (id)_beautifiedLocationStringWithTitleComponents:(id)arg1 momentNodes:(id)arg2 lineBreakBehavior:(NSUInteger)arg3 keyAssetAddressNode:(id)arg4 curationAddressNodes:(id)arg5 isMatchingKeyAsset:(BOOL )arg6 useDistrict:(BOOL)arg7 allowFamilyHome:(BOOL)arg8 showAllCities:(BOOL)arg9;
+ (id)_commonCityTitleComponentsFromMomentNodes:(id)arg1 remainingAddressNodes:(id)arg2 ignoredAddressNodes:(id)arg3 incompleteLocationResolver:(id)arg4;
+ (id)_filteredAOINodeCombinationsForCombinations:(id)arg1 minSize:(NSUInteger)arg2 maxSize:(NSUInteger)arg3 maxTitleLength:(NSUInteger)arg4 minNumberOfAssets:(NSUInteger)arg5 aoiNodesToAddressNodesMapTable:(id)arg6 assetCountByAddressNodeIdentifier:(id)arg7;
+ (id)_sortedAOINodeCombinationsForCombinations:(id)arg1 aoiNodesToAddressNodesMapTable:(id)arg2 assetCountByAddressNodeIdentifier:(id)arg3;
+ (float)_weightForAOINode:(id)arg1 withAddressNodes:(id)arg2;
+ (id)_aoiSubsetsFromAOI:(id)arg1 maxSubsetSize:(NSUInteger)arg2;
+ (id)_aoiSubsetsFromAOI:(id)arg1 idx:(NSUInteger)arg2 currentSubset:(id)arg3 subsetSize:(NSUInteger)arg4;
+ (id)_commonAOIComponentsForMomentNodes:(id)arg1 addressNodes:(id)arg2 aoiDisplayType:(NSUInteger)arg3 containsAmusementParkPOI:(BOOL)arg4;
+ (id)_filteredAOINodesForAddressNodes:(id)arg1 aoiTitleMaximumLength:(NSUInteger)arg2;
+ (id)_filteredAddressNodesWithAddressNodes:(id)arg1 momentNodes:(id)arg2 incompleteLocationResolver:(id)arg3 filterSignificantLocationsOption:(NSUInteger)arg4;
+ (void)generateHighlightLocationTitleForTripWithMomentNodes:(id)arg1 lineBreakBehavior:(NSUInteger)arg2 result:(CDUnknownBlockType)arg3;
+ (void)generateLocationTitleForTripWithMomentNodes:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (BOOL)_containsAmusementParkPOIFromMomentNodes:(id)arg1;
+ (void)generateLocationTitleWithOptions:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (void)generateBusinessItemLocationWithOptions:(id)arg1 result:(CDUnknownBlockType)arg2;

@end

