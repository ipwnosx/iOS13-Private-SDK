//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UICollectionViewFlowLayoutInvalidationContext.h"

@class NSIndexSet, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface EmojiSectionHeaderLayoutInvalidationContext : UICollectionViewFlowLayoutInvalidationContext
{
    NSMutableIndexSet *_invalidatedSections;
//     struct __CFDictionary _headerWidthDict;
}

@property(readonly, nonatomic) NSIndexSet *invalidatedSections; // @synthesize invalidatedSections=_invalidatedSections;
- (double)preferredWidthForHeaderInSection:(long long)arg1;
- (void)dealloc;

@end

