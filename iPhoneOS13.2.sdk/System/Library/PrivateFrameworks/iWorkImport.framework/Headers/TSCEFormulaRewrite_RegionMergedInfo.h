//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCEFormulaRewrite_RegionInfo;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_RegionMergedInfo : NSObject
{
//     struct TSUCellCoord _mergeSource;
    TSCEFormulaRewrite_RegionInfo *_mergeRegion;
}

@property(readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *mergeRegion; // @synthesize mergeRegion=_mergeRegion;
// @property(nonatomic) const struct TSUCellCoord mergeSource; // @synthesize mergeSource=_mergeSource;
// - (void).cxx_destruct;
- (id)description;
// - (id)initWithMergeRegion:(id)arg1 mergeSource:(struct TSUCellCoord)arg2;

@end

