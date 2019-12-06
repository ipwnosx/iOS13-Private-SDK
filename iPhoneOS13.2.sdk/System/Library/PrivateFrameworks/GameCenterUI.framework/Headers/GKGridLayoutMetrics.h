//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary, NSString;

@interface GKGridLayoutMetrics : NSObject <NSCopying>
{
    NSMutableDictionary *_keyToMetrics;
    NSMutableDictionary *_locationToKeyList;
    NSString *_layoutKey;
}

+ (id)metrics;
@property(retain, nonatomic) NSString *layoutKey; // @synthesize layoutKey=_layoutKey;
@property(retain, nonatomic) NSMutableDictionary *locationToKeyList; // @synthesize locationToKeyList=_locationToKeyList;
@property(retain, nonatomic) NSMutableDictionary *keyToMetrics; // @synthesize keyToMetrics=_keyToMetrics;
- (void)configureCollectionView:(id)arg1;
- (void)removeSupplementaryMetricsForKey:(id)arg1;
- (void)replaceSupplementaryMetrics:(id)arg1 forKey:(id)arg2;
- (id)supplementaryMetricsForKey:(id)arg1;
- (void)mergeSupplementaryMetricsFromEnclosingMetrics:(id)arg1 atLocation:(NSUInteger)arg2 globalRange:(NSRange *)arg3;
- (void)addSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(NSUInteger)arg3;
- (void)insertSupplementaryMetrics:(id)arg1 forKey:(id)arg2 atLocation:(NSUInteger)arg3;
- (id)listForLocation:(NSUInteger)arg1;
- (id)keyListForLocation:(NSUInteger)arg1;
- (void)enumerateSupplementaryMetricsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSupplementaryLocations:(CDUnknownBlockType)arg1;
- (id)_gkDescription;
- (id)_gkDescriptionWithChildren:(int)arg1;
- (id)description;
- (id)localDescription;
- (void)dealloc;
- (id)init;
// - (id)copyWithZone:(_NSZone )arg1;
- (long long)prepareLayout:(id)arg1 startingAtSection:(long long)arg2;

@end

