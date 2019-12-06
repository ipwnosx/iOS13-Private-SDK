//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray;
@protocol CEKWheelScrubberCollectionViewLayoutDelegate;

@interface CEKWheelScrubberCollectionViewLayout : UICollectionViewLayout
{
    BOOL _useRoundedCorners;
    id <CEKWheelScrubberCollectionViewLayoutDelegate> _wheelScrubberDelegate;
    long long _layoutDirection;
    long long _layoutOrder;
    NSArray *__cachedLayoutAttributesCells;
    NSArray *__cachedLayoutAttributesDecorations;
    CGSize __cachedContentSize;
    UIEdgeInsets _contentInsets;
}

@property(retain, nonatomic, setter=_setCachedLayoutAttributesDecorations:) NSArray *_cachedLayoutAttributesDecorations; // @synthesize _cachedLayoutAttributesDecorations=__cachedLayoutAttributesDecorations;
@property(retain, nonatomic, setter=_setCachedLayoutAttributesCells:) NSArray *_cachedLayoutAttributesCells; // @synthesize _cachedLayoutAttributesCells=__cachedLayoutAttributesCells;
@property(nonatomic, setter=_setCachedContentSize:) CGSize _cachedContentSize; // @synthesize _cachedContentSize=__cachedContentSize;
@property(nonatomic) long long layoutOrder; // @synthesize layoutOrder=_layoutOrder;
@property(nonatomic) long long layoutDirection; // @synthesize layoutDirection=_layoutDirection;
@property(nonatomic) BOOL useRoundedCorners; // @synthesize useRoundedCorners=_useRoundedCorners;
@property(nonatomic) UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) __weak id <CEKWheelScrubberCollectionViewLayoutDelegate> wheelScrubberDelegate; // @synthesize wheelScrubberDelegate=_wheelScrubberDelegate;
// - (void).cxx_destruct;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(CGRect)arg1;
- (CGSize)collectionViewContentSize;
- (double)_circularlyWrapped:(double)arg1 forCenter:(double)arg2 radius:(double)arg3 scale:(double)arg4;
- (void)prepareLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)arg1;
- (id)init;

@end

