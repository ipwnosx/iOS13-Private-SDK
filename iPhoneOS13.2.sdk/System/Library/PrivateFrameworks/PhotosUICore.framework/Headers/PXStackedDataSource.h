//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSource.h>

@class NSArray;

@interface PXStackedDataSource : PXSectionedDataSource
{
    NSArray *_dataSections;
}

@property(readonly, nonatomic) NSArray *dataSections; // @synthesize dataSections=_dataSections;
// - (void).cxx_destruct;
//  (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfSubitemsInItem:(long long)arg1 section:(long long)arg2;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)changeDetailsToDataSource:(id)arg1 sectionChanges:(id)arg2 itemChanges:(id)arg3;
- (id)init;
- (id)initWithDataSections:(id)arg1;

@end

