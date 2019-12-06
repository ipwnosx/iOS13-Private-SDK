//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCollectionsDataSource.h>

@class NSString, PHFetchResult;

@interface PXTransientCollectionsDataSource : PXCollectionsDataSource
{
    PHFetchResult *_fetchResult;
    NSString *_navigationRootIdentifier;
}

@property(readonly, nonatomic) NSString *navigationRootIdentifier; // @synthesize navigationRootIdentifier=_navigationRootIdentifier;
@property(readonly, nonatomic) PHFetchResult *fetchResult; // @synthesize fetchResult=_fetchResult;
// - (void).cxx_destruct;
//  (id)objectsInIndexPath:(struct PXSimpleIndexPath)arg1;
//  (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)collectionListForSection:(long long)arg1;
- (id)collectionAtIndexPath:(id)arg1;
- (id)indexPathForCollection:(id)arg1;
- (id)init;
- (id)initWithNavigationRootTitle:(id)arg1 identifier:(id)arg2 photoLibrary:(id)arg3;
- (id)initWithFetchResult:(id)arg1;

@end

