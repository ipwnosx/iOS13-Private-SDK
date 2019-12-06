//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIItemGridCollectionViewLayout.h>

@class UICollectionView;

__attribute__((visibility("hidden")))
@interface SKUISearchCollectionViewFlowLayout : SKUIItemGridCollectionViewLayout
{
    UICollectionView *_collectionView;
    long long _numberOfRows;
    long long _numberOfColumns;
    CGSize _headerSize;
    double _horizontalPadding;
    double _verticalPadding;
    BOOL _backfills;
}

@property(nonatomic) BOOL backfills; // @synthesize backfills=_backfills;
@property(nonatomic) double verticalPadding; // @synthesize verticalPadding=_verticalPadding;
@property(nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
// - (void).cxx_destruct;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (id)init;

@end

