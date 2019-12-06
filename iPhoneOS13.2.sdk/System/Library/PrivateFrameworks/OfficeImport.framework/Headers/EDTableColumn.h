//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDResources, EDString;

__attribute__((visibility("hidden")))
@interface EDTableColumn : NSObject
{
    EDResources *mResources;
    NSUInteger mHeaderRowDxfIndex;
    NSUInteger mTotalsRowDxfIndex;
    NSUInteger mDataAreaDxfIndex;
    EDString *mName;
    EDString *mUniqueName;
    EDString *mTotalsRowLabel;
}

+ (id)tableColumnWithResources:(id)arg1;
// - (void).cxx_destruct;
- (id)description;
- (void)setTotalsRowLabel:(id)arg1;
- (id)totalsRowLabel;
- (void)setUniqueName:(id)arg1;
- (id)uniqueName;
- (void)setName:(id)arg1;
- (id)name;
- (void)setDataAreaDxf:(id)arg1;
- (id)dataAreaDxf;
- (void)setTotalsRowDxf:(id)arg1;
- (id)totalsRowDxf;
- (void)setHeaderRowDxf:(id)arg1;
- (id)headerRowDxf;
- (id)initWithResources:(id)arg1;
- (void)setDataAreaDxfIndex:(NSUInteger)arg1;
- (NSUInteger)dataAreaDxfIndex;
- (void)setTotalsRowDxfIndex:(NSUInteger)arg1;
- (NSUInteger)totalsRowDxfIndex;
- (void)setHeaderRowDxfIndex:(NSUInteger)arg1;
- (NSUInteger)headerRowDxfIndex;

@end

