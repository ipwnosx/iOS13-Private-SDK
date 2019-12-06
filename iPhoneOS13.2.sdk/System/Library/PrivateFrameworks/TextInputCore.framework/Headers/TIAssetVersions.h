//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, TIAsset, TIAssetAttributes;

@interface TIAssetVersions : NSObject
{
    TIAssetAttributes *_attributes;
    TIAsset *_currentAsset;
    NSMutableSet *_assets;
}

@property(readonly, nonatomic) NSMutableSet *assets; // @synthesize assets=_assets;
@property(nonatomic) TIAsset *currentAsset; // @synthesize currentAsset=_currentAsset;
@property(readonly, nonatomic) TIAssetAttributes *attributes; // @synthesize attributes=_attributes;
// - (void).cxx_destruct;
- (BOOL)isEmpty;
- (BOOL)purgeAsset:(id)arg1;
- (id)purgeableAssets;
- (id)assetContentItemsMatching:(id)arg1;
- (void)addAsset:(id)arg1;
- (id)recursiveDescription;
@property(readonly, nonatomic) NSUInteger count;
- (id)initWithAttributes:(id)arg1;

@end

