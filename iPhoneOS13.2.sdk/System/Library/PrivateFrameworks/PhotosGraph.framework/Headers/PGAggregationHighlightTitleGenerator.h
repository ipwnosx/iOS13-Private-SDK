//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;

@interface PGAggregationHighlightTitleGenerator : PGTitleGenerator
{
    id <PGEventEnrichment> _collection;
}

@property(readonly, nonatomic) id <PGEventEnrichment> collection; // @synthesize collection=_collection;
// - (void).cxx_destruct;
- (BOOL)_useSplitTimeTitlesIfNeeded;
- (id)_locationTitleUsingKeyAssetAddressNode:(id)arg1 curationAddressNodes:(id)arg2;
- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)initWithCollection:(id)arg1 keyAsset:(id)arg2 curatedAssetCollection:(id)arg3;

@end

