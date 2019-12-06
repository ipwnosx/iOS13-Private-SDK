//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DChartTitlePositioner, TSCH3DLabelResources, TSCHChartInfo;

__attribute__((visibility("hidden")))
@interface TSCH3DChartTitleProperties : NSObject
{
    TSCHChartInfo *mInfo;
    TSCH3DLabelResources *mLabels;
    BOOL mHidden;
    TSCH3DChartTitlePositioner *mCachedPositioner;
}

+ (id)propertiesWithInfo:(id)arg1 styleIndex:(NSUInteger)arg2;
@property(retain, nonatomic) TSCH3DChartTitlePositioner *cachedPositioner; // @synthesize cachedPositioner=mCachedPositioner;
@property(nonatomic) BOOL hidden; // @synthesize hidden=mHidden;
@property(readonly, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mInfo;
@property(readonly, nonatomic) TSCH3DLabelResources *labels; // @synthesize labels=mLabels;
// - (id)copyWithZone:(_NSZone )arg1;
- (void)dealloc;
- (id)initWithInfo:(id)arg1 styleIndex:(NSUInteger)arg2;

@end

