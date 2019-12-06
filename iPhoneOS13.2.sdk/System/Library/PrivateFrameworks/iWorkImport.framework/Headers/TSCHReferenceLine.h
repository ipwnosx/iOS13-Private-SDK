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

@class NSUUID, TSCHChartAxis, TSCHChartAxisID, TSCHChartModel, TSCHReferenceLineNonStyle, TSCHReferenceLineStyle;

__attribute__((visibility("hidden")))
@interface TSCHReferenceLine : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning>
{
    TSCHChartModel *mModel;
    TSCHChartAxisID *mAxisID;
    TSCHReferenceLineStyle *mStyle;
    TSCHReferenceLineNonStyle *mNonStyle;
    NSUUID *mUUID;
    NSUInteger mStyleSwapIndex;
}

+ (id)p_lineLabelForType:(NSUInteger)arg1;
+ (id)defaultNonStyleWithContext:(id)arg1 referenceLineType:(NSUInteger)arg2 axis:(id)arg3;
+ (NSUInteger)styleSwapOrStyleOwnerIndexFromAxisID:(id)arg1 refLineIndex:(NSUInteger)arg2;
+ (NSUInteger)refLineIndexFromStyleSwapOrStyleOwnerIndex:(NSUInteger)arg1;
+ (id)axisIDFromStyleSwapOrStyleOwnerIndex:(NSUInteger)arg1;
+ (NSUInteger)maxNumberOfReferenceLinesOfType:(NSUInteger)arg1;
+ (NSUInteger)maxNumberOfReferenceLines;
+ (unsigned char)styleOwnerPathType;
@property(readonly, copy, nonatomic) TSCHChartAxisID *axisID; // @synthesize axisID=mAxisID;
@property(readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=mUUID;
// - (void).cxx_destruct;
- (void)setStyle:(id)arg1 nonStyle:(id)arg2;
- (id)nonstyle;
- (id)style;
- (id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2;
- (id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2;
@property(readonly, nonatomic) NSUInteger styleSwapIndex;
@property(readonly, nonatomic) __weak TSCHChartAxis *axis;
- (id)model;
- (id)context;
- (id)drawableInfo;
- (id)chartInfo;
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
@property(readonly, nonatomic) NSUInteger refLineType; // @dynamic refLineType;
@property(readonly, nonatomic) BOOL valueLabelShowing; // @dynamic valueLabelShowing;
@property(readonly, nonatomic) BOOL labelShowing; // @dynamic labelShowing;
@property(readonly, nonatomic) BOOL lineShowing; // @dynamic lineShowing;
- (id)localizedTypeName;
- (double)referenceLineAxisValue;
- (void)dealloc;
- (id)initWithModel:(id)arg1 axisID:(id)arg2 index:(NSUInteger)arg3 uuid:(id)arg4;
- (id)g_operationPropertyNameForGenericProperty:(int)arg1;
- (id)g_genericToDefaultPropertyMap;

@end

