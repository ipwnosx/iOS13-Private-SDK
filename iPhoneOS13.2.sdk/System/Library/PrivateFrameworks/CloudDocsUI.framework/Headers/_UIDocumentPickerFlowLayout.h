//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


#import <CloudDocsUI/_UICollectionViewLayoutCellStyle-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerFlowLayout : UICollectionViewFlowLayout <_UICollectionViewLayoutCellStyle>
{
    long long cellStyle;
    double _contentSizeAdjustment;
}

@property(nonatomic) double contentSizeAdjustment; // @synthesize contentSizeAdjustment=_contentSizeAdjustment;
@property(nonatomic) long long cellStyle; // @synthesize cellStyle;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (BOOL)canBeEdited;
- (CGSize)collectionViewContentSize;

@end

