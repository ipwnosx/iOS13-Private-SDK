//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PGGraph, PGManager;

@interface PGSharingFeatureExtractor : NSObject
{
    PGManager *_manager;
    PGGraph *_graph;
}

+ (id)extractFeatureNodesFromAsset:(id)arg1 andPersonLocalIdentifiers:(id)arg2 inGraph:(id)arg3;
+ (id)personLocalIdentifiersByAssetUUIDFromSharingRecords:(id)arg1;
+ (id)recordsFilename;
+ (id)featuresFilename;
// - (void).cxx_destruct;
- (id)extractFeaturesFromSharingRecords:(id)arg1 withProgressBlock:(CDUnknownBlockType)arg2;
- (BOOL)persistFeatures:(id)arg1;
- (id)persistedFeatures;
- (id)extractSharingRecordsWithProgressBlock:(CDUnknownBlockType)arg1;
- (BOOL)persistSharingRecords:(id)arg1;
- (id)persistedSharingRecordsForType:(NSUInteger)arg1;
- (id)persistedSharingRecords;
- (void)prefetchMomentNodeAndAssetInSharingRecords:(id)arg1;
- (id)_loadAllPersistedSharingRecordsFromDisk;
- (id)initWithManager:(id)arg1 graph:(id)arg2;

@end

