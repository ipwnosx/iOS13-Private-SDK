//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDDrawableInfo.h>

#import <TSReading/TSDMixing-Protocol.h>
#import <TSReading/TSDMutableContainerInfo-Protocol.h>
#import <TSReading/TSDSelectionStatisticsContributor-Protocol.h>
#import <TSReading/TSKDocumentObject-Protocol.h>

@class NSMutableArray, TSDInfoGeometry;

@interface TSDGroupInfo : TSDDrawableInfo <TSDMutableContainerInfo, TSDMixing, TSKDocumentObject, TSDSelectionStatisticsContributor>
{
    NSMutableArray *mChildInfos;
    BOOL mIsInDocument;
}

+ (id)p_drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3 didUngroup:(BOOL )arg4;
+ (id)drawablesToInsertForGroup:(id)arg1 filteredWithTarget:(id)arg2 action:(SEL)arg3;
+ (id)groupGeometryFromChildrenInfos:(id)arg1;
- (void)processSelectedStoragesWithStatisticsController:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)acceptVisitor:(id)arg1;
- (id)childEnumerator;
- (void)didCopy;
- (void)willCopyWithOtherDrawables:(id)arg1;
- (void)ensureGeometryFitsChildren;
- (void)replaceChildInfo:(id)arg1 with:(id)arg2;
- (void)removeChildInfo:(id)arg1;
- (void)makeChildGeometriesRelativeAndComputeOwnAbsoluteGeometry;
- (id)ungroupedGeometryForChildInfo:(id)arg1;
- (id)groupedGeometryForChildInfo:(id)arg1;
- (void)removeAllChildrenInDocument:(BOOL)arg1;
- (void)moveChildren:(id)arg1 toIndexes:(id)arg2;
- (void)insertChildInfo:(id)arg1 above:(id)arg2;
- (void)insertChildInfo:(id)arg1 below:(id)arg2;
- (void)insertChildInfo:(id)arg1 atIndex:(NSUInteger)arg2;
- (void)addChildInfo:(id)arg1;
- (void)setChildInfos:(id)arg1;
- (id)childInfos;
- (id)allNestedChildrenInfosIncludingGroups;
- (id)onlyChild;
- (id)allNestedChildrenInfos;
- (id)copyWithContext:(id)arg1;
- (Class)repClass;
- (Class)layoutClass;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
- (BOOL)aspectRatioLocked;
- (BOOL)canAspectRatioLockBeChangedByUser;
- (void)dealloc;

@end

