//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSArray, UICollectionViewLayoutAttributes;

__attribute__((visibility("hidden")))
@interface CKBallotLayoutAttributesCollection : NSObject <NSCopying>
{
    UICollectionViewLayoutAttributes *_containerAttributes;
    UICollectionViewLayoutAttributes *_voteCountAttributes;
    UICollectionViewLayoutAttributes *_ackIconAttributes;
    NSArray *_avatarAttributesCollection;
    NSArray *_nameAttributesCollection;
}

@property(retain, nonatomic) NSArray *nameAttributesCollection; // @synthesize nameAttributesCollection=_nameAttributesCollection;
@property(retain, nonatomic) NSArray *avatarAttributesCollection; // @synthesize avatarAttributesCollection=_avatarAttributesCollection;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *ackIconAttributes; // @synthesize ackIconAttributes=_ackIconAttributes;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *voteCountAttributes; // @synthesize voteCountAttributes=_voteCountAttributes;
@property(retain, nonatomic) UICollectionViewLayoutAttributes *containerAttributes; // @synthesize containerAttributes=_containerAttributes;
// - (void).cxx_destruct;
- (void)_applyAlphaToAllAttributesAlpha:(double)arg1;
- (void)_setContainerAttributes:(id)arg1 forLayoutMode:(NSUInteger)arg2;
// - (id)copyWithZone:(_NSZone )arg1;

@end

