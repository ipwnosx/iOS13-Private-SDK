//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSectionedDataSourceManager.h>

#import <PhotosUICore/PXPhotoLibraryUIChangeObserver-Protocol.h>

@interface PXSuggestionsDataSourceManager : PXSectionedDataSourceManager <PXPhotoLibraryUIChangeObserver>
{
    unsigned short _dataSourceType;
}

+ (id)mostRecentCreationDateForPXSuggestionDataSourceType:(unsigned short)arg1;
+ (id)typePredicateForDataSourceType:(unsigned short)arg1;
+ (id)baseFetchPredicate;
@property(readonly, nonatomic) unsigned short dataSourceType; // @synthesize dataSourceType=_dataSourceType;
- (void)_handleChangeWithDetails:(id)arg1;
- (void)photoLibraryDidChangeOnMainQueue:(id)arg1;
- (id)createInitialDataSource;
- (id)initWithDataSourceType:(unsigned short)arg1;
- (id)init;

@end

