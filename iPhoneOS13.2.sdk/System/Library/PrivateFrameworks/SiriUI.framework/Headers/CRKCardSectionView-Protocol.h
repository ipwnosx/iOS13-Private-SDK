//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, UIView;
@protocol CRCardSection, CRKComposableView;

@protocol CRKCardSectionView <NSObject>
+ (CGSize)sizeThatFitsCardSection:(id <CRCardSection>)arg1 boundingSize:(CGSize)arg2;
@property(nonatomic) __weak UIView<CRKComposableView> *composedSuperview;
@property(copy, nonatomic) NSString *cardSectionViewIdentifier;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)removeFromComposedSuperview;
@end

