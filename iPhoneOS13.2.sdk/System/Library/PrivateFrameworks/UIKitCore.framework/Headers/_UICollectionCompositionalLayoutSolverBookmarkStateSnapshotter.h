//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _UICollectionSectionSolutionBookmark;

__attribute__((visibility("hidden")))
@interface _UICollectionCompositionalLayoutSolverBookmarkStateSnapshotter : NSObject
{
    _UICollectionSectionSolutionBookmark *_bookmark;
    long long _originalSectionIndex;
}

@property(readonly, nonatomic) long long originalSectionIndex; // @synthesize originalSectionIndex=_originalSectionIndex;
// - (void).cxx_destruct;
- (void)applyStateToBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 originalSectionIndex:(long long)arg2;

@end

