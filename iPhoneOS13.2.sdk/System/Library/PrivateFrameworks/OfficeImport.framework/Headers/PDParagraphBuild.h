//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDBuild.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PDParagraphBuild : PDBuild
{
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}

// - (void).cxx_destruct;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (void)setBuildLevel:(int)arg1;
- (int)buildLevel;
- (void)setIsReversedParagraphOrder:(BOOL)arg1;
- (BOOL)isReversedParagraphOrder;
- (void)setAutoAdvanceTime:(double)arg1;
- (double)autoAdvanceTime;
- (id)timeNodeDataList;
- (id)addTimeNodeData;
- (id)timeNodeDataAtIndex:(NSUInteger)arg1;
- (NSUInteger)timeNodeDataListCount;
- (id)init;

@end

