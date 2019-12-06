//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol-Protocol.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport-Protocol.h>
#import <iWorkImport/TSCHStyleOwning-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>

@class TSCHChartInfo;

__attribute__((visibility("hidden")))
@interface TSCHLegendModel : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning, TSDMixing, NSCopying>
{
    TSCHChartInfo *mChartInfo;
    CGRect mLegendFrame;
}

+ (unsigned char)styleOwnerPathType;
@property(nonatomic) __weak TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;
// - (void).cxx_destruct;
- (BOOL)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)nonstyle;
- (id)style;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
- (id)context;
- (id)valueForProperty:(int)arg1;
- (id)objectValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2;
- (int)intValueForProperty:(int)arg1 defaultValue:(int)arg2;
- (BOOL)hasObjectValueForProperty:(int)arg1 value:(id )arg2;
- (BOOL)hasFloatValueForProperty:(int)arg1 value:(float )arg2;
- (BOOL)hasIntValueForProperty:(int)arg1 value:(int )arg2;
- (int)defaultPropertyForGeneric:(int)arg1;
- (int)specificPropertyForGeneric:(int)arg1;
- (id)operationPropertyNameFromGenericProperty:(int)arg1;
- (id)defaultProperties;
- (id)p_genericToDefaultPropertyMap;
- (void)clearParent;
@property(nonatomic) CGSize legendSize;
@property(nonatomic) CGPoint legendOffset;
- (id)model;
- (void)willModify;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)init;
// - (void)loadFromPreUFFArchive:(const struct LegendModelArchive )arg1;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;
// - (void)saveToUnityArchive:(struct ChartArchive )arg1;
// - (void)loadFromUnityArchive:(const struct ChartArchive )arg1;

@end

