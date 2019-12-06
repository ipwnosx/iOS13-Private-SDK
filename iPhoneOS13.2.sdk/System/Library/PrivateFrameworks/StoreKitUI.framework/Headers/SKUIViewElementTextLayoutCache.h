//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, SKUILayoutCache;

__attribute__((visibility("hidden")))
@interface SKUIViewElementTextLayoutCache : NSObject
{
    SKUILayoutCache *_layoutCache;
    NSMutableDictionary *_layoutMapTables;
}

@property(readonly, nonatomic) SKUILayoutCache *layoutCache; // @synthesize layoutCache=_layoutCache;
// - (void).cxx_destruct;
- (id)_layoutIndexForViewElement:(id)arg1 width:(long long)arg2;
- (id)_existingLayoutForViewElement:(id)arg1 width:(long long)arg2;
- (id)_createLayoutRequestForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (id)_createLayoutRequestForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (id)_createLayoutRequestForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (id)_createLayoutRequestForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (id)_createLayoutRequestForBadge:(id)arg1 width:(long long)arg2;
- (CGSize)_bestGuessSizeForOrdinal:(id)arg1 width:(double)arg2;
- (CGSize)_bestGuessSizeForLabel:(id)arg1 width:(double)arg2;
- (CGSize)_bestGuessSizeForButton:(id)arg1 width:(double)arg2;
- (id)_bestGuessCache;
- (void)_addRequest:(id)arg1 forViewElement:(id)arg2;
- (CGSize)sizeForViewElement:(id)arg1 width:(double)arg2;
- (CGSize)sizeForLabel:(id)arg1 width:(double)arg2;
- (CGSize)sizeForButton:(id)arg1 width:(double)arg2;
- (void)requestLayoutForViewElement:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForOrdinal:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForLabel:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForButton:(id)arg1 attributedString:(id)arg2 width:(long long)arg3;
- (void)requestLayoutForBadge:(id)arg1 width:(long long)arg2;
- (id)layoutForWidth:(long long)arg1 viewElement:(id)arg2;
- (void)invalidateLayoutsForUpdatedElements;
- (CGSize)estimatedSizeForOrdinal:(id)arg1 width:(double)arg2;
- (CGSize)estimatedSizeForLabel:(id)arg1 width:(double)arg2;
- (CGSize)estimatedSizeForButton:(id)arg1 width:(double)arg2;
- (id)initWithLayoutCache:(id)arg1;

@end

