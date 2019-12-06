//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICollectionLayoutAPIRespresenting-Protocol.h>
#import <UIKitCore/_UICollectionViewCompositionalLayoutConfiguration-Protocol.h>

@class NSArray;

@interface _UICollectionViewCompositionalLayoutMutableConfiguration : NSObject <_UICollectionViewCompositionalLayoutConfiguration, _UICollectionLayoutAPIRespresenting>
{
    long long _scrollDirection;
    double _interSectionSpacing;
    NSArray *_boundarySupplementaryItems;
}

+ (id)defaultConfiguration;
@property(copy, nonatomic) NSArray *boundarySupplementaryItems; // @synthesize boundarySupplementaryItems=_boundarySupplementaryItems;
@property(nonatomic) double interSectionSpacing; // @synthesize interSectionSpacing=_interSectionSpacing;
@property(nonatomic) long long scrollDirection; // @synthesize scrollDirection=_scrollDirection;
// - (void).cxx_destruct;
- (id)_apiRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithScrollDirection:(long long)arg1 interSectionSpacing:(double)arg2 boundarySupplememtaryItems:(id)arg3;

@end

